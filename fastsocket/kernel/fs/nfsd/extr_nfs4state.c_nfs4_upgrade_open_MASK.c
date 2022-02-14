
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd4_open {int op_share_access; int op_share_deny; } ;
struct nfs4_stateid {int st_deny_bmap; int st_access_bmap; } ;
struct nfs4_file {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfs4_file*,int) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct nfs4_file*,struct svc_fh*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_2, struct nfs4_file *VAR_3, struct svc_fh *VAR_4, struct nfs4_stateid *VAR_5, struct nfsd4_open *VAR_6)
{
 u32 VAR_7 = VAR_6->op_share_access & ~VAR_0;
 bool VAR_8;
 __be32 VAR_9;

 VAR_8 = !FUNC_5(VAR_7, &VAR_5->st_access_bmap);
 if (VAR_8) {
  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7);
  if (VAR_9)
   return VAR_9;
 }
 VAR_9 = FUNC_4(VAR_2, VAR_4, VAR_6);
 if (VAR_9) {
  if (VAR_8) {
   int VAR_10 = FUNC_1(VAR_7);
   FUNC_2(VAR_3, VAR_10);
  }
  return VAR_9;
 }

 FUNC_0(VAR_7, &VAR_5->st_access_bmap);
 FUNC_0(VAR_6->op_share_deny, &VAR_5->st_deny_bmap);

 return VAR_1;
}
