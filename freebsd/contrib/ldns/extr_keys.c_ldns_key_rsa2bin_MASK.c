
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int * e; int * n; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,unsigned char*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*,int const**,int const**,int *) ;
 int FUNC_3 (unsigned char*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(unsigned char *VAR_0, RSA *VAR_1, uint16_t *VAR_2)
{
 int VAR_3,VAR_4;
 const BIGNUM *VAR_5=((void*)0), *VAR_6=((void*)0);

 if (!VAR_1) {
  return 0;
 }

 VAR_5 = VAR_1->n;
 VAR_6 = VAR_1->e;




 if (FUNC_1(VAR_6) <= 256) {



  VAR_0[0] = (unsigned char) FUNC_1(VAR_6);
  VAR_3 = FUNC_0(VAR_6, VAR_0 + 1);
  VAR_4 = FUNC_0(VAR_5, VAR_0 + VAR_3 + 1);
  *VAR_2 = (uint16_t) VAR_3 + VAR_4;
 } else if (FUNC_1(VAR_6) <= 65536) {
  VAR_0[0] = 0;

  FUNC_3(VAR_0 + 1, (uint16_t) FUNC_1(VAR_6));

  FUNC_0(VAR_6, VAR_0 + 3);
  FUNC_0(VAR_5, VAR_0 + 4 + FUNC_1(VAR_6));
  *VAR_2 = (uint16_t) FUNC_1(VAR_5) + 6;
 } else {
  return 0;
 }
 return 1;
}
