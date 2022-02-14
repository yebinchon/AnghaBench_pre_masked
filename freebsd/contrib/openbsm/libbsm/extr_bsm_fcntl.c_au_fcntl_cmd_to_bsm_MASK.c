
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_3__ {int bfc_bsm_fcntl_cmd; } ;
typedef TYPE_1__ bsm_fcntl_cmd_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

u_short
FUNC_1(int VAR_1)
{
 const bsm_fcntl_cmd_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 return (VAR_2->bfc_bsm_fcntl_cmd);
}
