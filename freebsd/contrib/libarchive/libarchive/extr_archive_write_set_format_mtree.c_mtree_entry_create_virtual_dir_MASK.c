
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree_entry {TYPE_1__* dir_info; } ;
struct archive_write {int archive; } ;
struct archive_entry {int dummy; } ;
struct TYPE_2__ {int virtual; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*,char const*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*,int) ;
 int FUNC_4 (struct archive_entry*,int ,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (struct archive_write*,struct archive_entry*,struct mtree_entry**) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct archive_write *VAR_5, const char *VAR_6,
    struct mtree_entry **VAR_7)
{
 struct archive_entry *VAR_8;
 struct mtree_entry *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2();
 if (VAR_8 == ((void*)0)) {
  *VAR_7 = ((void*)0);
  FUNC_5(&VAR_5->archive, VAR_4,
      "Can't allocate memory");
  return (VAR_1);
 }
 FUNC_0(VAR_8, VAR_6);
 FUNC_3(VAR_8, VAR_0 | 0755);
 FUNC_4(VAR_8, FUNC_7(((void*)0)), 0);

 VAR_10 = FUNC_6(VAR_5, VAR_8, &VAR_9);
 FUNC_1(VAR_8);
 if (VAR_10 < VAR_3) {
  *VAR_7 = ((void*)0);
  FUNC_5(&VAR_5->archive, VAR_4,
      "Can't allocate memory");
  return (VAR_1);
 }

 VAR_9->dir_info->virtual = 1;

 *VAR_7 = VAR_9;
 return (VAR_2);
}
