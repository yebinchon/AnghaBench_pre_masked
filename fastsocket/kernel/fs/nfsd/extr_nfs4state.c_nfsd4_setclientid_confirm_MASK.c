
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_cred; } ;
struct sockaddr {int dummy; } ;
struct nfsd4_setclientid_confirm {int sc_clientid; int sc_confirm; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_client {int cl_confirm; int cl_recdir; int cl_cred; int cl_cb_conn; int cl_cb_set; int cl_addr; } ;
typedef int nfs4_verifier ;
typedef int clientid_t ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct nfs4_client*) ;
 struct nfs4_client* FUNC_4 (int *) ;
 struct nfs4_client* FUNC_5 (int ,unsigned int,int) ;
 struct nfs4_client* FUNC_6 (int *) ;
 int FUNC_7 (struct nfs4_client*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_0 ;
 int FUNC_10 (struct nfs4_client*,int *) ;
 int FUNC_11 (struct nfs4_client*) ;
 int FUNC_12 (struct nfs4_client*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (struct sockaddr*,struct sockaddr*) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 struct sockaddr* FUNC_16 (struct svc_rqst*) ;

__be32
FUNC_17(struct svc_rqst *VAR_3,
    struct nfsd4_compound_state *VAR_4,
    struct nfsd4_setclientid_confirm *VAR_5)
{
 struct sockaddr *VAR_6 = FUNC_16(VAR_3);
 struct nfs4_client *VAR_7, *VAR_8;
 nfs4_verifier VAR_9 = VAR_5->sc_confirm;
 clientid_t * VAR_10 = &VAR_5->sc_clientid;
 __be32 VAR_11;

 if (FUNC_0(VAR_10))
  return VAR_2;





 FUNC_8();

 VAR_7 = FUNC_4(VAR_10);
 VAR_8 = FUNC_6(VAR_10);

 VAR_11 = VAR_1;
 if (VAR_7 && !FUNC_13((struct sockaddr *) &VAR_7->cl_addr, VAR_6))
  goto out;
 if (VAR_8 && !FUNC_13((struct sockaddr *) &VAR_8->cl_addr, VAR_6))
  goto out;






 if (VAR_7 && VAR_8 && FUNC_15(&VAR_9, &VAR_8->cl_confirm)) {




  if (!FUNC_14(&VAR_7->cl_cred, &VAR_8->cl_cred))
   VAR_11 = VAR_1;
  else {
   FUNC_1(&VAR_7->cl_cb_set, 0);
   FUNC_10(VAR_7, &VAR_8->cl_cb_conn);
   FUNC_11(VAR_7);
   FUNC_3(VAR_8);
   VAR_11 = VAR_0;

  }
 } else if (VAR_7 && !VAR_8) {





  if (!FUNC_14(&VAR_7->cl_cred, &VAR_3->rq_cred))
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_0;
 } else if (!VAR_7 && VAR_8
   && FUNC_15(&VAR_8->cl_confirm, &VAR_9)) {




  if (!FUNC_14(&VAR_8->cl_cred, &VAR_3->rq_cred)) {
   VAR_11 = VAR_1;
  } else {
   unsigned int VAR_12 =
    FUNC_2(VAR_8->cl_recdir);
   VAR_7 = FUNC_5(VAR_8->cl_recdir,
           VAR_12, 0);
   if (VAR_7) {
    FUNC_12(VAR_7);
    FUNC_3(VAR_7);
   }
   FUNC_7(VAR_8);
   VAR_7 = VAR_8;
   FUNC_11(VAR_7);
   VAR_11 = VAR_0;
  }
 } else if ((!VAR_7 || (VAR_7 && !FUNC_15(&VAR_7->cl_confirm, &VAR_9)))
     && (!VAR_8 || (VAR_8 && !FUNC_15(&VAR_8->cl_confirm,
            &VAR_9)))) {




  VAR_11 = VAR_2;
 } else {

  VAR_11 = VAR_1;
 }
out:
 FUNC_9();
 return VAR_11;
}
