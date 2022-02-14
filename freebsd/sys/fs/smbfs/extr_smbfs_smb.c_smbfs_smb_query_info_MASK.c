
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
struct smbnode {TYPE_1__* n_mount; } ;
struct smbfattr {scalar_t__ fa_size; int fa_mtime; int fa_attr; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
struct TYPE_6__ {int sv_tz; } ;
struct TYPE_7__ {TYPE_2__ vc_sopt; } ;
struct TYPE_5__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smb_share*) ;
 TYPE_3__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ) ;
 int FUNC_3 (struct mdchain*,int *) ;
 int FUNC_4 (struct mdchain*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct mdchain*,int*) ;
 int FUNC_6 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*,struct mdchain**) ;
 int FUNC_11 (struct smb_rq*,struct mbchain**) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (struct smb_rq*) ;
 int FUNC_15 (scalar_t__,int ,int *) ;
 int FUNC_16 (struct mbchain*,TYPE_3__*,struct smbnode*,char const*,int) ;

int
FUNC_17(struct smbnode *VAR_3, const char *VAR_4, int VAR_5,
       struct smbfattr *VAR_6, struct smb_cred *VAR_7)
{
 struct smb_rq *VAR_8;
 struct smb_share *VAR_9 = VAR_3->n_mount->sm_share;
 struct mbchain *VAR_10;
 struct mdchain *VAR_11;
 u_int8_t VAR_12;
 int VAR_13;
 u_int16_t VAR_14;
 u_int32_t VAR_15;

 VAR_13 = FUNC_6(FUNC_0(VAR_9), VAR_1, VAR_7,
     &VAR_8);
 if (VAR_13)
  return (VAR_13);
 FUNC_11(VAR_8, &VAR_10);
 FUNC_14(VAR_8);
 FUNC_13(VAR_8);
 FUNC_8(VAR_8);
 FUNC_2(VAR_10, VAR_2);
 do {
  VAR_13 = FUNC_16(VAR_10, FUNC_1(VAR_9), VAR_3, VAR_4, VAR_5);
  if (VAR_13)
   break;
  FUNC_7(VAR_8);
  VAR_13 = FUNC_12(VAR_8);
  if (VAR_13)
   break;
  FUNC_10(VAR_8, &VAR_11);
  if (FUNC_5(VAR_11, &VAR_12) != 0 || VAR_12 != 10) {
   VAR_13 = VAR_0;
   break;
  }
  FUNC_3(VAR_11, &VAR_14);
  VAR_6->fa_attr = VAR_14;






  FUNC_4(VAR_11, &VAR_15);
  if (VAR_15)
   FUNC_15(VAR_15, FUNC_1(VAR_9)->vc_sopt.sv_tz,
           &VAR_6->fa_mtime);
  FUNC_4(VAR_11, &VAR_15);
  VAR_6->fa_size = VAR_15;
 } while(0);
 FUNC_9(VAR_8);
 return VAR_13;
}
