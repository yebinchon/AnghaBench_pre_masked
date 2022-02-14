
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aslookup {scalar_t__ as_debug; scalar_t__ as_f; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (struct aslookup*) ;

void
FUNC_3(void *VAR_0)
{
 struct aslookup *VAR_1 = VAR_0;

 (void)FUNC_1(VAR_1->as_f, "!q\n");
 (void)FUNC_0(VAR_1->as_f);
 FUNC_2(VAR_1);
}
