
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int * pub_key; int * g; int * q; int * p; } ;
typedef TYPE_1__ DSA ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char const*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int *) ;
 size_t VAR_0 ;

DSA *
FUNC_6(const unsigned char* VAR_1, size_t VAR_2)
{
 uint8_t VAR_3;
 uint16_t VAR_4;
 uint16_t VAR_5;
 DSA *VAR_6;
 BIGNUM *VAR_7; BIGNUM *VAR_8;
 BIGNUM *VAR_9; BIGNUM *VAR_10;

 if(VAR_2 == 0)
  return ((void*)0);
 VAR_3 = (uint8_t)VAR_1[0];
 VAR_4 = (64 + VAR_3 * 8);
 VAR_5 = 1;

 if (VAR_3 > 8) {
  return ((void*)0);
 }
 if(VAR_2 < (size_t)1 + VAR_0 + 3*VAR_4)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_1+VAR_5, VAR_0, ((void*)0));
 VAR_5 += VAR_0;

 VAR_8 = FUNC_0(VAR_1+VAR_5, (int)VAR_4, ((void*)0));
 VAR_5 += VAR_4;

 VAR_9 = FUNC_0(VAR_1+VAR_5, (int)VAR_4, ((void*)0));
 VAR_5 += VAR_4;

 VAR_10 = FUNC_0(VAR_1+VAR_5, (int)VAR_4, ((void*)0));
 VAR_5 += VAR_4;


 if(!VAR_7 || !VAR_8 || !VAR_9 || !VAR_10 || !(VAR_6 = FUNC_3())) {
  FUNC_1(VAR_7);
  FUNC_1(VAR_8);
  FUNC_1(VAR_9);
  FUNC_1(VAR_10);
  return ((void*)0);
 }


 VAR_6->p = VAR_8;
 VAR_6->q = VAR_7;
 VAR_6->g = VAR_9;
 VAR_6->pub_key = VAR_10;
 return VAR_6;
}
