
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct krb5_key_state {TYPE_1__* ks_class; } ;
struct TYPE_2__ {size_t ec_checksumlen; } ;



__attribute__((used)) static size_t
FUNC_0(struct krb5_key_state *VAR_0)
{

 return (16 + VAR_0->ks_class->ec_checksumlen);
}
