
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct menu {int dummy; } ;
typedef int gpointer ;
typedef int gint ;
typedef int gboolean ;
struct TYPE_3__ {scalar_t__ type; int y; int x; } ;
typedef int GtkWidget ;
typedef int GtkTreeViewColumn ;
typedef int GtkTreeView ;
typedef int GtkTreePath ;
typedef int GtkTreeIter ;
typedef TYPE_1__ GdkEventButton ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *) ;
 struct menu* VAR_3 ;
 struct menu* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,struct menu**,int) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *,int ,int ,int **,int **,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (struct menu*) ;
 int VAR_6 ;

gboolean
FUNC_9(GtkWidget * VAR_7,
    GdkEventButton * VAR_8, gpointer VAR_9)
{
 GtkTreeView *VAR_10 = FUNC_0(VAR_7);
 GtkTreePath *VAR_11;
 GtkTreeViewColumn *VAR_12;
 GtkTreeIter VAR_13;
 struct menu *VAR_14;

 gint VAR_15 = (gint) VAR_8->x;
 gint VAR_16 = (gint) VAR_8->y;
 gint VAR_17, VAR_18;

 FUNC_4(VAR_10, VAR_15, VAR_16, &VAR_11, &VAR_12, &VAR_17,
          &VAR_18);
 if (VAR_11 == ((void*)0))
  return VAR_1;

 FUNC_3(VAR_5, &VAR_13, VAR_11);
 FUNC_2(VAR_5, &VAR_13, VAR_0, &VAR_14, -1);

 if (VAR_8->type == VAR_2) {
  FUNC_8(VAR_14);
  VAR_4 = VAR_14;
  FUNC_1();
 } else {
  VAR_3 = VAR_14;
  FUNC_1();
 }

 FUNC_7(VAR_6);
 FUNC_5(VAR_10, VAR_11, ((void*)0), VAR_1);
 FUNC_6(VAR_6);

 return VAR_1;
}
