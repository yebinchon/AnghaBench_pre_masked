
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kd_length; scalar_t__ kd_data; } ;
struct krb5_keyblock {TYPE_1__ kk_key; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct krb5_keyblock *VAR_0)
{
 if (VAR_0->kk_key.kd_data)
  FUNC_0(VAR_0->kk_key.kd_data, VAR_0->kk_key.kd_length);
 FUNC_1(&VAR_0->kk_key);
}
