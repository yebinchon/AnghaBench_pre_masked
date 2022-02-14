
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ mode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_write*,char const*,int) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct archive_entry *VAR_3, struct archive_write *VAR_4)
{
 int VAR_5;
 const char *VAR_6;
 mode_t VAR_7;
 size_t VAR_8;

 VAR_6 = FUNC_2(VAR_3);
 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = 0;

 if (VAR_6 == ((void*)0))
  return (VAR_1);

 VAR_5 = FUNC_0(VAR_4, VAR_6, FUNC_3(VAR_6));
 if (VAR_5 != VAR_2)
  return (VAR_1);
 VAR_8 += FUNC_3(VAR_6);


 if ((VAR_7 == VAR_0) & (VAR_6[FUNC_3(VAR_6) - 1] != '/')) {
  VAR_5 = FUNC_0(VAR_4, "/", 1);
  if (VAR_5 != VAR_2)
   return (VAR_1);
  VAR_8 += 1;
 }

 return ((int)VAR_8);
}
