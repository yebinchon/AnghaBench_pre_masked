
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {int bq_len; int bq_queue; } ;
struct buf {int b_flags; int b_qindex; int b_vp; } ;


 int FUNC_0 (struct bufqueue*) ;
 int FUNC_1 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,struct buf*,int ,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,struct buf*,int ) ;
 int VAR_5 ;
 struct bufqueue* FUNC_5 (struct buf*) ;

__attribute__((used)) static void
FUNC_6(struct bufqueue *VAR_6, struct buf *VAR_7)
{

 FUNC_2(VAR_2, "bq_remove(%p) vp %p flags %X",
     VAR_7, VAR_7->b_vp, VAR_7->b_flags);
 FUNC_3(VAR_7->b_qindex != VAR_4,
     ("bq_remove: buffer %p not on a queue.", VAR_7));
 FUNC_3(FUNC_5(VAR_7) == VAR_6,
     ("bq_remove: Remove buffer %p from wrong queue.", VAR_7));

 FUNC_0(VAR_6);
 if (VAR_7->b_qindex != VAR_3) {
  FUNC_1(VAR_7);
 }
 FUNC_3(VAR_6->bq_len >= 1,
     ("queue %d underflow", VAR_7->b_qindex));
 FUNC_4(&VAR_6->bq_queue, VAR_7, VAR_5);
 VAR_6->bq_len--;
 VAR_7->b_qindex = VAR_4;
 VAR_7->b_flags &= ~(VAR_0 | VAR_1);
}
