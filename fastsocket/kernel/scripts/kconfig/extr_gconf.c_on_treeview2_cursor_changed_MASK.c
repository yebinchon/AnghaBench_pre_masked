
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
typedef int gpointer ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,struct menu**,int) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct menu*) ;

void
FUNC_4(GtkTreeView * VAR_2, gpointer VAR_3)
{
 GtkTreeSelection *VAR_4;
 GtkTreeIter VAR_5;
 struct menu *VAR_6;

 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_1(VAR_4, &VAR_1, &VAR_5)) {
  FUNC_0(VAR_1, &VAR_5, VAR_0, &VAR_6, -1);
  FUNC_3(VAR_6);
 }
}
