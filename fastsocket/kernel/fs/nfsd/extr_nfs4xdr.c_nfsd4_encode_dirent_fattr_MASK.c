
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_export {int ex_flags; } ;
struct nfsd4_readdir {int rd_rqstp; int rd_bmval; TYPE_1__* rd_fhp; } ;
struct dentry {int d_inode; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int fh_dentry; struct svc_export* fh_export; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct svc_export*,int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct svc_export*) ;
 int FUNC_6 (struct svc_export*) ;
 struct dentry* FUNC_7 (char const*,int ,int) ;
 scalar_t__ FUNC_8 (int *,struct svc_export*,struct dentry*,scalar_t__*,int*,int ,int ,int) ;
 int FUNC_9 (int ,struct dentry**,struct svc_export**) ;
 scalar_t__ FUNC_10 (struct dentry*,struct svc_export*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static __be32
FUNC_12(struct nfsd4_readdir *VAR_2,
  const char *VAR_3, int VAR_4, __be32 *VAR_5, int *VAR_6)
{
 struct svc_export *VAR_7 = VAR_2->rd_fhp->fh_export;
 struct dentry *VAR_8;
 __be32 VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_7(VAR_3, VAR_2->rd_fhp->fh_dentry, VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_11(FUNC_1(VAR_8));
 if (!VAR_8->d_inode) {





  FUNC_4(VAR_8);
  return VAR_1;
 }

 FUNC_5(VAR_7);







 if (FUNC_10(VAR_8, VAR_7)) {
  int VAR_11;

  if (!(VAR_7->ex_flags & VAR_0)
    && !FUNC_2(VAR_2->rd_bmval)) {
   VAR_10 = 1;
   goto out_encode;
  }





  VAR_11 = FUNC_9(VAR_2->rd_rqstp, &VAR_8, &VAR_7);
  if (VAR_11) {
   VAR_9 = FUNC_11(VAR_11);
   goto out_put;
  }
  VAR_9 = FUNC_3(VAR_7, VAR_2->rd_rqstp);
  if (VAR_9)
   goto out_put;

 }
out_encode:
 VAR_9 = FUNC_8(((void*)0), VAR_7, VAR_8, VAR_5, VAR_6, VAR_2->rd_bmval,
     VAR_2->rd_rqstp, VAR_10);
out_put:
 FUNC_4(VAR_8);
 FUNC_6(VAR_7);
 return VAR_9;
}
