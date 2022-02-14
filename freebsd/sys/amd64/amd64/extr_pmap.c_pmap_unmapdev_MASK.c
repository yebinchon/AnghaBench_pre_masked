
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct pmap_preinit_mapping {scalar_t__ va; scalar_t__ sz; scalar_t__ mode; scalar_t__ pa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 struct pmap_preinit_mapping* VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;

void
FUNC_3(vm_offset_t VAR_7, vm_size_t VAR_8)
{
 struct pmap_preinit_mapping *VAR_9;
 vm_offset_t VAR_10;
 int VAR_11;


 if (VAR_7 >= VAR_1 && VAR_7 < VAR_0)
  return;
 VAR_10 = VAR_7 & VAR_2;
 VAR_8 = FUNC_1(VAR_10 + VAR_8);
 VAR_7 = FUNC_2(VAR_7);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9 = VAR_5 + VAR_11;
  if (VAR_9->va == VAR_7 && VAR_9->sz == VAR_8) {
   if (VAR_4)
    return;
   VAR_9->pa = 0;
   VAR_9->va = 0;
   VAR_9->sz = 0;
   VAR_9->mode = 0;
   if (VAR_7 + VAR_8 == VAR_6)
    VAR_6 = VAR_7;
   return;
  }
 }
 if (VAR_4)
  FUNC_0(VAR_7, VAR_8);
}
