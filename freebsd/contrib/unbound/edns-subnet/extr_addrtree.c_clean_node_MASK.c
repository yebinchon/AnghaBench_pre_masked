
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrtree {int env; int (* delfunc ) (int ,int *) ;scalar_t__ (* sizefunc ) (int *) ;int size_bytes; } ;
struct addrnode {int * elem; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct addrtree *VAR_0, struct addrnode *VAR_1)
{
 if (!VAR_1->elem) return;
 VAR_0->size_bytes -= VAR_0->sizefunc(VAR_1->elem);
 VAR_0->delfunc(VAR_0->env, VAR_1->elem);
 VAR_1->elem = ((void*)0);
}
