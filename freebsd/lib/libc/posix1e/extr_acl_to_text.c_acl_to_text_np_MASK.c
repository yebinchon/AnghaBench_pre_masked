
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int * acl_t ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int *,int) ;
 char* FUNC_2 (int *,int *,int) ;
 int VAR_1 ;

char *
FUNC_3(acl_t VAR_2, ssize_t *VAR_3, int VAR_4)
{

 if (VAR_2 == ((void*)0)) {
  VAR_1 = VAR_0;
  return(((void*)0));
 }

 switch (FUNC_0(VAR_2)) {
 case 128:
  return (FUNC_2(VAR_2, VAR_3, VAR_4));
 case 129:
  return (FUNC_1(VAR_2, VAR_3, VAR_4));
 default:
  VAR_1 = VAR_0;
  return (((void*)0));
 }
}
