
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {int bq_queue; } ;
struct bufdomain {int bd_wanted; struct bufqueue* bd_cleanq; } ;
struct buf {scalar_t__ b_kvasize; int b_flags; int b_vflags; scalar_t__ b_qindex; scalar_t__ b_domain; } ;


 scalar_t__ FUNC_0 (struct bufdomain*) ;
 scalar_t__ FUNC_1 (struct bufdomain*) ;
 int FUNC_2 (struct bufqueue*) ;
 scalar_t__ FUNC_3 (struct bufqueue*) ;
 int FUNC_4 (struct bufqueue*) ;
 scalar_t__ FUNC_5 (struct buf*,int,int *) ;
 int FUNC_6 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct buf* FUNC_8 (int *) ;
 int FUNC_9 (int *,struct buf*,int ) ;
 struct buf* FUNC_10 (struct buf*,int ) ;
 int FUNC_11 (int *,struct buf*,int ) ;
 int VAR_8 ;
 int FUNC_12 (struct bufqueue*,struct buf*) ;
 int FUNC_13 (struct buf*) ;
 int FUNC_14 (struct buf*) ;
 int VAR_9 ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static int
FUNC_16(struct bufdomain *VAR_10, bool VAR_11)
{
 struct bufqueue *VAR_12;
 struct buf *VAR_13, *VAR_14;

 if (VAR_11)
  FUNC_15(VAR_9, 1);
 VAR_14 = ((void*)0);
 VAR_12 = VAR_10->bd_cleanq;
 FUNC_2(VAR_12);
 FUNC_7(FUNC_3(VAR_12) == FUNC_1(VAR_10),
     ("buf_recycle: Locks don't match"));
 VAR_14 = FUNC_8(&VAR_12->bq_queue);





 while ((VAR_13 = VAR_14) != ((void*)0)) {




  VAR_14 = FUNC_10(VAR_13, VAR_8);





  if (VAR_11 && VAR_13->b_kvasize == 0)
   continue;

  if (FUNC_5(VAR_13, VAR_5 | VAR_6, ((void*)0)) != 0)
   continue;





  if ((VAR_13->b_flags & VAR_3) != 0) {
   FUNC_11(&VAR_12->bq_queue, VAR_13, VAR_8);
   FUNC_9(&VAR_12->bq_queue, VAR_13, VAR_8);
   VAR_13->b_flags &= ~VAR_3;
   FUNC_6(VAR_13);
   continue;
  }




  if ((VAR_13->b_vflags & VAR_1) != 0) {
   FUNC_6(VAR_13);
   continue;
  }

  FUNC_7(VAR_13->b_qindex == VAR_7,
      ("buf_recycle: inconsistent queue %d bp %p",
      VAR_13->b_qindex, VAR_13));
  FUNC_7(VAR_13->b_domain == FUNC_0(VAR_10),
      ("getnewbuf: queue domain %d doesn't match request %d",
      VAR_13->b_domain, (int)FUNC_0(VAR_10)));




  FUNC_12(VAR_12, VAR_13);
  FUNC_4(VAR_12);





  if ((VAR_13->b_vflags & VAR_0) != 0) {
   FUNC_13(VAR_13);
   FUNC_2(VAR_12);
   VAR_14 = FUNC_8(&VAR_12->bq_queue);
   continue;
  }
  VAR_13->b_flags |= VAR_2;
  FUNC_14(VAR_13);
  return (0);
 }
 VAR_10->bd_wanted = 1;
 FUNC_4(VAR_12);

 return (VAR_4);
}
