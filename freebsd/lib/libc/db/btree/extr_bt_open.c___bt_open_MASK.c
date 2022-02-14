
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct stat {int st_blksize; scalar_t__ st_size; } ;
typedef int ssize_t ;
typedef int pgno_t ;
typedef int indx_t ;
struct TYPE_16__ {scalar_t__ magic; int version; int psize; int free; int nrecs; int flags; } ;
struct TYPE_15__ {int flags; int psize; int minkeypage; int lorder; int cachesize; int * prefix; int * compare; } ;
struct TYPE_14__ {int bt_fd; int bt_lorder; int bt_rfd; int bt_free; int bt_nrecs; int bt_psize; scalar_t__ bt_ovflsize; struct TYPE_14__* bt_dbp; int * bt_mp; int sync; int seq; int put; int get; int fd; int del; int close; struct TYPE_14__* internal; int type; int * bt_pfx; int * bt_cmp; int bt_order; } ;
typedef TYPE_1__ DB ;
typedef TYPE_2__ BTREEINFO ;
typedef TYPE_1__ BTREE ;
typedef TYPE_4__ BTMETA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;



 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 int FUNC_7 (char const*,int,int) ;
 int FUNC_8 (int,TYPE_4__*,int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int,int) ;
 int VAR_42 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int *,int ,int ,TYPE_1__*) ;
 int * FUNC_14 (int *,int,int,int ) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 () ;

