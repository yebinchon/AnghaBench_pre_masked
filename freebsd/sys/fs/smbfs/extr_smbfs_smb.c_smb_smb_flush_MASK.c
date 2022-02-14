
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smbnode {int n_flag; int n_fid; TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
typedef int caddr_t ;
struct TYPE_4__ {scalar_t__ v_type; } ;
struct TYPE_3__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct smbnode*) ;
 int VAR_3 ;
 int FUNC_1 (struct smb_share*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct mbchain*,int ,int,int ) ;
 int FUNC_3 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_4 (struct smb_rq*) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*,struct mbchain**) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*) ;

__attribute__((used)) static int
FUNC_11(struct smbnode *VAR_5, struct smb_cred *VAR_6)
{
 struct smb_share *VAR_7 = VAR_5->n_mount->sm_share;
 struct smb_rq *VAR_8;
 struct mbchain *VAR_9;
 int VAR_10;

 if ((VAR_5->n_flag & VAR_2) == 0 || !FUNC_0(VAR_5) ||
     FUNC_0(VAR_5)->v_type != VAR_4)
  return 0;
 VAR_10 = FUNC_3(FUNC_1(VAR_7), VAR_3, VAR_6, &VAR_8);
 if (VAR_10)
  return (VAR_10);
 FUNC_7(VAR_8, &VAR_9);
 FUNC_10(VAR_8);
 FUNC_2(VAR_9, (caddr_t)&VAR_5->n_fid, 2, VAR_0);
 FUNC_9(VAR_8);
 FUNC_5(VAR_8);
 FUNC_4(VAR_8);
 VAR_10 = FUNC_8(VAR_8);
 FUNC_6(VAR_8);
 if (!VAR_10)
  VAR_5->n_flag &= ~VAR_1;
 return (VAR_10);
}
