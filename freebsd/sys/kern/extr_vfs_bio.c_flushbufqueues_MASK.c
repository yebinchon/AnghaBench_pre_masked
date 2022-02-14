
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct bufqueue {int bq_queue; } ;
struct bufdomain {struct bufqueue bd_dirtyq; } ;
struct buf {scalar_t__ b_qindex; int b_vflags; int b_flags; struct vnode* b_vp; int b_dep; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (struct bufqueue*) ;
 int FUNC_2 (struct bufqueue*) ;
 int FUNC_3 (struct buf*,int,int *) ;
 int FUNC_4 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,struct buf*,struct vnode*,int) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int *,struct buf*,struct buf*,int ) ;
 int FUNC_8 (int *,struct buf*,int ) ;
 struct buf* FUNC_9 (struct buf*,int ) ;
 int FUNC_10 (int *,struct buf*,int ) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct buf*) ;
 int FUNC_14 (struct buf*) ;
 int FUNC_15 (struct buf*) ;
 scalar_t__ FUNC_16 (struct buf*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_17 (struct buf*) ;
 int FUNC_18 (int ,int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_19 (struct buf*,int ) ;
 scalar_t__ VAR_16 ;
 struct buf* FUNC_20 (int,int ,int) ;
 int FUNC_21 () ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_22 (struct buf*) ;
 int FUNC_23 (struct mount*) ;
 int FUNC_24 (struct vnode*,int) ;
 scalar_t__ FUNC_25 (struct vnode*,struct mount**,int ) ;
 int FUNC_26 () ;

__attribute__((used)) static int
FUNC_27(struct vnode *VAR_19, struct bufdomain *VAR_20, int VAR_21,
    int VAR_22)
{
 struct bufqueue *VAR_23;
 struct buf *VAR_24;
 struct vnode *VAR_25;
 struct mount *VAR_26;
 struct buf *VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 bool VAR_31;

 VAR_29 = 0;
 VAR_23 = &VAR_20->bd_dirtyq;
 VAR_27 = ((void*)0);
 VAR_24 = FUNC_20(sizeof(struct buf), VAR_7, VAR_8 | VAR_9);
 VAR_24->b_qindex = VAR_10;
 FUNC_1(VAR_23);
 FUNC_8(&VAR_23->bq_queue, VAR_24, VAR_12);
 FUNC_2(VAR_23);
 while (VAR_29 != VAR_21) {
  FUNC_21();
  FUNC_1(VAR_23);
  VAR_27 = FUNC_9(VAR_24, VAR_12);
  if (VAR_27 != ((void*)0)) {
   FUNC_10(&VAR_23->bq_queue, VAR_24, VAR_12);
   FUNC_7(&VAR_23->bq_queue, VAR_27, VAR_24,
       VAR_12);
  } else {
   FUNC_2(VAR_23);
   break;
  }







  if (VAR_27->b_qindex == VAR_10 || (VAR_19 != ((void*)0) &&
      VAR_27->b_vp != VAR_19)) {
   FUNC_2(VAR_23);
   continue;
  }
  VAR_30 = FUNC_3(VAR_27, VAR_4 | VAR_5, ((void*)0));
  FUNC_2(VAR_23);
  if (VAR_30 != 0)
   continue;





  if ((VAR_27->b_vflags & VAR_0) != 0 ||
      (VAR_27->b_flags & VAR_1) == 0) {
   FUNC_4(VAR_27);
   continue;
  }
  if (VAR_27->b_flags & VAR_2) {
   FUNC_15(VAR_27);
   FUNC_13(VAR_27);
   VAR_29++;
   continue;
  }

  if (!FUNC_6(&VAR_27->b_dep) && FUNC_16(VAR_27, 0)) {
   if (VAR_22 == 0) {
    FUNC_4(VAR_27);
    continue;
   }
   VAR_28 = 1;
  } else
   VAR_28 = 0;
  VAR_25 = VAR_27->b_vp;
  if (FUNC_25(VAR_25, &VAR_26, VAR_11) != 0) {
   FUNC_4(VAR_27);
   continue;
  }
  if (VAR_19 == ((void*)0)) {
   VAR_31 = 1;
   VAR_30 = FUNC_24(VAR_25, VAR_4 | VAR_5);
  } else {
   FUNC_0(VAR_25, "getbuf");
   VAR_31 = 0;
   VAR_30 = FUNC_11(VAR_25) == VAR_4 ? 0 :
       FUNC_24(VAR_25, VAR_6);
  }
  if (VAR_30 == 0) {
   FUNC_5(VAR_3, "flushbufqueue(%p) vp %p flags %X",
       VAR_27, VAR_27->b_vp, VAR_27->b_flags);
   if (VAR_14 == VAR_13) {
    FUNC_22(VAR_27);
   } else {
    FUNC_14(VAR_27);
    FUNC_17(VAR_27);
    FUNC_18(VAR_17, 1);
   }
   FUNC_23(VAR_26);
   if (VAR_31)
    FUNC_12(VAR_25, 0);
   VAR_15 += VAR_28;
   VAR_29++;





   if (VAR_14 == VAR_13 &&
       VAR_18 > VAR_16)
    FUNC_26();
   continue;
  }
  FUNC_23(VAR_26);
  FUNC_4(VAR_27);
 }
 FUNC_1(VAR_23);
 FUNC_10(&VAR_23->bq_queue, VAR_24, VAR_12);
 FUNC_2(VAR_23);
 FUNC_19(VAR_24, VAR_7);
 return (VAR_29);
}
