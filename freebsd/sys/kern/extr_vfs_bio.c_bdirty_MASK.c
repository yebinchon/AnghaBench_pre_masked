
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; scalar_t__ b_qindex; int b_iocmd; int * b_bufobj; int b_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,struct buf*,int ,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;

void
FUNC_4(struct buf *VAR_6)
{

 FUNC_0(VAR_4, "bdirty(%p) vp %p flags %X",
     VAR_6, VAR_6->b_vp, VAR_6->b_flags);
 FUNC_1(VAR_6->b_bufobj != ((void*)0), ("No b_bufobj %p", VAR_6));
 FUNC_1(VAR_6->b_flags & VAR_3 || VAR_6->b_qindex == VAR_5,
     ("bdirty: buffer %p still on queue %d", VAR_6, VAR_6->b_qindex));
 VAR_6->b_flags &= ~(VAR_2);
 VAR_6->b_iocmd = VAR_0;

 if ((VAR_6->b_flags & VAR_1) == 0) {
  VAR_6->b_flags |= VAR_1;
  FUNC_3(VAR_6);
  FUNC_2(VAR_6);
 }
}
