
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {int quiet; scalar_t__ verbose; int matching; int bytes_per_block; int filename; int * passphrase; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,int ) ;
 scalar_t__ FUNC_4 (int ,struct archive_entry*) ;
 int FUNC_5 (struct archive*,int *) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_10 (struct archive*,int ,int ) ;
 int FUNC_11 (struct archive*,struct cpio*,int *) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int,int ,char*,...) ;
 int FUNC_17 (struct cpio*,struct archive_entry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_18(struct cpio *VAR_5)
{
 struct archive *VAR_6;
 struct archive_entry *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_8();
 if (VAR_6 == ((void*)0))
  FUNC_16(1, 0, "Couldn't allocate archive object");
 FUNC_12(VAR_6);
 FUNC_13(VAR_6);
 if (VAR_5->passphrase != ((void*)0))
  VAR_8 = FUNC_5(VAR_6, VAR_5->passphrase);
 else
  VAR_8 = FUNC_11(VAR_6, VAR_5,
   &VAR_2);
 if (VAR_8 != VAR_1)
  FUNC_16(1, 0, "%s", FUNC_2(VAR_6));

 if (FUNC_10(VAR_6, VAR_5->filename,
     VAR_5->bytes_per_block))
  FUNC_16(1, FUNC_1(VAR_6),
      "%s", FUNC_2(VAR_6));
 for (;;) {
  VAR_8 = FUNC_9(VAR_6, &VAR_7);
  if (VAR_8 == VAR_0)
   break;
  if (VAR_8 != VAR_1) {
   FUNC_16(1, FUNC_1(VAR_6),
       "%s", FUNC_2(VAR_6));
  }
  if (FUNC_4(VAR_5->matching, VAR_7))
   continue;
  if (VAR_5->verbose)
   FUNC_17(VAR_5, VAR_7);
  else
   FUNC_15(VAR_4, "%s\n", FUNC_0(VAR_7));
 }
 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 != VAR_1)
  FUNC_16(1, 0, "%s", FUNC_2(VAR_6));
 if (!VAR_5->quiet) {
  int64_t VAR_9 = (FUNC_3(VAR_6, 0) + 511)
         / 512;
  FUNC_15(VAR_3, "%lu %s\n", (unsigned long)VAR_9,
      VAR_9 == 1 ? "block" : "blocks");
 }
 FUNC_7(VAR_6);
 FUNC_14(0);
}
