
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {scalar_t__ bq_index; scalar_t__ bq_len; int bq_subqueue; int bq_queue; } ;
struct bufdomain {scalar_t__ bd_lim; struct bufqueue* bd_cleanq; scalar_t__ bd_wanted; } ;
struct buf {scalar_t__ b_qindex; int b_flags; int b_subqueue; } ;


 int FUNC_0 (struct bufqueue*) ;
 int FUNC_1 (struct bufqueue*) ;
 int FUNC_2 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,struct buf*,int ) ;
 int FUNC_4 (int *,struct buf*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct bufdomain*,struct bufqueue*) ;
 struct bufdomain* FUNC_6 (struct buf*) ;
 int FUNC_7 (char*,struct buf*) ;

__attribute__((used)) static void
FUNC_8(struct bufqueue *VAR_5, struct buf *VAR_6, bool VAR_7)
{
 struct bufdomain *VAR_8;

 if (VAR_6->b_qindex != VAR_3)
  FUNC_7("bq_insert: free buffer %p onto another queue?", VAR_6);

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_6->b_flags & VAR_0) {

  if (VAR_5->bq_index == VAR_2)
   VAR_5 = VAR_8->bd_cleanq;
  FUNC_0(VAR_5);
  FUNC_3(&VAR_5->bq_queue, VAR_6, VAR_4);
 } else {
  FUNC_0(VAR_5);
  FUNC_4(&VAR_5->bq_queue, VAR_6, VAR_4);
 }
 VAR_6->b_flags &= ~(VAR_0 | VAR_1);
 VAR_5->bq_len++;
 VAR_6->b_qindex = VAR_5->bq_index;
 VAR_6->b_subqueue = VAR_5->bq_subqueue;





 if (VAR_7)
  FUNC_2(VAR_6);

 if (VAR_6->b_qindex == VAR_2) {



  if (VAR_8->bd_wanted || (VAR_5 != VAR_8->bd_cleanq &&
      VAR_5->bq_len >= VAR_8->bd_lim))
   FUNC_5(VAR_8, VAR_5);
 }
 FUNC_1(VAR_5);
}
