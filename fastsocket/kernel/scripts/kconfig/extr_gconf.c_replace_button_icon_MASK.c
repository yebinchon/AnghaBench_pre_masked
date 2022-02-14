
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_3__ {int * bg; } ;
typedef int GtkWidget ;
typedef int GtkToolButton ;
typedef TYPE_1__ GtkStyle ;
typedef int GladeXML ;
typedef int GdkPixmap ;
typedef int GdkDrawable ;
typedef int GdkBitmap ;


 size_t VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,int **,int *,int **) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(GladeXML * VAR_1, GdkDrawable * VAR_2,
    GtkStyle * VAR_3, gchar * VAR_4, gchar ** VAR_5)
{
 GdkPixmap *VAR_6;
 GdkBitmap *VAR_7;
 GtkToolButton *VAR_8;
 GtkWidget *VAR_9;

 VAR_6 = FUNC_1(VAR_2, &VAR_7,
           &VAR_3->bg[VAR_0],
           VAR_5);

 VAR_8 = FUNC_0(FUNC_2(VAR_1, VAR_4));
 VAR_9 = FUNC_3(VAR_6, VAR_7);
 FUNC_5(VAR_9);
 FUNC_4(VAR_8, VAR_9);
}
