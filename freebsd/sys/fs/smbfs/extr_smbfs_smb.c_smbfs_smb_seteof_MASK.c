
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbnode {int n_fid; TYPE_1__* n_mount; } ;
struct mbchain {int dummy; } ;
struct smb_t2rq {int t2_maxpcount; scalar_t__ t2_maxdcount; struct mbchain t2_tdata; struct mbchain t2_tparam; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;
typedef int int64_t ;
typedef int caddr_t ;
struct TYPE_2__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct mbchain*) ;
 int FUNC_2 (struct mbchain*,int ) ;
 int FUNC_3 (struct mbchain*,int ,int,int ) ;
 int FUNC_4 (struct mbchain*,int ) ;
 int FUNC_5 (struct mbchain*,int ) ;
 int FUNC_6 (int ,int ,struct smb_cred*,struct smb_t2rq**) ;
 int FUNC_7 (struct smb_t2rq*) ;
 int FUNC_8 (struct smb_t2rq*) ;

__attribute__((used)) static int
FUNC_9(struct smbnode *VAR_3, int64_t VAR_4, struct smb_cred *VAR_5)
{
 struct smb_t2rq *VAR_6;
 struct smb_share *VAR_7 = VAR_3->n_mount->sm_share;
 struct mbchain *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(FUNC_0(VAR_7), VAR_2,
     VAR_5, &VAR_6);
 if (VAR_9)
  return VAR_9;
 VAR_8 = &VAR_6->t2_tparam;
 FUNC_1(VAR_8);
 FUNC_3(VAR_8, (caddr_t)&VAR_3->n_fid, 2, VAR_0);
 FUNC_4(VAR_8, VAR_1);
 FUNC_5(VAR_8, 0);
 VAR_8 = &VAR_6->t2_tdata;
 FUNC_1(VAR_8);
 FUNC_2(VAR_8, VAR_4);
 FUNC_5(VAR_8, 0);
 FUNC_4(VAR_8, 0);
 VAR_6->t2_maxpcount = 2;
 VAR_6->t2_maxdcount = 0;
 VAR_9 = FUNC_8(VAR_6);
 FUNC_7(VAR_6);
 return VAR_9;
}
