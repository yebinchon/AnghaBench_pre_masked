
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_name {int dummy; } ;
struct x509_certificate {size_t public_key_len; int subject; int const* public_key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*,int) ;
 scalar_t__ FUNC_1 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_2 (int *,struct x509_name*) ;

__attribute__((used)) static int FUNC_3(struct x509_certificate *VAR_1,
       struct x509_name *VAR_2, const u8 *VAR_3)
{
 if (VAR_3) {
  u8 VAR_4[VAR_0];
  const u8 *VAR_5[1] = { VAR_1->public_key };
  size_t VAR_6[1] = { VAR_1->public_key_len };

  if (FUNC_1(1, VAR_5, VAR_6, VAR_4) < 0)
   return 0;
  return FUNC_0(VAR_4, VAR_3, VAR_0) == 0;
 }

 return FUNC_2(&VAR_1->subject, VAR_2) == 0;
}
