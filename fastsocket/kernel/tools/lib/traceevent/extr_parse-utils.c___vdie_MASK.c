
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char const*,int ) ;

void FUNC_4(const char *VAR_2, va_list VAR_3)
{
 int VAR_4 = VAR_0;

 if (VAR_0)
  FUNC_2("trace-cmd");
 else
  VAR_4 = -1;

 FUNC_1(VAR_1, "  ");
 FUNC_3(VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_1, "\n");
 FUNC_0(VAR_4);
}
