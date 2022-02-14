
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; scalar_t__ b_qindex; int b_vp; } ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,struct buf*,int ,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_3(struct buf *VAR_3)
{

 FUNC_1(VAR_1, "bremfree(%p) vp %p flags %X", VAR_3, VAR_3->b_vp, VAR_3->b_flags);
 FUNC_2((VAR_3->b_flags & VAR_0) == 0,
     ("bremfree: buffer %p already marked for delayed removal.", VAR_3));
 FUNC_2(VAR_3->b_qindex != VAR_2,
     ("bremfree: buffer %p not on a queue.", VAR_3));
 FUNC_0(VAR_3);

 VAR_3->b_flags |= VAR_0;
}
