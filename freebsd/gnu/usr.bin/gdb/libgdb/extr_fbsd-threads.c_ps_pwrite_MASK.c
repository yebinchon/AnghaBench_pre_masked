
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_prochandle {int dummy; } ;
typedef int psaddr_t ;
typedef int ps_err_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,void*,size_t) ;

ps_err_e
FUNC_2 (struct ps_prochandle *VAR_3, psaddr_t VAR_4, const void *VAR_5,
            size_t VAR_6)
{
  int VAR_7 = FUNC_1 (
    FUNC_0(&VAR_4, VAR_2), (void *)VAR_5, VAR_6);
  return (VAR_7 == 0 ? VAR_1 : VAR_0);
}
