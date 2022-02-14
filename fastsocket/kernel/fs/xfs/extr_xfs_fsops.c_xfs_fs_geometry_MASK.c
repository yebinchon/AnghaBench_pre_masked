
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int sb_logsunit; int sb_blocksize; int sb_logsectsize; int sb_width; int sb_unit; int sb_uuid; int sb_logstart; int sb_rextents; int sb_rblocks; int sb_dblocks; int sb_imax_pct; int sb_inodesize; int sb_sectsize; int sb_logblocks; int sb_agcount; int sb_agblocks; int sb_rextsize; } ;
struct TYPE_20__ {TYPE_3__ m_sb; int m_dirblksize; } ;
typedef TYPE_1__ xfs_mount_t ;
struct TYPE_21__ {int flags; int logsunit; int dirblocksize; int rtsectsize; int logsectsize; int version; int swidth; int sunit; int uuid; int logstart; int rtextents; int rtblocks; int datablocks; int imaxpct; int inodesize; int sectsize; int logblocks; int agcount; int agblocks; int rtextsize; int blocksize; } ;
typedef TYPE_2__ xfs_fsop_geom_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;

int
FUNC_17(
 xfs_mount_t *VAR_16,
 xfs_fsop_geom_t *VAR_17,
 int VAR_18)
{

 FUNC_2(VAR_17, 0, sizeof(*VAR_17));

 VAR_17->blocksize = VAR_16->m_sb.sb_blocksize;
 VAR_17->rtextsize = VAR_16->m_sb.sb_rextsize;
 VAR_17->agblocks = VAR_16->m_sb.sb_agblocks;
 VAR_17->agcount = VAR_16->m_sb.sb_agcount;
 VAR_17->logblocks = VAR_16->m_sb.sb_logblocks;
 VAR_17->sectsize = VAR_16->m_sb.sb_sectsize;
 VAR_17->inodesize = VAR_16->m_sb.sb_inodesize;
 VAR_17->imaxpct = VAR_16->m_sb.sb_imax_pct;
 VAR_17->datablocks = VAR_16->m_sb.sb_dblocks;
 VAR_17->rtblocks = VAR_16->m_sb.sb_rblocks;
 VAR_17->rtextents = VAR_16->m_sb.sb_rextents;
 VAR_17->logstart = VAR_16->m_sb.sb_logstart;
 FUNC_0(sizeof(VAR_17->uuid)==sizeof(VAR_16->m_sb.sb_uuid));
 FUNC_1(VAR_17->uuid, &VAR_16->m_sb.sb_uuid, sizeof(VAR_16->m_sb.sb_uuid));
 if (VAR_18 >= 2) {
  VAR_17->sunit = VAR_16->m_sb.sb_unit;
  VAR_17->swidth = VAR_16->m_sb.sb_width;
 }
 if (VAR_18 >= 3) {
  VAR_17->version = VAR_15;
  VAR_17->flags =
   (FUNC_5(&VAR_16->m_sb) ?
    VAR_1 : 0) |
   (FUNC_12(&VAR_16->m_sb) ?
    VAR_10 : 0) |
   (FUNC_14(&VAR_16->m_sb) ?
    VAR_12 : 0) |
   (FUNC_3(&VAR_16->m_sb) ?
    VAR_7 : 0) |
   (FUNC_7(&VAR_16->m_sb) ?
    VAR_3 : 0) |
   (FUNC_16(&VAR_16->m_sb) ?
    VAR_14 : 0) |
   (FUNC_9(&VAR_16->m_sb) ?
    VAR_6 : 0) |
   (FUNC_8(&VAR_16->m_sb) ?
    VAR_4 : 0) |
   (FUNC_15(&VAR_16->m_sb) ?
    VAR_13 : 0) |
   (FUNC_4(&VAR_16->m_sb) ?
    VAR_5 : 0) |
   (FUNC_10(&VAR_16->m_sb) ?
    VAR_8 : 0) |
   (FUNC_6(&VAR_16->m_sb) ?
    VAR_2 : 0) |
   (FUNC_13(&VAR_16->m_sb) ?
    VAR_11 : 0);
  VAR_17->logsectsize = FUNC_15(&VAR_16->m_sb) ?
    VAR_16->m_sb.sb_logsectsize : VAR_0;
  VAR_17->rtsectsize = VAR_16->m_sb.sb_blocksize;
  VAR_17->dirblocksize = VAR_16->m_dirblksize;
 }
 if (VAR_18 >= 4) {
  VAR_17->flags |=
   (FUNC_11(&VAR_16->m_sb) ?
    VAR_9 : 0);
  VAR_17->logsunit = VAR_16->m_sb.sb_logsunit;
 }
 return 0;
}
