
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rq {int dummy; } ;
struct smb_ctx {int dummy; } ;
struct mbdata {int dummy; } ;
typedef int smbfh ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbdata*,int *) ;
 int FUNC_1 (struct mbdata*,int) ;
 int FUNC_2 (struct mbdata*,int ) ;
 int FUNC_3 (struct smb_rq*) ;
 int FUNC_4 (struct mbdata*,char*) ;
 struct mbdata* FUNC_5 (struct smb_rq*) ;
 struct mbdata* FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_ctx*,int ,int,struct smb_rq**) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;

int
FUNC_10(struct smb_ctx *VAR_2, int VAR_3, int VAR_4,
 char *VAR_5, smbfh *VAR_6)
{
 struct smb_rq *VAR_7;
 struct mbdata *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_2, VAR_0, 2, &VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_8 = FUNC_6(VAR_7);
 FUNC_1(VAR_8, VAR_3);
 FUNC_1(VAR_8, VAR_4);
 FUNC_9(VAR_7);
 FUNC_2(VAR_8, VAR_1);
 FUNC_4(VAR_8, VAR_5);
 VAR_9 = FUNC_8(VAR_7);
 if (!VAR_9) {
  VAR_8 = FUNC_5(VAR_7);
  FUNC_0(VAR_8, VAR_6);
 }
 FUNC_3(VAR_7);
 return VAR_9;
}
