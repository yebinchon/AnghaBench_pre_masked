
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {struct tnode* tnode_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tnode*) ;
 struct tnode* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct tnode *VAR_4;

 while ((VAR_4 = VAR_2)) {
  VAR_2 = VAR_4->tnode_free;
  VAR_4->tnode_free = ((void*)0);
  FUNC_1(VAR_4);
 }

 if (VAR_3 >= VAR_0 * VAR_1) {
  VAR_3 = 0;
  FUNC_0();
 }
}
