
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receive_objnode {int dummy; } ;
struct objlist {int list; } ;


 int FUNC_0 (struct receive_objnode*,int) ;
 int FUNC_1 (int *) ;
 struct receive_objnode* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct objlist *VAR_0)
{
 for (struct receive_objnode *VAR_1 = FUNC_2(&VAR_0->list);
     VAR_1 != ((void*)0); VAR_1 = FUNC_2(&VAR_0->list)) {
  FUNC_0(VAR_1, sizeof (*VAR_1));
 }
 FUNC_1(&VAR_0->list);
}
