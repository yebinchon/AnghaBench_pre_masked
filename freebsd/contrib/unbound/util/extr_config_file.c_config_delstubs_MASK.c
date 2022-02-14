
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_stub {struct config_stub* next; } ;


 int FUNC_0 (struct config_stub*) ;

void
FUNC_1(struct config_stub* VAR_0)
{
 struct config_stub* VAR_1;
 while(VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
