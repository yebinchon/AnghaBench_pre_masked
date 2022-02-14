
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int crypto_onetimeauth_poly1305_state ;
struct TYPE_2__ {int (* onetimeauth_final ) (int *,unsigned char*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,unsigned char*) ;

int
FUNC_1(crypto_onetimeauth_poly1305_state *VAR_1,
                                  unsigned char *VAR_2)
{
    return VAR_0->onetimeauth_final(VAR_1, VAR_2);
}
