
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd_symlinkargs {int attrs; int tlen; int tname; int flen; int fname; int ffh; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *) ;

int
FUNC_5(struct svc_rqst *VAR_0, __be32 *VAR_1,
     struct nfsd_symlinkargs *VAR_2)
{
 if ( !(VAR_1 = FUNC_0(VAR_1, &VAR_2->ffh))
     || !(VAR_1 = FUNC_1(VAR_1, &VAR_2->fname, &VAR_2->flen))
     || !(VAR_1 = FUNC_2(VAR_1, &VAR_2->tname, &VAR_2->tlen)))
  return 0;
 VAR_1 = FUNC_3(VAR_1, &VAR_2->attrs);

 return FUNC_4(VAR_0, VAR_1);
}
