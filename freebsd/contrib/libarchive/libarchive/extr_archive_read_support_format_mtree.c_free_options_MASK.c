
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_option {struct mtree_option* value; struct mtree_option* next; } ;


 int FUNC_0 (struct mtree_option*) ;

__attribute__((used)) static void
FUNC_1(struct mtree_option *VAR_0)
{
 struct mtree_option *VAR_1;

 for (; VAR_0 != ((void*)0); VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->value);
  FUNC_0(VAR_0);
 }
}
