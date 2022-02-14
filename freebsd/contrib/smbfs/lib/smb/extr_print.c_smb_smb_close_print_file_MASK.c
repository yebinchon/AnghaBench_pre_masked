
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rq {int dummy; } ;
struct smb_ctx {int dummy; } ;
struct mbdata {int dummy; } ;
typedef int smbfh ;


 int VAR_0 ;
 int FUNC_0 (struct mbdata*,char*,int) ;
 int FUNC_1 (struct smb_rq*) ;
 struct mbdata* FUNC_2 (struct smb_rq*) ;
 int FUNC_3 (struct smb_ctx*,int ,int ,struct smb_rq**) ;
 int FUNC_4 (struct smb_rq*) ;
 int FUNC_5 (struct smb_rq*) ;

int
FUNC_6(struct smb_ctx *VAR_1, smbfh VAR_2)
{
 struct smb_rq *VAR_3;
 struct mbdata *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_0, 0, &VAR_3);
 if (VAR_5)
  return VAR_5;
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_4, (char*)&VAR_2, 2);
 FUNC_5(VAR_3);
 VAR_5 = FUNC_4(VAR_3);
 FUNC_1(VAR_3);
 return VAR_5;
}
