
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* map; int libkse_debug_addr; int ph; } ;
typedef TYPE_1__ td_thragent_t ;
typedef int td_err_e ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int*,int) ;

__attribute__((used)) static td_err_e
FUNC_3(td_thragent_t *VAR_1)
{
 int VAR_2;

 FUNC_0();

 VAR_2 = 0;




 FUNC_2(VAR_1->ph, VAR_1->libkse_debug_addr, &VAR_2, sizeof(int));
 if (VAR_1->map)
  FUNC_1(VAR_1->map);
 FUNC_1(VAR_1);
 return (VAR_0);
}
