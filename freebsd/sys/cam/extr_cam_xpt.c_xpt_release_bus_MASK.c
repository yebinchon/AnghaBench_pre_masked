
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_eb {int refcount; int eb_mtx; int sim; int et_entries; } ;
struct TYPE_2__ {int bus_generation; int xpt_busses; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cam_eb*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cam_eb*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct cam_eb *VAR_3)
{

 FUNC_6();
 FUNC_0(VAR_3->refcount >= 1, ("bus->refcount >= 1"));
 if (--VAR_3->refcount > 0) {
  FUNC_7();
  return;
 }
 FUNC_2(&VAR_2.xpt_busses, VAR_3, VAR_1);
 VAR_2.bus_generation++;
 FUNC_7();
 FUNC_0(FUNC_1(&VAR_3->et_entries),
     ("destroying bus, but target list is not empty"));
 FUNC_3(VAR_3->sim);
 FUNC_5(&VAR_3->eb_mtx);
 FUNC_4(VAR_3, VAR_0);
}
