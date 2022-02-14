
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdr_netobj {int data; int len; } ;
struct svc_rqst {int rq_cred; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_5__ {int cl_id; int cl_boot; } ;
struct nfsd4_setclientid {TYPE_3__ se_confirm; TYPE_1__ se_clientid; int se_verf; int se_name; int se_namelen; } ;
struct nfsd4_compound_state {int dummy; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_6__ {int cl_id; int cl_boot; } ;
struct nfs4_client {TYPE_4__ cl_confirm; TYPE_2__ cl_clientid; scalar_t__ cl_minorversion; int cl_verifier; int cl_addr; int cl_cred; } ;
typedef int nfs4_verifier ;
typedef int addr_str ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs4_client*,unsigned int) ;
 int FUNC_1 (struct xdr_netobj) ;
 unsigned int FUNC_2 (char*) ;
 int FUNC_3 (struct nfs4_client*,struct nfs4_client*) ;
 struct nfs4_client* FUNC_4 (struct xdr_netobj,char*,struct svc_rqst*,int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct nfs4_client*) ;
 struct nfs4_client* FUNC_7 (char*,unsigned int,int) ;
 struct nfs4_client* FUNC_8 (char*,unsigned int,int) ;
 int FUNC_9 (struct nfs4_client*,struct nfsd4_setclientid*,struct svc_rqst*) ;
 int FUNC_10 (struct nfs4_client*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char*,struct xdr_netobj*) ;
 int FUNC_14 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_15 (struct sockaddr*,char*,int) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (int *,int *) ;

__be32
FUNC_18(struct svc_rqst *VAR_6, struct nfsd4_compound_state *VAR_7,
    struct nfsd4_setclientid *VAR_8)
{
 struct xdr_netobj VAR_9 = {
  .len = VAR_8->se_namelen,
  .data = VAR_8->se_name,
 };
 nfs4_verifier VAR_10 = VAR_8->se_verf;
 unsigned int VAR_11;
 struct nfs4_client *VAR_12, *VAR_13, *VAR_14;
 __be32 VAR_15;
 char VAR_16[VAR_0];

 if (!FUNC_1(VAR_9))
  return VAR_4;

 VAR_15 = FUNC_13(VAR_16, &VAR_9);
 if (VAR_15)
  return VAR_15;






 VAR_11 = FUNC_2(VAR_16);

 FUNC_12();
 VAR_12 = FUNC_7(VAR_16, VAR_11, 0);
 if (VAR_12) {

  VAR_15 = VAR_3;
  if (!FUNC_16(&VAR_12->cl_cred, &VAR_6->rq_cred)) {
   char VAR_17[VAR_1];
   FUNC_15((struct sockaddr *) &VAR_12->cl_addr, VAR_17,
     sizeof(VAR_17));
   FUNC_5("NFSD: setclientid: string in use by client "
    "at %s\n", VAR_17);
   goto out;
  }
 }





 VAR_13 = FUNC_8(VAR_16, VAR_11, 0);
 VAR_15 = VAR_5;
 if (!VAR_12) {




  if (VAR_13)
   FUNC_6(VAR_13);
  VAR_14 = FUNC_4(VAR_9, VAR_16, VAR_6, &VAR_10);
  if (VAR_14 == ((void*)0))
   goto out;
  FUNC_10(VAR_14);
 } else if (FUNC_17(&VAR_12->cl_verifier, &VAR_10)) {




  if (VAR_13) {





   FUNC_6(VAR_13);
  }
  VAR_14 = FUNC_4(VAR_9, VAR_16, VAR_6, &VAR_10);
  if (VAR_14 == ((void*)0))
   goto out;
  FUNC_3(VAR_14, VAR_12);
 } else if (!VAR_13) {





  VAR_14 = FUNC_4(VAR_9, VAR_16, VAR_6, &VAR_10);
  if (VAR_14 == ((void*)0))
   goto out;
  FUNC_10(VAR_14);
 } else {





  FUNC_6(VAR_13);
  VAR_14 = FUNC_4(VAR_9, VAR_16, VAR_6, &VAR_10);
  if (VAR_14 == ((void*)0))
   goto out;
  FUNC_10(VAR_14);
 }




 VAR_14->cl_minorversion = 0;
 FUNC_9(VAR_14, VAR_8, VAR_6);
 FUNC_0(VAR_14, VAR_11);
 VAR_8->se_clientid.cl_boot = VAR_14->cl_clientid.cl_boot;
 VAR_8->se_clientid.cl_id = VAR_14->cl_clientid.cl_id;
 FUNC_11(VAR_8->se_confirm.data, VAR_14->cl_confirm.data, sizeof(VAR_8->se_confirm.data));
 VAR_15 = VAR_2;
out:
 FUNC_14();
 return VAR_15;
}
