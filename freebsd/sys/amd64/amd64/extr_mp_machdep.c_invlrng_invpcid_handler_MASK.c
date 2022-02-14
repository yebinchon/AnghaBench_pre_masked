
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
struct invpcid_descr {int pcid; scalar_t__ addr; scalar_t__ pad; } ;
struct TYPE_4__ {scalar_t__ pm_ucr3; TYPE_1__* pm_pcids; } ;
struct TYPE_3__ {int pm_pcid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct invpcid_descr*,int ) ;
 int ** VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int * VAR_11 ;

void
FUNC_4(void)
{
 struct invpcid_descr VAR_12;
 vm_offset_t VAR_13, VAR_14;
 uint32_t VAR_15;
 VAR_13 = VAR_6;
 VAR_14 = VAR_7;
 VAR_15 = VAR_9;
 do {
  FUNC_2(VAR_13);
  VAR_13 += VAR_1;
 } while (VAR_13 < VAR_14);
 if (VAR_10->pm_ucr3 != VAR_2) {
  VAR_12.pcid = VAR_10->pm_pcids[FUNC_0(VAR_4)].pm_pcid |
      VAR_3;
  VAR_12.pad = 0;
  VAR_12.addr = VAR_6;
  do {
   FUNC_3(&VAR_12, VAR_0);
   VAR_12.addr += VAR_1;
  } while (VAR_12.addr < VAR_14);
 }
 FUNC_1(VAR_8, VAR_15);
}
