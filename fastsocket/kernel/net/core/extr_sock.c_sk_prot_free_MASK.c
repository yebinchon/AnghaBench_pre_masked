
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct proto {struct kmem_cache* slab; struct module* owner; } ;
struct module {int dummy; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct kmem_cache*,struct sock*) ;
 int FUNC_2 (struct module*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct proto *VAR_0, struct sock *VAR_1)
{
 struct kmem_cache *VAR_2;
 struct module *VAR_3;

 VAR_3 = VAR_0->owner;
 VAR_2 = VAR_0->slab;

 FUNC_3(VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, VAR_1);
 else
  FUNC_0(VAR_1);
 FUNC_2(VAR_3);
}
