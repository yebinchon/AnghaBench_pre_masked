
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsmount {int nm_bufqiods; int nm_flag; int nm_bufqlen; int nm_bufq; void* nm_bufqwant; } ;
struct buf {scalar_t__ b_iocmd; int b_flags; TYPE_2__* b_vp; struct ucred* b_wcred; struct ucred* b_rcred; } ;
struct TYPE_6__ {scalar_t__ v_type; } ;
struct TYPE_5__ {int n_directio_asyncwr; int n_flag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct buf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_12 ;
 struct ucred* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int *,struct buf*,int ) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 int VAR_18 ;
 int FUNC_8 (struct buf*) ;
 void* FUNC_9 (struct ucred*) ;
 int VAR_19 ;
 int VAR_20 ;
 struct nfsmount** VAR_21 ;
 scalar_t__* VAR_22 ;
 int FUNC_10 () ;
 int VAR_23 ;
 int FUNC_11 (struct thread*,int *,int *,int,char*,int) ;
 int FUNC_12 (struct nfsmount*,struct thread*) ;
 int FUNC_13 (scalar_t__*) ;

int
FUNC_14(struct nfsmount *VAR_24, struct buf *VAR_25, struct ucred *VAR_26, struct thread *VAR_27)
{
 int VAR_28;
 int VAR_29;
 int VAR_30 = 0;
 int VAR_31 = 0;
 int VAR_32, VAR_33;
 FUNC_1();
 if ((VAR_25->b_iocmd == VAR_2 && (VAR_25->b_flags & VAR_4) &&
      (VAR_24->nm_bufqiods > VAR_23 / 2)) ||
     (VAR_25->b_vp->v_type == VAR_17 && (VAR_24->nm_flag & VAR_11))) {
  FUNC_3();
  return(VAR_6);
 }
again:
 if (VAR_24->nm_flag & VAR_10)
  VAR_30 = VAR_14;
 VAR_29 = VAR_7;




 for (VAR_28 = 0; VAR_28 < VAR_23; VAR_28++)
  if (VAR_22[VAR_28] == VAR_8) {
   VAR_29 = VAR_16;
   break;
  }




 if (!VAR_29)
  FUNC_10();
 else {




  FUNC_5(VAR_0, ("ncl_asyncio: waking iod %d for mount %p\n",
      VAR_28, VAR_24));
  VAR_22[VAR_28] = VAR_9;
  VAR_21[VAR_28] = VAR_24;
  VAR_24->nm_bufqiods++;
  FUNC_13(&VAR_22[VAR_28]);
 }





 if (!VAR_29) {
  if (VAR_24->nm_bufqiods > 0) {
   FUNC_5(VAR_0,
    ("ncl_asyncio: %d iods are already processing mount %p\n",
     VAR_24->nm_bufqiods, VAR_24));
   VAR_29 = VAR_16;
  }
 }





 if (VAR_29) {




  while (VAR_24->nm_bufqlen >= 2*VAR_23) {
   FUNC_5(VAR_0,
    ("ncl_asyncio: waiting for mount %p queue to drain\n", VAR_24));
   VAR_24->nm_bufqwant = VAR_16;
   VAR_32 = FUNC_11(VAR_27, &VAR_24->nm_bufq,
       &VAR_20, VAR_30 | VAR_15, "nfsaio",
      VAR_31);
   if (VAR_32) {
    VAR_33 = FUNC_12(VAR_24, VAR_27);
    if (VAR_33) {
     FUNC_3();
     return (VAR_33);
    }
    if (VAR_30 == VAR_14) {
     VAR_30 = 0;
     VAR_31 = 2 * VAR_19;
    }
   }




   goto again;
  }


  if (VAR_24->nm_bufqiods == 0) {
   FUNC_5(VAR_0,
    ("ncl_asyncio: no iods after mount %p queue was drained, looping\n", VAR_24));
   goto again;
  }

  if (VAR_25->b_iocmd == VAR_1) {
   if (VAR_25->b_rcred == VAR_13 && VAR_26 != VAR_13)
    VAR_25->b_rcred = FUNC_9(VAR_26);
  } else {
   if (VAR_25->b_wcred == VAR_13 && VAR_26 != VAR_13)
    VAR_25->b_wcred = FUNC_9(VAR_26);
  }

  if (VAR_25->b_flags & VAR_5)
   FUNC_8(VAR_25);
  FUNC_0(VAR_25);
  FUNC_6(&VAR_24->nm_bufq, VAR_25, VAR_18);
  VAR_24->nm_bufqlen++;
  if ((VAR_25->b_flags & VAR_3) && VAR_25->b_iocmd == VAR_2) {
   FUNC_2(FUNC_7(VAR_25->b_vp));
   FUNC_7(VAR_25->b_vp)->n_flag |= VAR_12;
   FUNC_7(VAR_25->b_vp)->n_directio_asyncwr++;
   FUNC_4(FUNC_7(VAR_25->b_vp));
  }
  FUNC_3();
  return (0);
 }

 FUNC_3();





 FUNC_5(VAR_0, ("ncl_asyncio: no iods available, i/o is synchronous\n"));
 return (VAR_6);
}
