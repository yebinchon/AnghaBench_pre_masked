
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd4_open {int op_share_access; } ;
struct nfs4_stateid {int dummy; } ;
struct nfs4_file {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ,struct nfs4_stateid*) ;
 struct nfs4_stateid* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct nfs4_file*,struct svc_fh*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_3(struct svc_rqst *VAR_2, struct nfs4_stateid **VAR_3,
  struct nfs4_file *VAR_4, struct svc_fh *VAR_5,
  struct nfsd4_open *VAR_6)
{
 struct nfs4_stateid *VAR_7;
 __be32 VAR_8;

 VAR_7 = FUNC_1();
 if (VAR_7 == ((void*)0))
  return VAR_0;

 VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6->op_share_access);
 if (VAR_8) {
  FUNC_0(VAR_1, VAR_7);
  return VAR_8;
 }
 *VAR_3 = VAR_7;
 return 0;
}
