
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum help_format { ____Placeholder_help_format } help_format ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,void*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 enum help_format *VAR_4 = VAR_3;

 if (!FUNC_6(VAR_1, "help.format")) {
  if (!VAR_2)
   return FUNC_2(VAR_1);
  *VAR_4 = FUNC_3(VAR_2);
  if (*VAR_4 == VAR_0)
   return -1;
  return 0;
 }
 if (!FUNC_6(VAR_1, "man.viewer")) {
  if (!VAR_2)
   return FUNC_2(VAR_1);
  FUNC_0(VAR_2);
  return 0;
 }
 if (!FUNC_5(VAR_1, "man."))
  return FUNC_1(VAR_1, VAR_2);

 return FUNC_4(VAR_1, VAR_2, VAR_3);
}
