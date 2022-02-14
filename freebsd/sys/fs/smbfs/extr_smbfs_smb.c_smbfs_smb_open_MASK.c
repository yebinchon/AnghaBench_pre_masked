
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef void* u_int16_t ;
struct smbnode {void* n_rwstate; void* n_fid; TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
struct TYPE_2__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int) ;
 int FUNC_3 (struct mbchain*,int ) ;
 int FUNC_4 (struct mdchain*,void**) ;
 int FUNC_5 (struct mdchain*,void**) ;
 int FUNC_6 (struct mdchain*,int *) ;
 scalar_t__ FUNC_7 (struct mdchain*,int*) ;
 int FUNC_8 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*,struct mdchain**) ;
 int FUNC_13 (struct smb_rq*,struct mbchain**) ;
 int FUNC_14 (struct smb_rq*) ;
 int FUNC_15 (struct smb_rq*) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct mbchain*,int ,struct smbnode*,int *,int ) ;

int
FUNC_18(struct smbnode *VAR_5, int VAR_6, struct smb_cred *VAR_7)
{
 struct smb_rq *VAR_8;
 struct smb_share *VAR_9 = VAR_5->n_mount->sm_share;
 struct mbchain *VAR_10;
 struct mdchain *VAR_11;
 u_int8_t VAR_12;
 u_int16_t VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_16 = FUNC_8(FUNC_0(VAR_9), VAR_1, VAR_7, &VAR_8);
 if (VAR_16)
  return (VAR_16);
 FUNC_13(VAR_8, &VAR_10);
 FUNC_16(VAR_8);
 FUNC_2(VAR_10, VAR_6);
 FUNC_2(VAR_10, VAR_4 | VAR_3);
 FUNC_15(VAR_8);
 FUNC_10(VAR_8);
 FUNC_3(VAR_10, VAR_2);
 do {
  VAR_16 = FUNC_17(VAR_10, FUNC_1(VAR_9), VAR_5, ((void*)0), 0);
  if (VAR_16)
   break;
  FUNC_9(VAR_8);
  VAR_16 = FUNC_14(VAR_8);
  if (VAR_16)
   break;
  FUNC_12(VAR_8, &VAR_11);
  if (FUNC_7(VAR_11, &VAR_12) != 0 || VAR_12 != 7) {
   VAR_16 = VAR_0;
   break;
  }
  FUNC_4(VAR_11, &VAR_13);
  FUNC_5(VAR_11, &VAR_14);
  FUNC_6(VAR_11, ((void*)0));
  FUNC_6(VAR_11, ((void*)0));
  FUNC_5(VAR_11, &VAR_15);



 } while(0);
 FUNC_11(VAR_8);
 if (VAR_16)
  return VAR_16;
 VAR_5->n_fid = VAR_13;
 VAR_5->n_rwstate = VAR_15;
 return 0;
}
