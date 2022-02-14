
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {int fh_dentry; int fh_export; } ;
struct nfsd4_getattr {int ga_bmval; struct svc_fh* ga_fhp; } ;
struct nfsd4_compoundres {int end; int p; int rqstp; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_fh*,int ,int ,int,int*,int ,int ,int ) ;

__attribute__((used)) static __be32
FUNC_1(struct nfsd4_compoundres *VAR_1, __be32 VAR_2, struct nfsd4_getattr *VAR_3)
{
 struct svc_fh *VAR_4 = VAR_3->ga_fhp;
 int VAR_5;

 if (VAR_2)
  return VAR_2;

 VAR_5 = VAR_1->end - VAR_1->p - (VAR_0 >> 2);
 VAR_2 = FUNC_0(VAR_4, VAR_4->fh_export, VAR_4->fh_dentry,
        VAR_1->p, &VAR_5, VAR_3->ga_bmval,
        VAR_1->rqstp, 0);
 if (!VAR_2)
  VAR_1->p += VAR_5;
 return VAR_2;
}
