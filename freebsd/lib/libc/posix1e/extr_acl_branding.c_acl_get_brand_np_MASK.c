
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * acl_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

int
FUNC_1(acl_t VAR_2, int *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }
 *VAR_3 = FUNC_0(VAR_2);

 return (0);
}
