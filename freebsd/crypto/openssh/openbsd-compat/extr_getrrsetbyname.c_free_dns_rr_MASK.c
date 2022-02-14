
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns_rr {struct dns_rr* next; struct dns_rr* rdata; struct dns_rr* name; } ;


 int FUNC_0 (struct dns_rr*) ;

__attribute__((used)) static void
FUNC_1(struct dns_rr *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->name)
  FUNC_0(VAR_0->name);
 if (VAR_0->rdata)
  FUNC_0(VAR_0->rdata);
 FUNC_1(VAR_0->next);
 FUNC_0(VAR_0);
}
