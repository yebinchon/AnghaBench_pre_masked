
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rm_end; } ;
struct TYPE_3__ {TYPE_2__ rman; } ;
struct vmd_softc {TYPE_1__ vmd_bus; int * vmd_child; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct vmd_softc* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct vmd_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct vmd_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1->vmd_child != ((void*)0)) {
  VAR_2 = FUNC_0(VAR_1->vmd_child);
  if (VAR_2)
   return (VAR_2);
  VAR_2 = FUNC_1(VAR_0, VAR_1->vmd_child);
  if (VAR_2)
   return (VAR_2);
 }
 if (VAR_1->vmd_bus.rman.rm_end != 0)
  FUNC_3(&VAR_1->vmd_bus.rman);

 FUNC_4(VAR_1);
 return (0);
}
