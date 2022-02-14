
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int rcu; } ;
struct leaf {int dummy; } ;


 scalar_t__ FUNC_0 (struct tnode*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct leaf*) ;

__attribute__((used)) static inline void FUNC_3(struct tnode *VAR_1)
{
 if (FUNC_0(VAR_1))
  FUNC_2((struct leaf *) VAR_1);
 else
  FUNC_1(&VAR_1->rcu, VAR_0);
}
