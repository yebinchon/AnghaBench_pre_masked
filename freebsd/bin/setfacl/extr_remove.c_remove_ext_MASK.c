
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * acl_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int,char*,char const*) ;
 int VAR_0 ;

void
FUNC_3(acl_t *VAR_1, const char *VAR_2)
{
 acl_t VAR_3;

 VAR_3 = FUNC_1(*VAR_1, !VAR_0);
 if (VAR_3 == ((void*)0))
  FUNC_2(1, "%s: acl_strip_np() failed", VAR_2);

 FUNC_0(*VAR_1);
 *VAR_1 = VAR_3;
}
