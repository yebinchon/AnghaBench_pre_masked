
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct krb5_key_state {int* ks_key; } ;


 int FUNC_0 (struct krb5_key_state*,int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void
FUNC_3(struct krb5_key_state *VAR_0, const void *VAR_1)
{
 uint8_t *VAR_2 = VAR_0->ks_key;
 const uint8_t *VAR_3 = VAR_1;
 VAR_2[0] = VAR_3[0];
 VAR_2[1] = VAR_3[1];
 VAR_2[2] = VAR_3[2];
 VAR_2[3] = VAR_3[3];
 VAR_2[4] = VAR_3[4];
 VAR_2[5] = VAR_3[5];
 VAR_2[6] = VAR_3[6];
 VAR_2[7] = (((VAR_3[0] & 1) << 1)
     | ((VAR_3[1] & 1) << 2)
     | ((VAR_3[2] & 1) << 3)
     | ((VAR_3[3] & 1) << 4)
     | ((VAR_3[4] & 1) << 5)
     | ((VAR_3[5] & 1) << 6)
     | ((VAR_3[6] & 1) << 7));
 FUNC_2(VAR_2);
 if (FUNC_1(VAR_2))
  VAR_2[7] ^= 0xf0;

 FUNC_0(VAR_0, VAR_0->ks_key);
}
