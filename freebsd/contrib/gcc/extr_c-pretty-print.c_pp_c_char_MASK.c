
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c_pretty_printer ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void
FUNC_4 (c_pretty_printer *VAR_0, int VAR_1)
{
  if (FUNC_0 (VAR_1))
    {
      switch (VAR_1)
 {
 case '\\': FUNC_3 (VAR_0, "\\\\"); break;
 case '\'': FUNC_3 (VAR_0, "\\\'"); break;
 case '\"': FUNC_3 (VAR_0, "\\\""); break;
 default: FUNC_1 (VAR_0, VAR_1);
 }
    }
  else
    FUNC_2 (VAR_0, "\\%03o", (unsigned) VAR_1);
}
