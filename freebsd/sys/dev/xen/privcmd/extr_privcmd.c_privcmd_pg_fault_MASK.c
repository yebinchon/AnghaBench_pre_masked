
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_2__* vm_object_t ;
struct privcmd_map {int mapped; scalar_t__ size; scalar_t__ phys_base_addr; int err; } ;
struct TYPE_14__ {struct privcmd_map* handle; } ;
struct TYPE_13__ {int flags; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(vm_object_t VAR_3, vm_ooffset_t VAR_4,
    int VAR_5, vm_page_t *VAR_6)
{
 struct privcmd_map *VAR_7 = VAR_3->handle;
 vm_pindex_t VAR_8;
 vm_page_t VAR_9, VAR_10;

 if (VAR_7->mapped != 1)
  return (VAR_1);

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 >= VAR_7->size || FUNC_0(VAR_7->size, VAR_8, VAR_7->err))
  return (VAR_1);

 VAR_9 = FUNC_3(VAR_7->phys_base_addr + VAR_4);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 FUNC_1((VAR_9->flags & VAR_0) != 0,
     ("not fictitious %p", VAR_9));
 FUNC_1(FUNC_9(VAR_9), ("page %p not wired", VAR_9));
 FUNC_1(!FUNC_4(VAR_9), ("page %p is busy", VAR_9));

 if (*VAR_6 != ((void*)0)) {
  VAR_10 = *VAR_6;
  FUNC_6(VAR_10);
  *VAR_6 = ((void*)0);
 }

 FUNC_5(VAR_9, 0);
 FUNC_8(VAR_9);
 FUNC_7(VAR_9, VAR_3, VAR_8);
 *VAR_6 = VAR_9;
 return (VAR_2);
}
