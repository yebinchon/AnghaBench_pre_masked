
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns_query {struct dns_query* next; struct dns_query* name; } ;


 int FUNC_0 (struct dns_query*) ;

__attribute__((used)) static void
FUNC_1(struct dns_query *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->name)
  FUNC_0(VAR_0->name);
 FUNC_1(VAR_0->next);
 FUNC_0(VAR_0);
}
