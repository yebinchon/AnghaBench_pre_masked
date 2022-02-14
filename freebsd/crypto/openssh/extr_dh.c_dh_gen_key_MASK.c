
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int const**,int *) ;
 int FUNC_3 (int *,int const**,int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int const*) ;

int
FUNC_7(DH *VAR_4, int VAR_5)
{
 int VAR_6;
 const BIGNUM *VAR_7, *VAR_8;

 FUNC_3(VAR_4, &VAR_7, ((void*)0), ((void*)0));

 if (VAR_5 < 0 || VAR_7 == ((void*)0) ||
     (VAR_6 = FUNC_0(VAR_7)) <= 0 ||
     VAR_5 > VAR_0 / 2 || 2 * VAR_5 > VAR_6)
  return VAR_1;
 if (VAR_5 < 256)
  VAR_5 = 256;




 if (!FUNC_4(VAR_4, FUNC_5(VAR_5 * 2, VAR_6 - 1)))
  return VAR_3;

 if (FUNC_1(VAR_4) == 0)
  return VAR_3;
 FUNC_2(VAR_4, &VAR_8, ((void*)0));
 if (!FUNC_6(VAR_4, VAR_8))
  return VAR_2;
 return 0;
}
