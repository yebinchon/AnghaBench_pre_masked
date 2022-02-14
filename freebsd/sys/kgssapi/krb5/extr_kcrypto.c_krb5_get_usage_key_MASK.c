
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct krb5_key_state {int ks_refs; struct krb5_encryption_class* ks_class; } ;
struct krb5_encryption_class {int ec_flags; } ;


 int VAR_0 ;
 struct krb5_key_state* FUNC_0 (struct krb5_key_state*,int*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct krb5_key_state *
FUNC_2(struct krb5_key_state *VAR_1, int VAR_2, int VAR_3)
{
 const struct krb5_encryption_class *VAR_4 = VAR_1->ks_class;

 if (VAR_4->ec_flags & VAR_0) {
  uint8_t VAR_5[5];

  VAR_5[0] = VAR_2 >> 24;
  VAR_5[1] = VAR_2 >> 16;
  VAR_5[2] = VAR_2 >> 8;
  VAR_5[3] = VAR_2;
  VAR_5[4] = VAR_3;
  return (FUNC_0(VAR_1, VAR_5, 5));
 } else {
  FUNC_1(&VAR_1->ks_refs);
  return (VAR_1);
 }
}
