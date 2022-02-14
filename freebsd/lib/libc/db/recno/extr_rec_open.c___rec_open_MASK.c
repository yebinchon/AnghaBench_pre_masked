
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef int off_t ;
struct TYPE_24__ {int lorder; int * prefix; int * compare; int psize; scalar_t__ minkeypage; scalar_t__ maxkeypage; int cachesize; scalar_t__ flags; } ;
struct TYPE_23__ {int sync; int seq; int put; int get; int fd; int del; int close; TYPE_2__* internal; } ;
struct TYPE_22__ {scalar_t__ bt_reclen; char bt_bval; int bt_rfd; scalar_t__ (* bt_irec ) (TYPE_2__*,int ) ;scalar_t__ bt_msize; scalar_t__ bt_smap; scalar_t__ bt_cmap; scalar_t__ bt_emap; int flags; int bt_mp; int * bt_rfp; } ;
struct TYPE_21__ {int flags; scalar_t__ reclen; char bval; int * bfname; int lorder; int psize; int cachesize; } ;
typedef TYPE_1__ RECNOINFO ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ DB ;
typedef TYPE_4__ BTREEINFO ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *,int,int,TYPE_4__*,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,struct stat*) ;
 int FUNC_11 (char const*,int,int) ;
 int VAR_34 ;
 int * FUNC_12 (int,char*) ;
 int FUNC_13 (int,int ,int ) ;
 scalar_t__ FUNC_14 (int *,scalar_t__,int ,int ,int,int ) ;
 TYPE_2__* FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int ) ;

DB *
FUNC_18(const char *VAR_35, int VAR_36, int VAR_37, const RECNOINFO *VAR_38,
    int VAR_39)
{
 BTREE *VAR_40;
 BTREEINFO VAR_41;
 DB *VAR_42;
 PAGE *VAR_43;
 struct stat VAR_44;
 int VAR_45, VAR_46;


 if (VAR_35 != ((void*)0) && (VAR_45 = FUNC_11(VAR_35, VAR_36 | VAR_7, VAR_37)) < 0)
  return (((void*)0));


 VAR_42 = ((void*)0);
 if (VAR_38) {
  if (VAR_38->flags & ~(VAR_16 | VAR_20 | VAR_23))
   goto einval;
  VAR_41.flags = 0;
  VAR_41.cachesize = VAR_38->cachesize;
  VAR_41.maxkeypage = 0;
  VAR_41.minkeypage = 0;
  VAR_41.psize = VAR_38->psize;
  VAR_41.compare = ((void*)0);
  VAR_41.prefix = ((void*)0);
  VAR_41.lorder = VAR_38->lorder;
  VAR_42 = FUNC_4(VAR_38->bfname,
      128, VAR_25 | VAR_26, &VAR_41, VAR_39);
 } else
  VAR_42 = FUNC_4(((void*)0), 128, VAR_25 | VAR_26, ((void*)0), VAR_39);
 if (VAR_42 == ((void*)0))
  goto err;







 VAR_40 = VAR_42->internal;
 if (VAR_38) {
  if (VAR_38->flags & VAR_16) {
   FUNC_2(VAR_40, VAR_17);
   VAR_40->bt_reclen = VAR_38->reclen;
   if (VAR_40->bt_reclen == 0)
    goto einval;
  }
  VAR_40->bt_bval = VAR_38->bval;
 } else
  VAR_40->bt_bval = '\n';

 FUNC_2(VAR_40, VAR_22);
 if (VAR_35 == ((void*)0))
  FUNC_2(VAR_40, VAR_15 | VAR_18);
 else
  VAR_40->bt_rfd = VAR_45;

 if (VAR_35 != ((void*)0)) {





  VAR_34 = 0;
  if (FUNC_13(VAR_45, (off_t)0, VAR_24) == -1 && VAR_34 == VAR_1) {
   switch (VAR_36 & VAR_6) {
   case 129:
    FUNC_2(VAR_40, VAR_21);
    break;
   default:
    goto einval;
   }
slow: if ((VAR_40->bt_rfp = FUNC_12(VAR_45, "r")) == ((void*)0))
    goto err;
   FUNC_2(VAR_40, VAR_14);
   VAR_40->bt_irec =
       FUNC_1(VAR_40, VAR_17) ? FUNC_6 : FUNC_8;
  } else {
   switch (VAR_36 & VAR_6) {
   case 129:
    FUNC_2(VAR_40, VAR_21);
    break;
   case 128:
    break;
   default:
    goto einval;
   }

   if (FUNC_10(VAR_45, &VAR_44))
    goto err;
   if (VAR_44.st_size == 0)
    FUNC_2(VAR_40, VAR_15);
   else {
    goto slow;

   }
  }
 }


 VAR_42->close = VAR_27;
 VAR_42->del = VAR_28;
 VAR_42->fd = VAR_29;
 VAR_42->get = VAR_30;
 VAR_42->put = VAR_31;
 VAR_42->seq = VAR_32;
 VAR_42->sync = VAR_33;


 if ((VAR_43 = FUNC_15(VAR_40->bt_mp, VAR_11, 0)) == ((void*)0))
  goto err;
 if ((VAR_43->flags & VAR_12) == VAR_9) {
  FUNC_0(VAR_43, VAR_12);
  FUNC_2(VAR_43, VAR_10);
  FUNC_16(VAR_40->bt_mp, VAR_43, VAR_5);
 } else
  FUNC_16(VAR_40->bt_mp, VAR_43, 0);

 if (VAR_38 && VAR_38->flags & VAR_23 &&
     !FUNC_1(VAR_40, VAR_15 | VAR_18) &&
     VAR_40->bt_irec(VAR_40, VAR_4) == VAR_13)
  goto err;
 return (VAR_42);

einval: VAR_34 = VAR_0;
err: VAR_46 = VAR_34;
 if (VAR_42 != ((void*)0))
  (void)FUNC_3(VAR_42);
 if (VAR_35 != ((void*)0))
  (void)FUNC_9(VAR_45);
 VAR_34 = VAR_46;
 return (((void*)0));
}
