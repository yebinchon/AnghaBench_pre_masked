
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct roffkv* p; } ;
struct TYPE_3__ {struct roffkv* p; } ;
struct roffkv {struct roffkv* next; TYPE_2__ val; TYPE_1__ key; } ;


 int FUNC_0 (struct roffkv*) ;

__attribute__((used)) static void
FUNC_1(struct roffkv *VAR_0)
{
 struct roffkv *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2) {
  FUNC_0(VAR_1->key.p);
  FUNC_0(VAR_1->val.p);
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }
}
