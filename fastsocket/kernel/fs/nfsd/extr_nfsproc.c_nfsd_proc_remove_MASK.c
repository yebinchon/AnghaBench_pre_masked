
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd_diropargs {int fh; int len; int name; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_rqst*,int *,int ,int ,int ) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_1, struct nfsd_diropargs *VAR_2,
      void *VAR_3)
{
 __be32 VAR_4;

 FUNC_1("nfsd: REMOVE   %s %.*s\n", FUNC_0(&VAR_2->fh),
  VAR_2->len, VAR_2->name);


 VAR_4 = FUNC_3(VAR_1, &VAR_2->fh, -VAR_0, VAR_2->name, VAR_2->len);
 FUNC_2(&VAR_2->fh);
 return VAR_4;
}
