
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum help_format { ____Placeholder_help_format } help_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum help_format FUNC_2(const char *VAR_4)
{
 if (!FUNC_1(VAR_4, "man"))
  return VAR_1;
 if (!FUNC_1(VAR_4, "info"))
  return VAR_0;
 if (!FUNC_1(VAR_4, "web") || !FUNC_1(VAR_4, "html"))
  return VAR_3;

 FUNC_0("unrecognized help format '%s'", VAR_4);
 return VAR_2;
}
