
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbnode {TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mbchain {int dummy; } ;
struct TYPE_2__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int) ;
 int FUNC_3 (struct mbchain*,int ) ;
 int FUNC_4 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*,struct mbchain**) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct mbchain*,int ,struct smbnode*,char const*,int) ;

int
FUNC_13(struct smbnode *VAR_4, struct smbnode *VAR_5,
 const char *VAR_6, int VAR_7, struct smb_cred *VAR_8)
{
 struct smb_rq *VAR_9;
 struct smb_share *VAR_10 = VAR_4->n_mount->sm_share;
 struct mbchain *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(FUNC_0(VAR_10), VAR_0, VAR_8, &VAR_9);
 if (VAR_12)
  return (VAR_12);
 FUNC_8(VAR_9, &VAR_11);
 FUNC_11(VAR_9);
 FUNC_2(VAR_11, VAR_3 | VAR_2);
 FUNC_10(VAR_9);
 FUNC_6(VAR_9);
 FUNC_3(VAR_11, VAR_1);
 do {
  VAR_12 = FUNC_12(VAR_11, FUNC_1(VAR_10), VAR_4, ((void*)0), 0);
  if (VAR_12)
   break;
  FUNC_3(VAR_11, VAR_1);
  VAR_12 = FUNC_12(VAR_11, FUNC_1(VAR_10), VAR_5, VAR_6, VAR_7);
  if (VAR_12)
   break;
  FUNC_5(VAR_9);
  VAR_12 = FUNC_9(VAR_9);
 } while(0);
 FUNC_7(VAR_9);
 return VAR_12;
}
