
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct kstatfs {int f_bavail; int f_bfree; int f_blocks; int f_bsize; } ;
struct nfsd_statfsres {struct kstatfs stats; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rqst*,int *) ;

int
FUNC_2(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd_statfsres *VAR_3)
{
 struct kstatfs *VAR_4 = &VAR_3->stats;

 *VAR_2++ = FUNC_0(VAR_0);
 *VAR_2++ = FUNC_0(VAR_4->f_bsize);
 *VAR_2++ = FUNC_0(VAR_4->f_blocks);
 *VAR_2++ = FUNC_0(VAR_4->f_bfree);
 *VAR_2++ = FUNC_0(VAR_4->f_bavail);
 return FUNC_1(VAR_1, VAR_2);
}
