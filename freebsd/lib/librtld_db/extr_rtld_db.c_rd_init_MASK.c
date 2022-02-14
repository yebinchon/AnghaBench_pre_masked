
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rd_err_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;

rd_err_e
FUNC_2(int VAR_4)
{
 char *VAR_5 = ((void*)0);

 if (VAR_4 == VAR_2) {
  VAR_5 = FUNC_1("LIBRTLD_DB_DEBUG");
  VAR_3 = VAR_5 ? FUNC_0(VAR_5) : 0;
  return (VAR_1);
 } else
  return (VAR_0);
}
