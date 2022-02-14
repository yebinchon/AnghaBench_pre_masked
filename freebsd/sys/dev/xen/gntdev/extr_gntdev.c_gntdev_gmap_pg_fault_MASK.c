
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef TYPE_3__* vm_page_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_4__* vm_object_t ;
struct gntdev_gmap {size_t count; TYPE_2__* map; TYPE_1__* grant_map_ops; scalar_t__ file_index; } ;
struct TYPE_18__ {struct gntdev_gmap* handle; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {scalar_t__ phys_base_addr; } ;
struct TYPE_15__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,size_t) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_9(vm_object_t VAR_4, vm_ooffset_t VAR_5, int VAR_6,
    vm_page_t *VAR_7)
{
 struct gntdev_gmap *VAR_8 = VAR_4->handle;
 vm_pindex_t VAR_9, VAR_10;
 vm_page_t VAR_11, VAR_12;
 vm_ooffset_t VAR_13;

 if (VAR_8->map == ((void*)0))
  return (VAR_2);

 VAR_13 = VAR_5 - VAR_8->file_index;

 VAR_9 = FUNC_1(VAR_5);
 VAR_10 = FUNC_1(VAR_13);
 if (VAR_10 >= VAR_8->count ||
     VAR_8->grant_map_ops[VAR_10].status != VAR_0)
  return (VAR_2);

 VAR_11 = FUNC_2(VAR_8->map->phys_base_addr + VAR_13);
 if (VAR_11 == ((void*)0))
  return (VAR_2);

 FUNC_0((VAR_11->flags & VAR_1) != 0,
     ("not fictitious %p", VAR_11));
 FUNC_0(FUNC_8(VAR_11), ("page %p is not wired", VAR_11));
 FUNC_0(!FUNC_3(VAR_11), ("page %p is busy", VAR_11));

 if (*VAR_7 != ((void*)0)) {
  VAR_12 = *VAR_7;
  FUNC_5(VAR_12);
  *VAR_7 = ((void*)0);
 }

 FUNC_4(VAR_11, 0);
 FUNC_7(VAR_11);
 FUNC_6(VAR_11, VAR_4, VAR_9);
 *VAR_7 = VAR_11;
 return (VAR_3);
}
