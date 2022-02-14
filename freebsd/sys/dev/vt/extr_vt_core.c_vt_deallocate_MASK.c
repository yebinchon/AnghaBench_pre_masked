
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vt_driver {char* vd_name; } ;
struct TYPE_4__ {void* vd_softc; TYPE_1__* vd_prev_driver; struct vt_driver const* vd_driver; } ;
struct TYPE_3__ {char* vd_name; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(const struct vt_driver *VAR_2, void *VAR_3)
{

 if (!FUNC_2(VAR_0))
  return;

 if (VAR_1->vd_prev_driver == ((void*)0) ||
     VAR_1->vd_driver != VAR_2 ||
     VAR_1->vd_softc != VAR_3)
  return;

 FUNC_0("VT: Switching back from \"%s\" to \"%s\".\n",
     VAR_1->vd_driver->vd_name, VAR_1->vd_prev_driver->vd_name);

 FUNC_1(((void*)0), ((void*)0));
}
