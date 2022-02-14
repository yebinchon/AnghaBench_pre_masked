
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct svc_rqst {int dummy; } ;
struct TYPE_2__ {scalar_t__ ia_size; int ia_valid; } ;
struct nfsd_sattrargs {TYPE_1__ attrs; int fh; } ;
struct nfsd_attrstat {int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ,long) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,struct nfsd_attrstat*) ;
 int FUNC_4 (struct svc_rqst*,int *,TYPE_1__*,int ,int ) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_0, struct nfsd_sattrargs *VAR_1,
       struct nfsd_attrstat *VAR_2)
{
 __be32 VAR_3;
 FUNC_1("nfsd: SETATTR  %s, valid=%x, size=%ld\n",
  FUNC_0(&VAR_1->fh),
  VAR_1->attrs.ia_valid, (long) VAR_1->attrs.ia_size);

 FUNC_2(&VAR_2->fh, &VAR_1->fh);
 VAR_3 = FUNC_4(VAR_0, &VAR_2->fh, &VAR_1->attrs,0, (time_t)0);
 return FUNC_3(VAR_3, VAR_2);
}
