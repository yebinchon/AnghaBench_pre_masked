
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd_fhandle {int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct svc_rqst *VAR_0, __be32 *VAR_1,
     struct nfsd_fhandle *VAR_2)
{
 FUNC_0(&VAR_2->fh);
 return 1;
}
