
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {scalar_t__ data; int len; } ;
struct krb5_ctx {TYPE_1__* gk5e; int mech_used; } ;
typedef int __be16 ;
struct TYPE_2__ {int cksumlength; int signalg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,unsigned char**) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static char *
FUNC_3(struct krb5_ctx *VAR_3, struct xdr_netobj *VAR_4)
{
 __be16 *VAR_5, *VAR_6;
 int VAR_7 = VAR_0 + VAR_3->gk5e->cksumlength;

 VAR_4->len = FUNC_2(&VAR_3->mech_used, VAR_7);

 VAR_5 = (__be16 *)VAR_4->data;
 FUNC_1(&VAR_3->mech_used, VAR_7, (unsigned char **)&VAR_5);


 VAR_6 = VAR_5;
 *VAR_5++ = VAR_1;
 *VAR_5++ = FUNC_0(VAR_3->gk5e->signalg);
 *VAR_5++ = VAR_2;
 *VAR_5++ = 0xffff;

 return (char *)VAR_6;
}
