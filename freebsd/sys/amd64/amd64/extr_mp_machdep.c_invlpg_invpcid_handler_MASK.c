
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct invpcid_descr {int pcid; int addr; scalar_t__ pad; } ;
struct TYPE_4__ {scalar_t__ pm_ucr3; TYPE_1__* pm_pcids; } ;
struct TYPE_3__ {int pm_pcid; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct invpcid_descr*,int ) ;
 int ** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int * VAR_9 ;

void
FUNC_4(void)
{
 struct invpcid_descr VAR_10;
 uint32_t VAR_11;
 VAR_11 = VAR_7;
 FUNC_2(VAR_5);
 if (VAR_8->pm_ucr3 != VAR_1) {
  VAR_10.pcid = VAR_8->pm_pcids[FUNC_0(VAR_3)].pm_pcid |
      VAR_2;
  VAR_10.pad = 0;
  VAR_10.addr = VAR_5;
  FUNC_3(&VAR_10, VAR_0);
 }
 FUNC_1(VAR_6, VAR_11);
}
