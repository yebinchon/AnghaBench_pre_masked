
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int * priv_key; int * pub_key; int * g; int * q; int * p; } ;
typedef TYPE_1__ DSA ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,...) ;
 unsigned char* FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*,int const**,int const**) ;
 int FUNC_3 (TYPE_1__*,int const**,int const**,int const**) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_6(unsigned char *VAR_1, DSA *VAR_2, uint16_t *VAR_3)
{
 uint8_t VAR_4;
 const BIGNUM *VAR_5, *VAR_6, *VAR_7;
 const BIGNUM *VAR_8, *VAR_9;

 if (!VAR_2) {
  return 0;
 }





 VAR_5 = VAR_2->p; VAR_6 = VAR_2->q; VAR_7 = VAR_2->g;




 VAR_8 = VAR_2->pub_key; VAR_9 = VAR_2->priv_key;

 (void)VAR_9;
 *VAR_3 = (uint16_t)FUNC_1(VAR_5);
 VAR_4 = (*VAR_3 - 64) / 8;

 if (VAR_4 > 8) {




  return 0;
 }


 FUNC_5(VAR_1, 0, 21 + *VAR_3 * 3);
 VAR_1[0] = (unsigned char)VAR_4;
 FUNC_0(VAR_6, VAR_1 + 1 );
 FUNC_0(VAR_5, VAR_1 + 21 );
 FUNC_0(VAR_7, VAR_1 + 21 + *VAR_3 * 2 - FUNC_1(VAR_7));
 FUNC_0(VAR_8,VAR_1 + 21 + *VAR_3 * 3 - FUNC_1(VAR_8));
 *VAR_3 = 21 + *VAR_3 * 3;
 return 1;
}
