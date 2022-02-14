
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {scalar_t__ pos; scalar_t__ bits; } ;
struct node {int dummy; } ;


 scalar_t__ FUNC_0 (struct node const*) ;

__attribute__((used)) static inline int FUNC_1(const struct tnode *VAR_0, const struct node *VAR_1)
{
 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return 0;

 return ((struct tnode *) VAR_1)->pos == VAR_0->pos + VAR_0->bits;
}
