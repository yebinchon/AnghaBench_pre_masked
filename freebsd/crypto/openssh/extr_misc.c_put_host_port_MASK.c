
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char const*,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char const*) ;

char *
FUNC_5(const char *VAR_2, u_short VAR_3)
{
 char *VAR_4;

 if (VAR_3 == 0 || VAR_3 == VAR_0)
  return(FUNC_4(VAR_2));
 if (FUNC_0(&VAR_4, "[%s]:%d", VAR_2, (int)VAR_3) < 0)
  FUNC_2("put_host_port: asprintf: %s", FUNC_3(VAR_1));
 FUNC_1("put_host_port: %s", VAR_4);
 return VAR_4;
}
