
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(u_int VAR_6, int *VAR_7, EC_KEY **VAR_8)
{
 EC_KEY *VAR_9;
 int VAR_10 = VAR_2;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
  return VAR_3;
 if ((*VAR_7 = FUNC_4(VAR_6)) == -1)
  return VAR_4;
 *VAR_8 = ((void*)0);
 if ((VAR_9 = FUNC_2(*VAR_7)) == ((void*)0)) {
  VAR_10 = VAR_1;
  goto out;
 }
 if (FUNC_1(VAR_9) != 1) {
  VAR_10 = VAR_5;
  goto out;
 }
 FUNC_3(VAR_9, VAR_0);
 *VAR_8 = VAR_9;
 VAR_9 = ((void*)0);
 VAR_10 = 0;
 out:
 FUNC_0(VAR_9);
 return VAR_10;
}
