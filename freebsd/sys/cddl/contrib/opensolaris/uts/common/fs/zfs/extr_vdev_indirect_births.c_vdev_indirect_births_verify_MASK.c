
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vib_object; int * vib_entries; TYPE_1__* vib_phys; int * vib_dbuf; int * vib_objset; } ;
typedef TYPE_2__ vdev_indirect_births_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ vib_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(vdev_indirect_births_t *VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));

 FUNC_0(VAR_1->vib_object != 0);
 FUNC_0(VAR_1->vib_objset != ((void*)0));
 FUNC_0(VAR_1->vib_phys != ((void*)0));
 FUNC_0(VAR_1->vib_dbuf != ((void*)0));

 FUNC_1(VAR_1->vib_phys->vib_count > 0, VAR_1->vib_entries != ((void*)0));

 return (VAR_0);
}
