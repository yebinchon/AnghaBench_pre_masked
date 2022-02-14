
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int trie; } ;
struct tnode {int dummy; } ;
struct leaf {int dummy; } ;


 scalar_t__ FUNC_0 (struct tnode*) ;
 struct leaf* FUNC_1 (struct tnode*,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct leaf *FUNC_3(struct trie *VAR_0)
{
 struct tnode *VAR_1 = (struct tnode *) FUNC_2(VAR_0->trie);

 if (!VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_1))
  return (struct leaf *) VAR_1;

 return FUNC_1(VAR_1, ((void*)0));
}
