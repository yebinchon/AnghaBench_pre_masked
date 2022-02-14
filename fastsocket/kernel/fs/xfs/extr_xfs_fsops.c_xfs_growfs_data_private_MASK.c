
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_16__ ;


struct TYPE_51__ {int t_flags; } ;
typedef TYPE_3__ xfs_trans_t ;
typedef scalar_t__ xfs_rfsblock_t ;
struct TYPE_48__ {scalar_t__ sb_dblocks; int sb_imax_pct; int sb_agblocks; int sb_agcount; scalar_t__ sb_inopblog; int sb_blocksize; int sb_sectsize; } ;
struct TYPE_52__ {int m_maxagi; TYPE_16__ m_sb; int m_ddev_targp; scalar_t__ m_maxicount; } ;
typedef TYPE_4__ xfs_mount_t ;
struct TYPE_53__ {scalar_t__ newblocks; int imaxpct; } ;
typedef TYPE_5__ xfs_growfs_data_t ;
typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_buf_t ;
struct TYPE_54__ {void* ar_blockcount; void* ar_startblock; } ;
typedef TYPE_6__ xfs_alloc_rec_t ;
typedef int xfs_agnumber_t ;
struct TYPE_49__ {void* bb_rightsib; void* bb_leftsib; } ;
struct TYPE_50__ {TYPE_1__ s; } ;
struct xfs_btree_block {void* agf_length; void* agi_length; TYPE_2__ bb_u; void* bb_numrecs; scalar_t__ bb_level; void* bb_magic; void** agi_unlinked; void* agi_dirino; void* agi_newino; scalar_t__ agi_freecount; void* agi_level; void* agi_root; scalar_t__ agi_count; void* agi_seqno; void* agi_versionnum; void* agi_magicnum; void* agf_longest; void* agf_freeblks; scalar_t__ agf_flcount; void* agf_fllast; scalar_t__ agf_flfirst; void** agf_levels; void** agf_roots; void* agf_seqno; void* agf_versionnum; void* agf_magicnum; } ;
typedef struct xfs_btree_block xfs_agi_t ;
typedef struct xfs_btree_block xfs_agf_t ;
typedef scalar_t__ __uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (TYPE_4__*,int,int ) ;
 TYPE_6__* FUNC_9 (TYPE_4__*,struct xfs_btree_block*,int) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 struct xfs_btree_block* FUNC_11 (int *) ;
 struct xfs_btree_block* FUNC_12 (int *) ;
 struct xfs_btree_block* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_18 (TYPE_4__*,int) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;
 scalar_t__ FUNC_21 (TYPE_4__*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_22 (TYPE_4__*) ;
 int VAR_20 ;
 scalar_t__ FUNC_23 (TYPE_4__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_24 (void**,scalar_t__) ;
 scalar_t__ FUNC_25 (void*) ;
 void* FUNC_26 (int) ;
 void* FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__,int) ;
 int FUNC_29 (struct xfs_btree_block*,int ,int ) ;
 int FUNC_30 (TYPE_3__*,int *,int ) ;
 int FUNC_31 (TYPE_4__*,TYPE_3__*,int,int ,int **) ;
 int * FUNC_32 (int ,int ,scalar_t__,int) ;
 int * FUNC_33 (TYPE_4__*,int ,scalar_t__,int ,int ) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (TYPE_4__*,int *) ;
 int FUNC_36 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_37 (TYPE_3__*,int *,int ) ;
 int FUNC_38 (TYPE_4__*,TYPE_3__*,int,int **) ;
 int FUNC_39 (TYPE_4__*,int,int*) ;
 int FUNC_40 (TYPE_4__*,int ,int ,scalar_t__,int ,int **) ;
 int FUNC_41 (int ,TYPE_16__*,int ) ;
 int FUNC_42 (TYPE_16__*,scalar_t__) ;
 int FUNC_43 (TYPE_4__*) ;
 int FUNC_44 (TYPE_3__*,scalar_t__) ;
 TYPE_3__* FUNC_45 (TYPE_4__*,int ) ;
 int FUNC_46 (TYPE_3__*,int ) ;
 int FUNC_47 (TYPE_3__*,int ) ;
 int FUNC_48 (TYPE_3__*,int ,int) ;
 int FUNC_49 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_50 (TYPE_4__*,char*,int,int) ;

__attribute__((used)) static int
FUNC_51(
 xfs_mount_t *VAR_28,
 xfs_growfs_data_t *VAR_29)
{
 xfs_agf_t *VAR_30;
 xfs_agi_t *VAR_31;
 xfs_agnumber_t VAR_32;
 xfs_extlen_t VAR_33;
 xfs_extlen_t VAR_34;
 xfs_alloc_rec_t *VAR_35;
 struct xfs_btree_block *VAR_36;
 xfs_buf_t *VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;
 xfs_agnumber_t VAR_41;
 xfs_agnumber_t VAR_42 = 0;
 xfs_rfsblock_t VAR_43, VAR_44;
 xfs_rfsblock_t VAR_45;
 xfs_rfsblock_t VAR_46;
 xfs_agnumber_t VAR_47;
 int VAR_48;
 xfs_trans_t *VAR_49;

 VAR_43 = VAR_29->newblocks;
 VAR_48 = VAR_29->imaxpct;
 if (VAR_43 < VAR_28->m_sb.sb_dblocks || VAR_48 < 0 || VAR_48 > 100)
  return FUNC_16(VAR_0);
 if ((VAR_40 = FUNC_42(&VAR_28->m_sb, VAR_43)))
  return VAR_40;
 VAR_39 = VAR_48 - VAR_28->m_sb.sb_imax_pct;
 VAR_37 = FUNC_33(VAR_28, VAR_28->m_ddev_targp,
    FUNC_17(VAR_28, VAR_43) - FUNC_18(VAR_28, 1),
    FUNC_1(FUNC_18(VAR_28, 1)), 0);
 if (!VAR_37)
  return VAR_1;
 FUNC_34(VAR_37);

 VAR_45 = VAR_43;
 VAR_44 = FUNC_28(VAR_45, VAR_28->m_sb.sb_agblocks);
 VAR_41 = VAR_45 + (VAR_44 != 0);
 if (VAR_44 && VAR_44 < VAR_19) {
  VAR_41--;
  VAR_43 = (xfs_rfsblock_t)VAR_41 * VAR_28->m_sb.sb_agblocks;
  if (VAR_43 < VAR_28->m_sb.sb_dblocks)
   return FUNC_16(VAR_0);
 }
 VAR_45 = VAR_43 - VAR_28->m_sb.sb_dblocks;
 VAR_47 = VAR_28->m_sb.sb_agcount;


 if (VAR_41 > VAR_47) {
  VAR_40 = FUNC_39(VAR_28, VAR_41, &VAR_42);
  if (VAR_40)
   return VAR_40;
 }

 VAR_49 = FUNC_45(VAR_28, VAR_22);
 VAR_49->t_flags |= VAR_23;
 if ((VAR_40 = FUNC_49(VAR_49, FUNC_20(VAR_28),
   FUNC_19(VAR_28), 0, 0, 0))) {
  FUNC_46(VAR_49, 0);
  return VAR_40;
 }






 VAR_46 = 0;
 for (VAR_32 = VAR_41 - 1; VAR_32 >= VAR_47; VAR_32--, VAR_45 -= VAR_33) {



  VAR_37 = FUNC_32(VAR_28->m_ddev_targp,
     FUNC_8(VAR_28, VAR_32, FUNC_6(VAR_28)),
     FUNC_18(VAR_28, 1), VAR_5 | VAR_6);
  if (!VAR_37) {
   VAR_40 = VAR_2;
   goto error0;
  }
  VAR_30 = FUNC_11(VAR_37);
  FUNC_29(VAR_30, 0, VAR_28->m_sb.sb_sectsize);
  VAR_30->agf_magicnum = FUNC_27(VAR_10);
  VAR_30->agf_versionnum = FUNC_27(VAR_11);
  VAR_30->agf_seqno = FUNC_27(VAR_32);
  if (VAR_32 == VAR_41 - 1)
   VAR_33 =
    VAR_43 -
    (VAR_32 * (xfs_rfsblock_t)VAR_28->m_sb.sb_agblocks);
  else
   VAR_33 = VAR_28->m_sb.sb_agblocks;
  VAR_30->agf_length = FUNC_27(VAR_33);
  VAR_30->agf_roots[VAR_16] = FUNC_27(FUNC_10(VAR_28));
  VAR_30->agf_roots[VAR_17] = FUNC_27(FUNC_15(VAR_28));
  VAR_30->agf_levels[VAR_16] = FUNC_27(1);
  VAR_30->agf_levels[VAR_17] = FUNC_27(1);
  VAR_30->agf_flfirst = 0;
  VAR_30->agf_fllast = FUNC_27(FUNC_5(VAR_28) - 1);
  VAR_30->agf_flcount = 0;
  VAR_34 = VAR_33 - FUNC_22(VAR_28);
  VAR_30->agf_freeblks = FUNC_27(VAR_34);
  VAR_30->agf_longest = FUNC_27(VAR_34);
  VAR_40 = FUNC_35(VAR_28, VAR_37);
  if (VAR_40) {
   goto error0;
  }



  VAR_37 = FUNC_32(VAR_28->m_ddev_targp,
     FUNC_8(VAR_28, VAR_32, FUNC_7(VAR_28)),
     FUNC_18(VAR_28, 1), VAR_5 | VAR_6);
  if (!VAR_37) {
   VAR_40 = VAR_2;
   goto error0;
  }
  VAR_31 = FUNC_12(VAR_37);
  FUNC_29(VAR_31, 0, VAR_28->m_sb.sb_sectsize);
  VAR_31->agi_magicnum = FUNC_27(VAR_13);
  VAR_31->agi_versionnum = FUNC_27(VAR_15);
  VAR_31->agi_seqno = FUNC_27(VAR_32);
  VAR_31->agi_length = FUNC_27(VAR_33);
  VAR_31->agi_count = 0;
  VAR_31->agi_root = FUNC_27(FUNC_21(VAR_28));
  VAR_31->agi_level = FUNC_27(1);
  VAR_31->agi_freecount = 0;
  VAR_31->agi_newino = FUNC_27(VAR_4);
  VAR_31->agi_dirino = FUNC_27(VAR_4);
  for (VAR_38 = 0; VAR_38 < VAR_14; VAR_38++)
   VAR_31->agi_unlinked[VAR_38] = FUNC_27(VAR_4);
  VAR_40 = FUNC_35(VAR_28, VAR_37);
  if (VAR_40) {
   goto error0;
  }



  VAR_37 = FUNC_32(VAR_28->m_ddev_targp,
     FUNC_3(VAR_28, VAR_32, FUNC_10(VAR_28)),
     FUNC_2(VAR_28->m_sb.sb_blocksize),
     VAR_5 | VAR_6);
  if (!VAR_37) {
   VAR_40 = VAR_2;
   goto error0;
  }
  VAR_36 = FUNC_13(VAR_37);
  FUNC_29(VAR_36, 0, VAR_28->m_sb.sb_blocksize);
  VAR_36->bb_magic = FUNC_27(VAR_7);
  VAR_36->bb_level = 0;
  VAR_36->bb_numrecs = FUNC_26(1);
  VAR_36->bb_u.s.bb_leftsib = FUNC_27(VAR_3);
  VAR_36->bb_u.s.bb_rightsib = FUNC_27(VAR_3);
  VAR_35 = FUNC_9(VAR_28, VAR_36, 1);
  VAR_35->ar_startblock = FUNC_27(FUNC_22(VAR_28));
  VAR_35->ar_blockcount = FUNC_27(
   VAR_33 - FUNC_25(VAR_35->ar_startblock));
  VAR_40 = FUNC_35(VAR_28, VAR_37);
  if (VAR_40) {
   goto error0;
  }



  VAR_37 = FUNC_32(VAR_28->m_ddev_targp,
     FUNC_3(VAR_28, VAR_32, FUNC_15(VAR_28)),
     FUNC_2(VAR_28->m_sb.sb_blocksize),
     VAR_5 | VAR_6);
  if (!VAR_37) {
   VAR_40 = VAR_2;
   goto error0;
  }
  VAR_36 = FUNC_13(VAR_37);
  FUNC_29(VAR_36, 0, VAR_28->m_sb.sb_blocksize);
  VAR_36->bb_magic = FUNC_27(VAR_8);
  VAR_36->bb_level = 0;
  VAR_36->bb_numrecs = FUNC_26(1);
  VAR_36->bb_u.s.bb_leftsib = FUNC_27(VAR_3);
  VAR_36->bb_u.s.bb_rightsib = FUNC_27(VAR_3);
  VAR_35 = FUNC_9(VAR_28, VAR_36, 1);
  VAR_35->ar_startblock = FUNC_27(FUNC_22(VAR_28));
  VAR_35->ar_blockcount = FUNC_27(
   VAR_33 - FUNC_25(VAR_35->ar_startblock));
  VAR_46 += FUNC_25(VAR_35->ar_blockcount);
  VAR_40 = FUNC_35(VAR_28, VAR_37);
  if (VAR_40) {
   goto error0;
  }



  VAR_37 = FUNC_32(VAR_28->m_ddev_targp,
     FUNC_3(VAR_28, VAR_32, FUNC_21(VAR_28)),
     FUNC_2(VAR_28->m_sb.sb_blocksize),
     VAR_5 | VAR_6);
  if (!VAR_37) {
   VAR_40 = VAR_2;
   goto error0;
  }
  VAR_36 = FUNC_13(VAR_37);
  FUNC_29(VAR_36, 0, VAR_28->m_sb.sb_blocksize);
  VAR_36->bb_magic = FUNC_27(VAR_18);
  VAR_36->bb_level = 0;
  VAR_36->bb_numrecs = 0;
  VAR_36->bb_u.s.bb_leftsib = FUNC_27(VAR_3);
  VAR_36->bb_u.s.bb_rightsib = FUNC_27(VAR_3);
  VAR_40 = FUNC_35(VAR_28, VAR_37);
  if (VAR_40) {
   goto error0;
  }
 }
 FUNC_44(VAR_49, VAR_46);



 if (VAR_45) {



  VAR_40 = FUNC_38(VAR_28, VAR_49, VAR_32, &VAR_37);
  if (VAR_40) {
   goto error0;
  }
  FUNC_0(*VAR_37);
  VAR_31 = FUNC_12(VAR_37);
  FUNC_24(&VAR_31->agi_length, VAR_45);
  FUNC_0(VAR_41 == VAR_47 ||
         FUNC_25(VAR_31->agi_length) == VAR_28->m_sb.sb_agblocks);
  FUNC_37(VAR_49, VAR_37, VAR_12);



  VAR_40 = FUNC_31(VAR_28, VAR_49, VAR_32, 0, &VAR_37);
  if (VAR_40) {
   goto error0;
  }
  FUNC_0(*VAR_37);
  VAR_30 = FUNC_11(VAR_37);
  FUNC_24(&VAR_30->agf_length, VAR_45);
  FUNC_0(FUNC_25(VAR_30->agf_length) ==
         FUNC_25(VAR_31->agi_length));

  FUNC_30(VAR_49, VAR_37, VAR_9);



  VAR_40 = FUNC_36(VAR_49, FUNC_4(VAR_28, VAR_32,
   FUNC_25(VAR_30->agf_length) - VAR_45), VAR_45);
  if (VAR_40) {
   goto error0;
  }
 }






 if (VAR_41 > VAR_47)
  FUNC_48(VAR_49, VAR_24, VAR_41 - VAR_47);
 if (VAR_43 > VAR_28->m_sb.sb_dblocks)
  FUNC_48(VAR_49, VAR_25,
     VAR_43 - VAR_28->m_sb.sb_dblocks);
 if (VAR_46)
  FUNC_48(VAR_49, VAR_26, VAR_46);
 if (VAR_39)
  FUNC_48(VAR_49, VAR_27, VAR_39);
 VAR_40 = FUNC_47(VAR_49, 0);
 if (VAR_40)
  return VAR_40;


 if (VAR_42)
  VAR_28->m_maxagi = VAR_42;
 if (VAR_28->m_sb.sb_imax_pct) {
  __uint64_t VAR_50 = VAR_28->m_sb.sb_dblocks * VAR_28->m_sb.sb_imax_pct;
  FUNC_28(VAR_50, 100);
  VAR_28->m_maxicount = VAR_50 << VAR_28->m_sb.sb_inopblog;
 } else
  VAR_28->m_maxicount = 0;
 FUNC_43(VAR_28);


 for (VAR_32 = 1; VAR_32 < VAR_41; VAR_32++) {
  VAR_40 = FUNC_40(VAR_28, VAR_28->m_ddev_targp,
      FUNC_3(VAR_28, VAR_32, FUNC_23(VAR_28)),
      FUNC_18(VAR_28, 1), 0, &VAR_37);
  if (VAR_40) {
   FUNC_50(VAR_28,
  "error %d reading secondary superblock for ag %d",
    VAR_40, VAR_32);
   break;
  }
  FUNC_41(FUNC_14(VAR_37), &VAR_28->m_sb, VAR_20);





  if (!(VAR_40 = FUNC_35(VAR_28, VAR_37))) {
   continue;
  } else {
   FUNC_50(VAR_28,
  "write error %d updating secondary superblock for ag %d",
    VAR_40, VAR_32);
   break;
  }
 }
 return 0;

 error0:
 FUNC_46(VAR_49, VAR_21);
 return VAR_40;
}
