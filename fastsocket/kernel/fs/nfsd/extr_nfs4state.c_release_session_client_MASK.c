
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {struct nfs4_client* se_client; } ;
struct nfs4_client {int cl_refcount; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs4_client*) ;
 scalar_t__ FUNC_2 (struct nfs4_client*) ;
 int FUNC_3 (struct nfs4_client*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct nfsd4_session *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->se_client;

 if (!FUNC_0(&VAR_2->cl_refcount, &VAR_0))
  return;
 if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_2);
  VAR_1->se_client = ((void*)0);
 } else
  FUNC_3(VAR_2);
 FUNC_4(&VAR_0);
}
