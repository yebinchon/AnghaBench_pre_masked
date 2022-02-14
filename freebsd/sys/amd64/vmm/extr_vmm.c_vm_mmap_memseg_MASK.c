
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
struct vm {TYPE_1__* vmspace; struct mem_map* mem_maps; struct mem_seg* mem_segs; } ;
struct mem_seg {scalar_t__ len; int * object; } ;
struct mem_map {scalar_t__ len; int segid; int prot; int flags; scalar_t__ segoff; scalar_t__ gpa; } ;
struct TYPE_2__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int *,scalar_t__,scalar_t__*,size_t,int ,int ,int,int,int ) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct vm *VAR_14, vm_paddr_t VAR_15, int VAR_16, vm_ooffset_t VAR_17,
    size_t VAR_18, int VAR_19, int VAR_20)
{
 struct mem_seg *VAR_21;
 struct mem_map *VAR_22, *VAR_23;
 vm_ooffset_t VAR_24;
 int VAR_25, VAR_26;

 if (VAR_19 == 0 || (VAR_19 & ~(VAR_13)) != 0)
  return (VAR_1);

 if (VAR_20 & ~VAR_12)
  return (VAR_1);

 if (VAR_16 < 0 || VAR_16 >= VAR_11)
  return (VAR_1);

 VAR_21 = &VAR_14->mem_segs[VAR_16];
 if (VAR_21->object == ((void*)0))
  return (VAR_1);

 VAR_24 = VAR_17 + VAR_18;
 if (VAR_17 < 0 || VAR_17 >= VAR_24 || VAR_24 > VAR_21->len)
  return (VAR_1);

 if ((VAR_15 | VAR_17 | VAR_24) & VAR_6)
  return (VAR_1);

 VAR_23 = ((void*)0);
 for (VAR_25 = 0; VAR_25 < VAR_10; VAR_25++) {
  VAR_22 = &VAR_14->mem_maps[VAR_25];
  if (VAR_22->len == 0) {
   VAR_23 = VAR_22;
   break;
  }
 }

 if (VAR_23 == ((void*)0))
  return (VAR_3);

 VAR_26 = FUNC_0(&VAR_14->vmspace->vm_map, VAR_21->object, VAR_17, &VAR_15,
     VAR_18, 0, VAR_7, VAR_19, VAR_19, 0);
 if (VAR_26 != VAR_5)
  return (VAR_0);

 FUNC_3(VAR_21->object);

 if (VAR_20 & VAR_12) {
  VAR_26 = FUNC_2(&VAR_14->vmspace->vm_map, VAR_15, VAR_15 + VAR_18,
      VAR_9 | VAR_8);
  if (VAR_26 != VAR_5) {
   FUNC_1(&VAR_14->vmspace->vm_map, VAR_15, VAR_15 + VAR_18);
   return (VAR_26 == VAR_4 ? VAR_2 :
       VAR_0);
  }
 }

 VAR_23->gpa = VAR_15;
 VAR_23->len = VAR_18;
 VAR_23->segoff = VAR_17;
 VAR_23->segid = VAR_16;
 VAR_23->prot = VAR_19;
 VAR_23->flags = VAR_20;
 return (0);
}
