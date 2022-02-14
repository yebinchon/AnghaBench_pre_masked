
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; scalar_t__ b_qindex; int * b_bufobj; int b_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct buf*,int ,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;

void
FUNC_4(struct buf *VAR_5)
{

 FUNC_0(VAR_3, "bundirty(%p) vp %p flags %X", VAR_5, VAR_5->b_vp, VAR_5->b_flags);
 FUNC_1(VAR_5->b_bufobj != ((void*)0), ("No b_bufobj %p", VAR_5));
 FUNC_1(VAR_5->b_flags & VAR_2 || VAR_5->b_qindex == VAR_4,
     ("bundirty: buffer %p still on queue %d", VAR_5, VAR_5->b_qindex));

 if (VAR_5->b_flags & VAR_1) {
  VAR_5->b_flags &= ~VAR_1;
  FUNC_3(VAR_5);
  FUNC_2(VAR_5);
 }



 VAR_5->b_flags &= ~VAR_0;
}
