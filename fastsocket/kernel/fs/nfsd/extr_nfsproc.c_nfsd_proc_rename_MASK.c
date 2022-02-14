
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd_renameargs {int tfh; int ffh; int tlen; int tname; int flen; int fname; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_rqst*,int *,int ,int ,int *,int ,int ) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_0, struct nfsd_renameargs *VAR_1,
        void *VAR_2)
{
 __be32 VAR_3;

 FUNC_1("nfsd: RENAME   %s %.*s -> \n",
  FUNC_0(&VAR_1->ffh), VAR_1->flen, VAR_1->fname);
 FUNC_1("nfsd:        ->  %s %.*s\n",
  FUNC_0(&VAR_1->tfh), VAR_1->tlen, VAR_1->tname);

 VAR_3 = FUNC_3(VAR_0, &VAR_1->ffh, VAR_1->fname, VAR_1->flen,
        &VAR_1->tfh, VAR_1->tname, VAR_1->tlen);
 FUNC_2(&VAR_1->ffh);
 FUNC_2(&VAR_1->tfh);
 return VAR_3;
}
