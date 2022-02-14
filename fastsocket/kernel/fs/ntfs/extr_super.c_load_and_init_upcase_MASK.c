
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int i_mapping; } ;
struct inode {int i_mapping; } ;
typedef int pgoff_t ;
typedef scalar_t__ ntfschar ;
struct TYPE_3__ {scalar_t__* upcase; int upcase_len; struct super_block* sb; } ;
typedef TYPE_1__ ntfs_volume ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (char*,int ,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct super_block*,char*) ;
 int FUNC_9 (scalar_t__*) ;
 struct page* FUNC_10 (struct super_block*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int) ;
 struct page* FUNC_12 (int ,int) ;
 int VAR_8 ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static bool FUNC_15(ntfs_volume *VAR_9)
{
 loff_t VAR_10;
 struct super_block *VAR_11 = VAR_9->sb;
 struct inode *VAR_12;
 struct page *VAR_13;
 pgoff_t VAR_14, VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;

 FUNC_7("Entering.");

 VAR_12 = FUNC_10(VAR_11, VAR_0);
 if (FUNC_0(VAR_12) || FUNC_3(VAR_12)) {
  if (!FUNC_0(VAR_12))
   FUNC_2(VAR_12);
  goto upcase_failed;
 }




 VAR_10 = FUNC_1(VAR_12);
 if (!VAR_10 || VAR_10 & (sizeof(ntfschar) - 1) ||
   VAR_10 > 64ULL * 1024 * sizeof(ntfschar))
  goto iput_upcase_failed;
 VAR_9->upcase = (ntfschar*)FUNC_11(VAR_10);
 if (!VAR_9->upcase)
  goto iput_upcase_failed;
 VAR_14 = 0;
 VAR_15 = VAR_10 >> VAR_2;
 VAR_16 = VAR_3;
 while (VAR_14 < VAR_15) {

read_partial_upcase_page:
  VAR_13 = FUNC_12(VAR_12->i_mapping, VAR_14);
  if (FUNC_0(VAR_13))
   goto iput_upcase_failed;
  FUNC_4((char*)VAR_9->upcase + (VAR_14++ << VAR_2),
    FUNC_14(VAR_13), VAR_16);
  FUNC_13(VAR_13);
 };
 if (VAR_16 == VAR_3) {
  VAR_16 = VAR_10 & ~VAR_1;
  if (VAR_16)
   goto read_partial_upcase_page;
 }
 VAR_9->upcase_len = VAR_10 >> VAR_4;
 FUNC_7("Read %llu bytes from $UpCase (expected %zu bytes).",
   VAR_10, 64 * 1024 * sizeof(ntfschar));
 FUNC_2(VAR_12);
 FUNC_5(&VAR_7);
 if (!VAR_5) {
  FUNC_7("Using volume specified $UpCase since default is "
    "not present.");
  FUNC_6(&VAR_7);
  return 1;
 }
 VAR_18 = VAR_6;
 if (VAR_18 > VAR_9->upcase_len)
  VAR_18 = VAR_9->upcase_len;
 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
  if (VAR_9->upcase[VAR_17] != VAR_5[VAR_17])
   break;
 if (VAR_17 == VAR_18) {
  FUNC_9(VAR_9->upcase);
  VAR_9->upcase = VAR_5;
  VAR_9->upcase_len = VAR_18;
  VAR_8++;
  FUNC_6(&VAR_7);
  FUNC_7("Volume specified $UpCase matches default. Using "
    "default.");
  return 1;
 }
 FUNC_6(&VAR_7);
 FUNC_7("Using volume specified $UpCase since it does not match "
   "the default.");
 return 1;
iput_upcase_failed:
 FUNC_2(VAR_12);
 FUNC_9(VAR_9->upcase);
 VAR_9->upcase = ((void*)0);
upcase_failed:
 FUNC_5(&VAR_7);
 if (VAR_5) {
  VAR_9->upcase = VAR_5;
  VAR_9->upcase_len = VAR_6;
  VAR_8++;
  FUNC_6(&VAR_7);
  FUNC_8(VAR_11, "Failed to load $UpCase from the volume. Using "
    "default.");
  return 1;
 }
 FUNC_6(&VAR_7);
 FUNC_8(VAR_11, "Failed to initialize upcase table.");
 return 0;
}
