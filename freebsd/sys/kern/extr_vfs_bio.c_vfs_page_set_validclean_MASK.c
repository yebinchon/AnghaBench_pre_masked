
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
struct buf {int b_offset; int b_bcount; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_2, vm_ooffset_t VAR_3, vm_page_t VAR_4)
{
 vm_ooffset_t VAR_5, VAR_6;







 VAR_5 = VAR_3;
 VAR_6 = (VAR_3 + VAR_1) & ~(off_t)VAR_0;
 if (VAR_6 > VAR_2->b_offset + VAR_2->b_bcount)
  VAR_6 = VAR_2->b_offset + VAR_2->b_bcount;





 if (VAR_6 > VAR_5) {
  FUNC_0(
      VAR_4,
     (vm_offset_t) (VAR_5 & VAR_0),
     (vm_offset_t) (VAR_6 - VAR_5)
  );
 }
}
