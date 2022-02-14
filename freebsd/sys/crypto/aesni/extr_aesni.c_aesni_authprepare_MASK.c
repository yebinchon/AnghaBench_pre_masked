
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesni_session {scalar_t__ auth_algo; int hmac_key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void const*,int) ;

__attribute__((used)) static int
FUNC_1(struct aesni_session *VAR_2, int VAR_3, const void *VAR_4)
{
 int VAR_5;

 if (VAR_3 % 8 != 0)
  return (VAR_1);
 VAR_5 = VAR_3 / 8;
 if (VAR_5 > sizeof(VAR_2->hmac_key))
  return (VAR_1);
 if (VAR_2->auth_algo == VAR_0 && VAR_5 > 0)
  return (VAR_1);
 FUNC_0(VAR_2->hmac_key, VAR_4, VAR_5);
 return (0);
}
