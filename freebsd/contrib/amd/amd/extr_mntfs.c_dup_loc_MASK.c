
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ al_mnt; int al_refc; } ;
typedef TYPE_1__ am_loc ;


 int FUNC_0 (scalar_t__) ;

am_loc *
FUNC_1(am_loc *VAR_0)
{
  VAR_0->al_refc++;
  if (VAR_0->al_mnt) {
    FUNC_0(VAR_0->al_mnt);
  }
  return VAR_0;
}
