
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
struct buf {int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct buf *VAR_2, vm_ooffset_t VAR_3, vm_offset_t VAR_4,
    vm_offset_t VAR_5, vm_page_t VAR_6)
{






 if (VAR_2->b_flags & VAR_0) {
  int VAR_7 = (VAR_3 + VAR_4) & VAR_1;
  if (FUNC_0(VAR_6, VAR_7, VAR_5) == 0)
   VAR_2->b_flags &= ~VAR_0;
 }
}
