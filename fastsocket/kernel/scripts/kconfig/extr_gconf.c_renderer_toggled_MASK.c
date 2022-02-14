
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
typedef int gpointer ;
typedef int gchar ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererToggle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,struct menu**,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *) ;
 int * FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (struct menu*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10(GtkCellRendererToggle * VAR_3,
        gchar * VAR_4, gpointer VAR_5)
{
 GtkTreePath *VAR_6, *VAR_7 = ((void*)0);
 GtkTreeIter VAR_8, VAR_9;
 GtkTreeSelection *VAR_10;
 struct menu *VAR_11;

 VAR_6 = FUNC_6(VAR_4);
 if (!FUNC_2(VAR_1, &VAR_8, VAR_6))
  return;

 VAR_10 = FUNC_8(FUNC_0(VAR_2));
 if (FUNC_7(VAR_10, ((void*)0), &VAR_9))
  VAR_7 = FUNC_3(VAR_1, &VAR_9);
 if (!VAR_7)
  goto out1;
 if (FUNC_4(VAR_6, VAR_7))
  goto out2;

 FUNC_1(VAR_1, &VAR_8, VAR_0, &VAR_11, -1);
 FUNC_9(VAR_11);

      out2:
 FUNC_5(VAR_7);
      out1:
 FUNC_5(VAR_6);
}
