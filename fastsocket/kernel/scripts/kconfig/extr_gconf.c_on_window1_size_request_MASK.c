
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpointer ;
typedef int gint ;
struct TYPE_3__ {int * window; } ;
typedef TYPE_1__ GtkWidget ;
typedef int GtkRequisition ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_5(GtkWidget * VAR_2,
   GtkRequisition * VAR_3, gpointer VAR_4)
{
 static gint VAR_5;
 gint VAR_6, VAR_7;

 if (VAR_2->window == ((void*)0))
  FUNC_4(FUNC_1(VAR_0), &VAR_6, &VAR_7);
 else
  FUNC_2(VAR_2->window, &VAR_6, &VAR_7);

 if (VAR_7 == VAR_5)
  return;
 VAR_5 = VAR_7;

 FUNC_3(FUNC_0(VAR_1), 2 * VAR_7 / 3);
}
