
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_vec; } ;
struct nfsd_writeargs {unsigned long len; int vlen; int offset; int fh; } ;
struct nfsd_attrstat {int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,unsigned long,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,struct nfsd_attrstat*) ;
 int FUNC_4 (struct svc_rqst*,int ,int *,int ,int ,int ,unsigned long*,int*) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_0, struct nfsd_writeargs *VAR_1,
     struct nfsd_attrstat *VAR_2)
{
 __be32 VAR_3;
 int VAR_4 = 1;
 unsigned long VAR_5 = VAR_1->len;

 FUNC_1("nfsd: WRITE    %s %d bytes at %d\n",
  FUNC_0(&VAR_1->fh),
  VAR_1->len, VAR_1->offset);

 VAR_3 = FUNC_4(VAR_0, FUNC_2(&VAR_2->fh, &VAR_1->fh), ((void*)0),
       VAR_1->offset,
       VAR_0->rq_vec, VAR_1->vlen,
              &VAR_5,
       &VAR_4);
 return FUNC_3(VAR_3, VAR_2);
}
