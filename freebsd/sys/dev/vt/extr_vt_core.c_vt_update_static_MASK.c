
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vd_flags; int vd_width; int vd_height; int vd_winswitch; int vd_lock; TYPE_1__* vd_driver; } ;
struct TYPE_3__ {char* vd_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{

 if (!FUNC_3(VAR_2))
  return;
 if (VAR_3->vd_driver != ((void*)0))
  FUNC_2("VT(%s): %s %ux%u\n", VAR_3->vd_driver->vd_name,
      (VAR_3->vd_flags & VAR_1) ? "text" : "resolution",
      VAR_3->vd_width, VAR_3->vd_height);
 else
  FUNC_2("VT: init without driver.\n");

 FUNC_1(&VAR_3->vd_lock, "vtdev", ((void*)0), VAR_0);
 FUNC_0(&VAR_3->vd_winswitch, "vtwswt");
}
