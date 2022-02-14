
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct buf {int b_bufsize; int b_flags; int * b_data; int * b_kvabase; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct buf*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct buf*,int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct buf*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct buf *VAR_6, int VAR_7)
{
 caddr_t VAR_8;
 int VAR_9;
 if (VAR_6->b_bufsize == 0 && VAR_7 <= VAR_3/2 &&
     VAR_4 < VAR_5) {
  VAR_6->b_data = FUNC_4(VAR_7, VAR_1, VAR_2);
  VAR_6->b_flags |= VAR_0;
  FUNC_1(VAR_6, VAR_7);
  return;
 }






 VAR_8 = ((void*)0);
 VAR_9 = 0;
 if (VAR_6->b_flags & VAR_0) {
  VAR_8 = VAR_6->b_data;
  VAR_9 = VAR_6->b_bufsize;
  VAR_6->b_data = VAR_6->b_kvabase;
  FUNC_1(VAR_6, 0);
  VAR_6->b_flags &= ~VAR_0;
  VAR_7 = FUNC_5(VAR_7);
 }
 FUNC_6(VAR_6, (vm_offset_t) VAR_6->b_data + VAR_6->b_bufsize,
     (vm_offset_t) VAR_6->b_data + VAR_7);
 if (VAR_8 != ((void*)0)) {
  FUNC_0(VAR_8, VAR_6->b_data, VAR_9);
  FUNC_3(VAR_8, VAR_1);
 }
 FUNC_2(VAR_6, VAR_7);
}
