
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * acl_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char const*) ;

int
FUNC_3(acl_t *VAR_1, const char *VAR_2)
{

 FUNC_0(*VAR_1);
 *VAR_1 = FUNC_1(VAR_0);
 if (*VAR_1 == ((void*)0))
  FUNC_2(1, "%s: acl_init() failed", VAR_2);

 return (0);
}
