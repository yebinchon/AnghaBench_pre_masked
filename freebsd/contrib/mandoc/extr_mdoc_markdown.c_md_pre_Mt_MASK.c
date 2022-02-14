
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {struct roff_node* next; int string; struct roff_node* child; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4(struct roff_node *VAR_3)
{
 const struct roff_node *VAR_4;

 FUNC_0("[");
 VAR_2 &= ~VAR_0;
 for (VAR_4 = VAR_3->child; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  FUNC_2(VAR_4->string);
 VAR_2 &= ~VAR_0;
 FUNC_0("](mailto:");
 for (VAR_4 = VAR_3->child; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  FUNC_1(VAR_4->string);
  if (VAR_4->next != ((void*)0)) {
   FUNC_3(' ');
   VAR_1++;
  }
 }
 VAR_2 &= ~VAR_0;
 FUNC_0(")");
 return 0;
}
