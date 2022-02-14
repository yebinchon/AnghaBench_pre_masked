
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {struct nfs4_client* se_client; } ;
struct nfsd4_conn {int cn_xpt_user; int cn_xprt; } ;
struct nfs4_client {int cl_lock; } ;


 struct nfsd4_conn* FUNC_0 (int ,struct nfsd4_session*) ;
 int FUNC_1 (struct nfsd4_conn*,struct nfsd4_session*) ;
 int FUNC_2 (struct nfsd4_conn*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfsd4_conn*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct nfsd4_conn *VAR_0, struct nfsd4_session *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->se_client;
 struct nfsd4_conn *VAR_3;
 int VAR_4;

 FUNC_5(&VAR_2->cl_lock);
 VAR_3 = FUNC_0(VAR_0->cn_xprt, VAR_1);
 if (VAR_3) {
  FUNC_6(&VAR_2->cl_lock);
  FUNC_2(VAR_0);
  return;
 }
 FUNC_1(VAR_0, VAR_1);
 FUNC_6(&VAR_2->cl_lock);
 VAR_4 = FUNC_4(VAR_0);
 if (VAR_4)

  FUNC_3(&VAR_0->cn_xpt_user);
 return;
}
