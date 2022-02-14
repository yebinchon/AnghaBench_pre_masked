
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int RSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int *,int *) ;
 int * FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(u_int VAR_8, RSA **VAR_9)
{
 RSA *VAR_10 = ((void*)0);
 BIGNUM *VAR_11 = ((void*)0);
 int VAR_12 = VAR_3;

 if (VAR_9 == ((void*)0))
  return VAR_4;
 if (VAR_8 < VAR_7 ||
     VAR_8 > VAR_1 * 8)
  return VAR_5;
 *VAR_9 = ((void*)0);
 if ((VAR_10 = FUNC_5()) == ((void*)0) || (VAR_11 = FUNC_1()) == ((void*)0)) {
  VAR_12 = VAR_2;
  goto out;
 }
 if (!FUNC_2(VAR_11, VAR_0) ||
     !FUNC_4(VAR_10, VAR_8, VAR_11, ((void*)0))) {
  VAR_12 = VAR_6;
  goto out;
 }
 *VAR_9 = VAR_10;
 VAR_10 = ((void*)0);
 VAR_12 = 0;
 out:
 FUNC_3(VAR_10);
 FUNC_0(VAR_11);
 return VAR_12;
}
