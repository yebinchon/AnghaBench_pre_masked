
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int DSA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int *,int ,int *,int *,int *) ;
 int * FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(u_int VAR_5, DSA **VAR_6)
{
 DSA *VAR_7;
 int VAR_8 = VAR_1;

 if (VAR_6 == ((void*)0))
  return VAR_2;
 if (VAR_5 != 1024)
  return VAR_3;
 if ((VAR_7 = FUNC_3()) == ((void*)0)) {
  VAR_8 = VAR_0;
  goto out;
 }
 *VAR_6 = ((void*)0);
 if (!FUNC_2(VAR_7, VAR_5, ((void*)0), 0, ((void*)0),
     ((void*)0), ((void*)0)) || !FUNC_1(VAR_7)) {
  VAR_8 = VAR_4;
  goto out;
 }
 *VAR_6 = VAR_7;
 VAR_7 = ((void*)0);
 VAR_8 = 0;
 out:
 FUNC_0(VAR_7);
 return VAR_8;
}
