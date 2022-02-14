
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct roffreg* p; } ;
struct roffreg {struct roffreg* next; TYPE_1__ key; } ;


 int FUNC_0 (struct roffreg*) ;

__attribute__((used)) static void
FUNC_1(struct roffreg *VAR_0)
{
 struct roffreg *VAR_1;

 while (((void*)0) != VAR_0) {
  FUNC_0(VAR_0->key.p);
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
