
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int dummy; } ;
struct leaf {int dummy; } ;


 struct leaf* FUNC_0 (struct trie*) ;
 struct leaf* FUNC_1 (struct leaf*) ;

__attribute__((used)) static struct leaf *FUNC_2(struct trie *VAR_0, int VAR_1)
{
 struct leaf *VAR_2 = FUNC_0(VAR_0);

 while (VAR_2 && VAR_1-- > 0)
  VAR_2 = FUNC_1(VAR_2);

 return VAR_2;
}
