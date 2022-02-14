
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_6__ {int * e; int * n; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;


 int FUNC_0 (unsigned char const*,int,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_6 (size_t*,unsigned char const*,int) ;
 size_t FUNC_7 (size_t) ;

RSA *
FUNC_8(const unsigned char* VAR_0, size_t VAR_1)
{
 uint16_t VAR_2;
 uint16_t VAR_3;
 uint16_t VAR_4;
 RSA *VAR_5;
 BIGNUM *VAR_6;
 BIGNUM *VAR_7;

 if (VAR_1 == 0)
  return ((void*)0);
 if (VAR_0[0] == 0) {
  if(VAR_1 < 3)
   return ((void*)0);



  FUNC_6(&VAR_4, VAR_0+1, 2);
  VAR_3 = FUNC_7(VAR_4);
  VAR_2 = 3;
 } else {
  VAR_3 = VAR_0[0];
  VAR_2 = 1;
 }


 if(VAR_1 < (size_t)VAR_2 + VAR_3 + 1)
  return ((void*)0);


 VAR_7 = FUNC_2();
 if(!VAR_7) return ((void*)0);
 (void) FUNC_0(VAR_0+VAR_2, (int)VAR_3, VAR_7);
 VAR_2 += VAR_3;


 VAR_6 = FUNC_2();
 if(!VAR_6) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 (void) FUNC_0(VAR_0+VAR_2, (int)(VAR_1 - VAR_2), VAR_6);

 VAR_5 = FUNC_4();
 if(!VAR_5) {
  FUNC_1(VAR_7);
  FUNC_1(VAR_6);
  return ((void*)0);
 }


 VAR_5->n = VAR_6;
 VAR_5->e = VAR_7;
 return VAR_5;
}
