
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbfs_fctx {int f_Sid; int f_scred; int f_ssp; } ;
struct smb_rq {int dummy; } ;
struct mbchain {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbchain*,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,struct smb_rq**) ;
 int FUNC_3 (struct smb_rq*) ;
 int FUNC_4 (struct smb_rq*) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (struct smb_rq*,struct mbchain**) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;

__attribute__((used)) static int
FUNC_10(struct smbfs_fctx *VAR_2)
{
 struct smb_rq *VAR_3;
 struct mbchain *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(FUNC_0(VAR_2->f_ssp), VAR_1,
     VAR_2->f_scred, &VAR_3);
 if (VAR_5)
  return (VAR_5);
 FUNC_6(VAR_3, &VAR_4);
 FUNC_9(VAR_3);
 FUNC_1(VAR_4, (caddr_t)&VAR_2->f_Sid, 2, VAR_0);
 FUNC_8(VAR_3);
 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 VAR_5 = FUNC_7(VAR_3);
 FUNC_5(VAR_3);
 return VAR_5;
}
