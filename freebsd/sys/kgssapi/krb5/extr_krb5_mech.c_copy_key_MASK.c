
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kd_length; } ;
struct krb5_keyblock {TYPE_1__ kk_key; } ;



__attribute__((used)) static void
FUNC_0(struct krb5_keyblock *VAR_0, struct krb5_keyblock **VAR_1)
{

 if (VAR_0->kk_key.kd_length)
  *VAR_1 = VAR_0;
 else
  *VAR_1 = ((void*)0);
}