DB *
FUNC_17(const char *VAR_43, int VAR_44, int VAR_45, const BTREEINFO *VAR_46, int VAR_47)
{
 struct stat VAR_48;
 BTMETA VAR_49;
 BTREE *VAR_50;
 BTREEINFO VAR_51;
 DB *VAR_52;
 pgno_t VAR_53;
 ssize_t VAR_54;
 int VAR_55, VAR_56;

 VAR_50 = ((void*)0);
 VAR_55 = FUNC_9();
 if (VAR_46) {
  VAR_51 = *VAR_46;


  if (VAR_51.flags & ~(VAR_29))
   goto einval;






  if (VAR_51.psize &&
      (VAR_51.psize < VAR_22 || VAR_51.psize > VAR_20 + 1 ||
      VAR_51.psize & (sizeof(indx_t) - 1) ))
   goto einval;


  if (VAR_51.minkeypage) {
   if (VAR_51.minkeypage < 2)
    goto einval;
  } else
   VAR_51.minkeypage = VAR_16;


  if (VAR_51.compare == ((void*)0)) {
   VAR_51.compare = VAR_32;
   if (VAR_51.prefix == ((void*)0))
    VAR_51.prefix = VAR_33;
  }

  if (VAR_51.lorder == 0)
   VAR_51.lorder = VAR_55;
 } else {
  VAR_51.compare = VAR_32;
  VAR_51.cachesize = 0;
  VAR_51.flags = 0;
  VAR_51.lorder = VAR_55;
  VAR_51.minkeypage = VAR_16;
  VAR_51.prefix = VAR_33;
  VAR_51.psize = 0;
 }


 if (VAR_51.lorder != VAR_0 && VAR_51.lorder != VAR_19)
  goto einval;


 if ((VAR_50 = (BTREE *)FUNC_10(1, sizeof(BTREE))) == ((void*)0))
  goto err;
 VAR_50->bt_fd = -1;
 VAR_50->bt_lorder = VAR_51.lorder;
 VAR_50->bt_order = VAR_23;
 VAR_50->bt_cmp = VAR_51.compare;
 VAR_50->bt_pfx = VAR_51.prefix;
 VAR_50->bt_rfd = -1;

 if ((VAR_50->bt_dbp = VAR_52 = (DB *)FUNC_10(1, sizeof(DB))) == ((void*)0))
  goto err;
 if (VAR_50->bt_lorder != VAR_55)
  FUNC_2(VAR_50, VAR_9);

 VAR_52->type = VAR_12;
 VAR_52->internal = VAR_50;
 VAR_52->close = VAR_31;
 VAR_52->del = VAR_34;
 VAR_52->fd = VAR_35;
 VAR_52->get = VAR_36;
 VAR_52->put = VAR_39;
 VAR_52->seq = VAR_40;
 VAR_52->sync = VAR_41;





 if (VAR_43) {
  switch (VAR_44 & VAR_25) {
  case 130:
   FUNC_2(VAR_50, VAR_11);
   break;
  case 129:
   break;
  case 128:
  default:
   goto einval;
  }

  if ((VAR_50->bt_fd = FUNC_7(VAR_43, VAR_44 | VAR_26, VAR_45)) < 0)
   goto err;

 } else {
  if ((VAR_44 & VAR_25) != 129)
   goto einval;
  if ((VAR_50->bt_fd = FUNC_16()) == -1)
   goto err;
  FUNC_2(VAR_50, VAR_7);
 }

 if (FUNC_6(VAR_50->bt_fd, &VAR_48))
  goto err;
 if (VAR_48.st_size) {
  if ((VAR_54 = FUNC_8(VAR_50->bt_fd, &VAR_49, sizeof(BTMETA))) < 0)
   goto err;
  if (VAR_54 != sizeof(BTMETA))
   goto eftype;
  if (VAR_49.magic == VAR_2)
   FUNC_0(VAR_50, VAR_9);
  else {
   FUNC_2(VAR_50, VAR_9);
   FUNC_3(VAR_49.magic);
   FUNC_3(VAR_49.version);
   FUNC_3(VAR_49.psize);
   FUNC_3(VAR_49.free);
   FUNC_3(VAR_49.nrecs);
   FUNC_3(VAR_49.flags);
  }
  if (VAR_49.magic != VAR_2 || VAR_49.version != VAR_3)
   goto eftype;
  if (VAR_49.psize < VAR_22 || VAR_49.psize > VAR_20 + 1 ||
      VAR_49.psize & (sizeof(indx_t) - 1) )
   goto eftype;
  if (VAR_49.flags & ~VAR_30)
   goto eftype;
  VAR_51.psize = VAR_49.psize;
  FUNC_2(VAR_50, VAR_49.flags);
  VAR_50->bt_free = VAR_49.free;
  VAR_50->bt_nrecs = VAR_49.nrecs;
 } else {




  if (VAR_51.psize == 0) {
   VAR_51.psize = VAR_48.st_blksize;
   if (VAR_51.psize < VAR_22)
    VAR_51.psize = VAR_22;
   if (VAR_51.psize > VAR_20 + 1)
    VAR_51.psize = VAR_20 + 1;
  }


  if (!(VAR_51.flags & VAR_29))
   FUNC_2(VAR_50, VAR_10);

  VAR_50->bt_free = VAR_27;
  VAR_50->bt_nrecs = 0;
  FUNC_2(VAR_50, VAR_8);
 }

 VAR_50->bt_psize = VAR_51.psize;


 if (VAR_51.cachesize && VAR_51.cachesize & (VAR_51.psize - 1) )
  VAR_51.cachesize += (~VAR_51.cachesize & (VAR_51.psize - 1) ) + 1;
 if (VAR_51.cachesize < VAR_51.psize * VAR_21)
  VAR_51.cachesize = VAR_51.psize * VAR_21;


 VAR_53 = FUNC_12(VAR_51.cachesize, VAR_50->bt_psize);
 VAR_50->bt_ovflsize = (VAR_50->bt_psize - VAR_1) / VAR_51.minkeypage -
     (sizeof(indx_t) + FUNC_4(0, 0));
 if (VAR_50->bt_ovflsize < FUNC_4(VAR_24, VAR_24) + sizeof(indx_t))
  VAR_50->bt_ovflsize =
      FUNC_4(VAR_24, VAR_24) + sizeof(indx_t);


 if ((VAR_50->bt_mp =
     FUNC_14(((void*)0), VAR_50->bt_fd, VAR_50->bt_psize, VAR_53)) == ((void*)0))
  goto err;
 if (!FUNC_1(VAR_50, VAR_7))
  FUNC_13(VAR_50->bt_mp, VAR_37, VAR_38, VAR_50);


 if (FUNC_15(VAR_50) == VAR_28)
  goto err;


 if (VAR_47 & VAR_13)
  FUNC_2(VAR_50, VAR_4);
 if (VAR_47 & VAR_14)
  FUNC_2(VAR_50, VAR_5);
 if (VAR_47 & VAR_15)
  FUNC_2(VAR_50, VAR_6);

 return (VAR_52);

einval: VAR_42 = VAR_18;
 goto err;

eftype: VAR_42 = VAR_17;
 goto err;

err: VAR_56 = VAR_42;
 if (VAR_50) {
  if (VAR_50->bt_dbp)
   FUNC_11(VAR_50->bt_dbp);
  if (VAR_50->bt_fd != -1)
   (void)FUNC_5(VAR_50->bt_fd);
  FUNC_11(VAR_50);
 }
 VAR_42 = VAR_56;
 return (((void*)0));
}
