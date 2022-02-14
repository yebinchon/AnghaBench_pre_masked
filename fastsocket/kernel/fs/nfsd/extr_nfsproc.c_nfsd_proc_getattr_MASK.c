
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd_fhandle {int fh; } ;
struct nfsd_attrstat {int fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct svc_rqst*,int *,int ,int) ;
 int FUNC_4 (int ,struct nfsd_attrstat*) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_2, struct nfsd_fhandle *VAR_3,
       struct nfsd_attrstat *VAR_4)
{
 __be32 VAR_5;
 FUNC_1("nfsd: GETATTR  %s\n", FUNC_0(&VAR_3->fh));

 FUNC_2(&VAR_4->fh, &VAR_3->fh);
 VAR_5 = FUNC_3(VAR_2, &VAR_4->fh, 0,
   VAR_1 | VAR_0);
 return FUNC_4(VAR_5, VAR_4);
}
