
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(const BIGNUM *VAR_0, u8 *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if ((size_t) VAR_3 > VAR_2)
  return -1;
 VAR_4 = VAR_2 - VAR_3;
 FUNC_2(VAR_1, 0, VAR_4);
 FUNC_0(VAR_0, VAR_1 + VAR_4);
 return 0;
}
