
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef TYPE_2__* devclass_t ;
struct TYPE_8__ {TYPE_1__** devices; } ;
struct TYPE_7__ {size_t unit; int flags; int * nameunit; TYPE_2__* devclass; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(devclass_t VAR_2, device_t VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return (0);

 FUNC_2(("%s in devclass %s", FUNC_1(VAR_3), FUNC_0(VAR_2)));

 if (VAR_3->devclass != VAR_2 || VAR_2->devices[VAR_3->unit] != VAR_3)
  FUNC_4("devclass_delete_device: inconsistent device class");
 VAR_2->devices[VAR_3->unit] = ((void*)0);
 if (VAR_3->flags & VAR_0)
  VAR_3->unit = -1;
 VAR_3->devclass = ((void*)0);
 FUNC_3(VAR_3->nameunit, VAR_1);
 VAR_3->nameunit = ((void*)0);

 return (0);
}
