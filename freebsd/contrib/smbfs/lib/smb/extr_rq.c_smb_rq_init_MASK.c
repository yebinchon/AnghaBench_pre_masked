
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct smb_rq {int rq_rp; int rq_rq; struct smb_ctx* rq_ctx; int rq_cmd; } ;
struct smb_ctx {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct smb_rq*,int) ;
 struct smb_rq* FUNC_1 (int) ;
 int FUNC_2 (int *,size_t) ;

int
FUNC_3(struct smb_ctx *VAR_2, u_char VAR_3, size_t VAR_4, struct smb_rq **VAR_5)
{
 struct smb_rq *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return VAR_0;
 FUNC_0(VAR_6, sizeof(*VAR_6));
 VAR_6->rq_cmd = VAR_3;
 VAR_6->rq_ctx = VAR_2;
 FUNC_2(&VAR_6->rq_rq, VAR_1);
 FUNC_2(&VAR_6->rq_rp, VAR_4);
 *VAR_5 = VAR_6;
 return 0;
}
