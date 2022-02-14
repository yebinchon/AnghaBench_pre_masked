
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {scalar_t__ nm_bufq; int nm_bufqiods; scalar_t__ nm_bufqlen; scalar_t__ nm_bufqwant; } ;
struct buf {int b_flags; scalar_t__ b_iocmd; int b_wcred; int b_vp; int b_rcred; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct buf* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,struct buf*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__*,int *,int,char*,int) ;
 int FUNC_8 (int ,struct buf*,int ,int *,int ) ;
 int FUNC_9 (struct buf*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct nfsmount** VAR_13 ;
 scalar_t__* VAR_14 ;
 scalar_t__ VAR_15 ;
 int* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_20)
{
 struct buf *VAR_21;
 struct nfsmount *VAR_22;
 int VAR_23, VAR_24;
 int VAR_25 = 0;

 FUNC_1();
 VAR_23 = (int *)VAR_20 - VAR_16;



 for (;;) {
     while (((VAR_22 = VAR_13[VAR_23]) == ((void*)0))
     || !FUNC_4(&VAR_22->nm_bufq)) {
  if (VAR_23 >= VAR_12)
   goto finish;
  if (VAR_22)
   VAR_22->nm_bufqiods--;
  if (VAR_14[VAR_23] == VAR_6)
   VAR_14[VAR_23] = VAR_5;
  VAR_13[VAR_23] = ((void*)0);



  VAR_24 = (VAR_23 < VAR_19) ? 0 : VAR_18 * VAR_10;
  VAR_25 = FUNC_7(&VAR_14[VAR_23], &VAR_11, VAR_8 | VAR_7,
      "-", VAR_24);
  if (VAR_25) {
   VAR_22 = VAR_13[VAR_23];





   if (VAR_22 && FUNC_4(&VAR_22->nm_bufq))
    VAR_25 = 0;
   break;
  }
     }
     if (VAR_25)
      break;
     while ((VAR_21 = FUNC_4(&VAR_22->nm_bufq)) != ((void*)0)) {

  FUNC_5(&VAR_22->nm_bufq, VAR_21, VAR_9);
  VAR_22->nm_bufqlen--;
  if (VAR_22->nm_bufqwant && VAR_22->nm_bufqlen <= VAR_15) {
      VAR_22->nm_bufqwant = 0;
      FUNC_10(&VAR_22->nm_bufq);
  }
  FUNC_2();
  if (VAR_21->b_flags & VAR_3) {
   FUNC_0((VAR_21->b_iocmd == VAR_2), ("nfscvs_iod: BIO_WRITE not set"));
   (void)FUNC_9(VAR_21);
  } else {
   if (VAR_21->b_iocmd == VAR_1)
    (void) FUNC_8(VAR_21->b_vp, VAR_21, VAR_21->b_rcred,
        ((void*)0), 0);
   else
    (void) FUNC_8(VAR_21->b_vp, VAR_21, VAR_21->b_wcred,
        ((void*)0), 0);
  }
  FUNC_1();




  VAR_22 = VAR_13[VAR_23];
  if (VAR_22 == ((void*)0))
   break;





  if (VAR_17 && VAR_22->nm_bufqiods > 1) {
      FUNC_3(VAR_0,
       ("nfssvc_iod: iod %d defecting from mount %p\n",
        VAR_23, VAR_22));
      VAR_13[VAR_23] = ((void*)0);
      VAR_22->nm_bufqiods--;
      break;
  }
     }
 }
finish:
 VAR_16[VAR_23] = 0;
 if (VAR_22)
     VAR_22->nm_bufqiods--;
 VAR_14[VAR_23] = VAR_6;
 VAR_13[VAR_23] = ((void*)0);

 if (--VAR_15 == 0)
  FUNC_10(&VAR_15);
 FUNC_2();
 if ((VAR_25 == 0) || (VAR_25 == VAR_4))
  FUNC_6(0);

 FUNC_6(1);
}
