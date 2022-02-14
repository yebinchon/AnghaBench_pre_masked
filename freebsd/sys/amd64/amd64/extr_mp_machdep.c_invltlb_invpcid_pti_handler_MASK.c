
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct invpcid_descr {int pcid; scalar_t__ addr; scalar_t__ pad; } ;
struct TYPE_5__ {TYPE_1__* pm_pcids; } ;
struct TYPE_4__ {int pm_pcid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct invpcid_descr*,int ) ;
 int ** VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int * VAR_9 ;

void
FUNC_3(void)
{
 struct invpcid_descr VAR_10;
 uint32_t VAR_11;
 VAR_11 = VAR_7;
 VAR_10.pcid = VAR_8->pm_pcids[FUNC_0(VAR_3)].pm_pcid;
 VAR_10.pad = 0;
 VAR_10.addr = 0;
 if (VAR_8 == VAR_5) {






  FUNC_2(&VAR_10, VAR_1);
 } else {
  FUNC_2(&VAR_10, VAR_0);
  VAR_10.pcid |= VAR_2;
  FUNC_2(&VAR_10, VAR_0);
 }
 FUNC_1(VAR_6, VAR_11);
}
