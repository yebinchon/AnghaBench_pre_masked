
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pretty_printer ;


 int FUNC_0 (int *,char const) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2 (pretty_printer *VAR_0, const char *VAR_1)
{
  if (VAR_1 == ((void*)0))
    return;

  while (*VAR_1)
    {
      switch (VAR_1[0])
 {
 case '\b':
   FUNC_1 (VAR_0, "\\b");
   break;

 case '\f':
   FUNC_1 (VAR_0, "\\f");
   break;

 case '\n':
   FUNC_1 (VAR_0, "\\n");
   break;

 case '\r':
   FUNC_1 (VAR_0, "\\r");
   break;

 case '\t':
   FUNC_1 (VAR_0, "\\t");
   break;

 case '\v':
   FUNC_1 (VAR_0, "\\v");
   break;

 case '\\':
   FUNC_1 (VAR_0, "\\\\");
   break;

 case '\"':
   FUNC_1 (VAR_0, "\\\"");
   break;

 case '\'':
   FUNC_1 (VAR_0, "\\'");
   break;



 case '\1':
   FUNC_1 (VAR_0, "\\1");
   break;

 case '\2':
   FUNC_1 (VAR_0, "\\2");
   break;

 case '\3':
   FUNC_1 (VAR_0, "\\3");
   break;

 case '\4':
   FUNC_1 (VAR_0, "\\4");
   break;

 case '\5':
   FUNC_1 (VAR_0, "\\5");
   break;

 case '\6':
   FUNC_1 (VAR_0, "\\6");
   break;

 case '\7':
   FUNC_1 (VAR_0, "\\7");
   break;

 default:
   FUNC_0 (VAR_0, VAR_1[0]);
   break;
 }
      VAR_1++;
    }
}
