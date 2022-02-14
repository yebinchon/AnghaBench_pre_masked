
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d_id; } ;
struct TYPE_4__ {int qlf_len; scalar_t__ qlf_boffset; int qlf_blkno; int qlf_id; int qlf_type; } ;
struct xfs_dq_logitem {TYPE_2__ qli_format; struct xfs_dquot* qli_dquot; int qli_item; } ;
struct xfs_dquot {scalar_t__ q_bufoffset; int q_blkno; TYPE_1__ q_core; int q_mount; struct xfs_dq_logitem q_logitem; } ;
typedef scalar_t__ __uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int *) ;

void
FUNC_2(
 struct xfs_dquot *VAR_2)
{
 struct xfs_dq_logitem *VAR_3 = &VAR_2->q_logitem;

 FUNC_1(VAR_2->q_mount, &VAR_3->qli_item, VAR_0,
     &VAR_1);
 VAR_3->qli_dquot = VAR_2;
 VAR_3->qli_format.qlf_type = VAR_0;
 VAR_3->qli_format.qlf_id = FUNC_0(VAR_2->q_core.d_id);
 VAR_3->qli_format.qlf_blkno = VAR_2->q_blkno;
 VAR_3->qli_format.qlf_len = 1;







 VAR_3->qli_format.qlf_boffset = (__uint32_t)VAR_2->q_bufoffset;
}
