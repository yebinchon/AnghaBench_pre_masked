
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct invpcid_descr {int pcid; scalar_t__ addr; scalar_t__ pad; } ;
typedef TYPE_2__* pmap_t ;
typedef int d ;
struct TYPE_7__ {scalar_t__ pm_type; int pm_ucr3; int pm_cr3; TYPE_1__* pm_pcids; int pm_eptgen; } ;
struct TYPE_6__ {int pm_pcid; scalar_t__ pm_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct invpcid_descr*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct invpcid_descr*,int ) ;
 scalar_t__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int,int) ;

void
FUNC_10(pmap_t VAR_11)
{
 struct invpcid_descr VAR_12;
 uint64_t VAR_13, VAR_14;

 if (VAR_11->pm_type == VAR_5 || VAR_11->pm_type == VAR_4) {
  VAR_11->pm_eptgen++;
  return;
 }
 FUNC_0(VAR_11->pm_type == VAR_6,
     ("pmap_invalidate_all: unknown type %d", VAR_11->pm_type));

 if (VAR_11 == VAR_9) {
  if (VAR_10 && VAR_8) {
   FUNC_2(&VAR_12, sizeof(VAR_12));
   FUNC_7(&VAR_12, VAR_1);
  } else {
   FUNC_6();
  }
 } else if (VAR_11 == FUNC_1(VAR_7)) {
  if (VAR_10) {
   FUNC_3();
   if (VAR_8) {
    VAR_12.pcid = VAR_11->pm_pcids[0].pm_pcid;
    VAR_12.pad = 0;
    VAR_12.addr = 0;
    FUNC_7(&VAR_12, VAR_0);
    if (VAR_11->pm_ucr3 != VAR_2) {
     VAR_12.pcid |= VAR_3;
     FUNC_7(&VAR_12, VAR_0);
    }
   } else {
    VAR_13 = VAR_11->pm_cr3 | VAR_11->pm_pcids[0].pm_pcid;
    if (VAR_11->pm_ucr3 != VAR_2) {
     VAR_14 = VAR_11->pm_ucr3 | VAR_11->pm_pcids[
         0].pm_pcid | VAR_3;
     FUNC_9(VAR_14, VAR_13);
    } else
     FUNC_8(VAR_13);
   }
   FUNC_4();
  } else {
   FUNC_5();
  }
 } else if (VAR_10) {
  VAR_11->pm_pcids[0].pm_gen = 0;
 }
}
