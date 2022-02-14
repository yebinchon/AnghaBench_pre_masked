
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef scalar_t__ mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 char* FUNC_1 (struct archive_entry*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static size_t
FUNC_3(struct archive_entry *VAR_1)
{
 mode_t VAR_2;
 const char *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 == ((void*)0))
  return (0);
 if (VAR_2 == VAR_0 &&
     (VAR_3[0] == '\0' || VAR_3[FUNC_2(VAR_3) - 1] != '/')) {
  return FUNC_2(VAR_3) + 1;
 } else {
  return FUNC_2(VAR_3);
 }
}
