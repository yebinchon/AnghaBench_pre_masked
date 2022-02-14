
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct krb5_key_state {int ks_key; TYPE_1__* ks_class; } ;
struct TYPE_2__ {scalar_t__ ec_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void
FUNC_3(const struct krb5_key_state *VAR_1, uint32_t VAR_2,
    uint8_t *VAR_3)
{
 uint8_t VAR_4[4];

 VAR_4[0] = (VAR_2 >> 24);
 VAR_4[1] = (VAR_2 >> 16);
 VAR_4[2] = (VAR_2 >> 8);
 VAR_4[3] = (VAR_2 >> 0);
 if (VAR_1->ks_class->ec_type == VAR_0) {
  uint8_t VAR_5[14] = "fortybits";
  FUNC_1(VAR_4, VAR_5 + 10, 4);
  FUNC_0(VAR_1->ks_key, VAR_5, 14, VAR_3);
  FUNC_2(VAR_3 + 7, 0xab, 9);
 } else {
  FUNC_0(VAR_1->ks_key, VAR_4, 4, VAR_3);
 }
}
