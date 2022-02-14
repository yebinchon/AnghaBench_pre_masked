
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_ooffset_t ;
struct buf {int b_offset; int b_bcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_2, vm_ooffset_t VAR_3, vm_page_t VAR_4)
{
 vm_ooffset_t VAR_5;







 VAR_5 = (VAR_3 + VAR_1) & ~(vm_ooffset_t)VAR_0;
 if (VAR_5 > VAR_2->b_offset + VAR_2->b_bcount)
  VAR_5 = VAR_2->b_offset + VAR_2->b_bcount;





 if (VAR_5 > VAR_3)
  FUNC_0(VAR_4, VAR_3 & VAR_0, VAR_5 - VAR_3);
}
