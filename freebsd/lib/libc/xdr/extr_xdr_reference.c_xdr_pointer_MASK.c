
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int u_int ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char**,int ,int ) ;

bool_t
FUNC_2(XDR *VAR_2, char **VAR_3, u_int VAR_4, xdrproc_t VAR_5)
{

 bool_t VAR_6;

 VAR_6 = (*VAR_3 != ((void*)0));
 if (! FUNC_0(VAR_2,&VAR_6)) {
  return (VAR_0);
 }
 if (! VAR_6) {
  *VAR_3 = ((void*)0);
  return (VAR_1);
 }
 return (FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5));
}
