
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct invpcid_descr {scalar_t__ addr; scalar_t__ pad; int pcid; } ;
struct TYPE_5__ {TYPE_1__* pm_pcids; } ;
struct TYPE_4__ {int pm_pcid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct invpcid_descr*,int ) ;
 int ** VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int * VAR_8 ;

void
FUNC_3(void)
{
 struct invpcid_descr VAR_9;
 uint32_t VAR_10;
 VAR_10 = VAR_6;
 VAR_9.pcid = VAR_7->pm_pcids[FUNC_0(VAR_2)].pm_pcid;
 VAR_9.pad = 0;
 VAR_9.addr = 0;
 FUNC_2(&VAR_9, VAR_7 == VAR_4 ? VAR_1 :
     VAR_0);
 FUNC_1(VAR_5, VAR_10);
}
