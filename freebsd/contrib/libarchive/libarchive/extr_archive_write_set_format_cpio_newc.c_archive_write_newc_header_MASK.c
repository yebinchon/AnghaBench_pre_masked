
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int * FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (struct archive_entry*,char const**,size_t*,int ) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (int *,int,char*) ;
 int VAR_3 ;
 int FUNC_6 (struct archive_write*) ;
 int FUNC_7 (struct archive_write*,struct archive_entry*) ;

__attribute__((used)) static int
FUNC_8(struct archive_write *VAR_4, struct archive_entry *VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;

 if (FUNC_0(VAR_5) == 0) {
  FUNC_5(&VAR_4->archive, -1, "Filetype required");
  return (VAR_0);
 }

 if (FUNC_2(VAR_5, &VAR_6, &VAR_7, FUNC_6(VAR_4)) != 0
     && VAR_3 == VAR_2) {
  FUNC_5(&VAR_4->archive, VAR_2,
      "Can't allocate memory for Pathname");
  return (VAR_1);
 }
 if (VAR_7 == 0 || VAR_6 == ((void*)0) || VAR_6[0] == '\0') {
  FUNC_5(&VAR_4->archive, -1, "Pathname required");
  return (VAR_0);
 }

 if (FUNC_1(VAR_5) == ((void*)0)
     && (!FUNC_4(VAR_5) || FUNC_3(VAR_5) < 0)) {
  FUNC_5(&VAR_4->archive, -1, "Size required");
  return (VAR_0);
 }
 return FUNC_7(VAR_4, VAR_5);
}
