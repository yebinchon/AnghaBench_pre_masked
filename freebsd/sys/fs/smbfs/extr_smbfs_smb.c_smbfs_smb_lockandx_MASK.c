
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
struct smbnode {int n_fid; TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int caddr_t ;
struct TYPE_2__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct mbchain*,int ,int,int ) ;
 int FUNC_2 (struct mbchain*,int) ;
 int FUNC_3 (struct mbchain*,scalar_t__) ;
 int FUNC_4 (struct mbchain*,int) ;
 int FUNC_5 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*,struct mbchain**) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;

__attribute__((used)) static int
FUNC_13(struct smbnode *VAR_5, int VAR_6, u_int32_t VAR_7, off_t VAR_8, off_t VAR_9,
 struct smb_cred *VAR_10)
{
 struct smb_share *VAR_11 = VAR_5->n_mount->sm_share;
 struct smb_rq *VAR_12;
 struct mbchain *VAR_13;
 u_char VAR_14 = 0;
 int VAR_15;

 if (VAR_6 == VAR_4)
  VAR_14 |= VAR_2;

 VAR_15 = FUNC_5(FUNC_0(VAR_11), VAR_1, VAR_10, &VAR_12);
 if (VAR_15)
  return (VAR_15);
 FUNC_9(VAR_12, &VAR_13);
 FUNC_12(VAR_12);
 FUNC_4(VAR_13, 0xff);
 FUNC_4(VAR_13, 0);
 FUNC_2(VAR_13, 0);
 FUNC_1(VAR_13, (caddr_t)&VAR_5->n_fid, 2, VAR_0);
 FUNC_4(VAR_13, VAR_14);
 FUNC_4(VAR_13, 0);
 FUNC_3(VAR_13, 0);
 FUNC_2(VAR_13, VAR_6 == VAR_3 ? 1 : 0);
 FUNC_2(VAR_13, VAR_6 == VAR_3 ? 0 : 1);
 FUNC_11(VAR_12);
 FUNC_7(VAR_12);
 FUNC_2(VAR_13, VAR_7);
 FUNC_3(VAR_13, VAR_8);
 FUNC_3(VAR_13, VAR_9 - VAR_8);
 FUNC_6(VAR_12);
 VAR_15 = FUNC_10(VAR_12);
 FUNC_8(VAR_12);
 return VAR_15;
}
