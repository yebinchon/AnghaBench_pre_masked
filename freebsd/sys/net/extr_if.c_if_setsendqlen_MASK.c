
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifq_drv_maxlen; } ;
struct ifnet {TYPE_1__ if_snd; } ;
typedef scalar_t__ if_t ;


 int FUNC_0 (TYPE_1__*,int) ;

int
FUNC_1(if_t VAR_0, int VAR_1)
{
 FUNC_0(&((struct ifnet *)VAR_0)->if_snd, VAR_1);
 ((struct ifnet *)VAR_0)->if_snd.ifq_drv_maxlen = VAR_1;

 return (0);
}
