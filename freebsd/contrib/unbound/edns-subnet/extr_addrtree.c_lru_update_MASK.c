
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrtree {struct addrnode* root; } ;
struct addrnode {int dummy; } ;


 int FUNC_0 (struct addrtree*,struct addrnode*) ;
 int FUNC_1 (struct addrtree*,struct addrnode*) ;

__attribute__((used)) static void
FUNC_2(struct addrtree *VAR_0, struct addrnode *VAR_1)
{
 if (VAR_0->root == VAR_1) return;
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
}
