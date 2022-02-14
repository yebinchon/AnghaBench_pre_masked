
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd_symlinkargs {struct svc_fh ffh; int attrs; int tlen; int tname; int flen; int fname; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_fh*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct svc_fh*,int ) ;
 int FUNC_3 (struct svc_fh*) ;
 int FUNC_4 (struct svc_rqst*,struct svc_fh*,int ,int ,int ,int ,struct svc_fh*,int *) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_1, struct nfsd_symlinkargs *VAR_2,
              void *VAR_3)
{
 struct svc_fh VAR_4;
 __be32 VAR_5;

 FUNC_1("nfsd: SYMLINK  %s %.*s -> %.*s\n",
  FUNC_0(&VAR_2->ffh), VAR_2->flen, VAR_2->fname,
  VAR_2->tlen, VAR_2->tname);

 FUNC_2(&VAR_4, VAR_0);



 VAR_5 = FUNC_4(VAR_1, &VAR_2->ffh, VAR_2->fname, VAR_2->flen,
       VAR_2->tname, VAR_2->tlen,
        &VAR_4, &VAR_2->attrs);


 FUNC_3(&VAR_2->ffh);
 FUNC_3(&VAR_4);
 return VAR_5;
}
