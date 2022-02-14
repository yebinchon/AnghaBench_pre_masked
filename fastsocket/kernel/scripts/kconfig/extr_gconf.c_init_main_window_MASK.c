
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_5__ {int window; } ;
typedef int GtkWidget ;
typedef int GtkTextBuffer ;
typedef int GtkStyle ;
typedef int GtkCheckMenuItem ;
typedef int GladeXML ;


 int VAR_0 ;

 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;


 char* FUNC_2 (char*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (char*) ;
 void* FUNC_7 (int *,char*) ;
 int * FUNC_8 (int const*,char*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 void* FUNC_11 (int *,char*,char*,...) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (void*,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ,char*) ;
 void* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_17 (int *,int ,int *,char*,int **) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (char*,char*,char*) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;

void FUNC_19(const gchar * VAR_24)
{
 GladeXML *VAR_25;
 GtkWidget *VAR_26;
 GtkTextBuffer *VAR_27;
 char VAR_28[256];
 GtkStyle *VAR_29;

 VAR_25 = FUNC_8(VAR_24, "window1", ((void*)0));
 if (!VAR_25)
  FUNC_4(FUNC_2("GUI loading failed !\n"));
 FUNC_9(VAR_25);

 VAR_5 = FUNC_7(VAR_25, "window1");
 VAR_4 = FUNC_7(VAR_25, "hpaned1");
 VAR_17 = FUNC_7(VAR_25, "vpaned1");
 VAR_14 = FUNC_7(VAR_25, "treeview1");
 VAR_15 = FUNC_7(VAR_25, "treeview2");
 VAR_13 = FUNC_7(VAR_25, "textview3");

 VAR_2 = FUNC_7(VAR_25, "button1");
 FUNC_14(VAR_2, VAR_0);

 VAR_26 = FUNC_7(VAR_25, "show_name1");
 FUNC_10((GtkCheckMenuItem *) VAR_26,
           VAR_8);

 VAR_26 = FUNC_7(VAR_25, "show_range1");
 FUNC_10((GtkCheckMenuItem *) VAR_26,
           VAR_9);

 VAR_26 = FUNC_7(VAR_25, "show_data1");
 FUNC_10((GtkCheckMenuItem *) VAR_26,
           VAR_10);

 VAR_6 = FUNC_7(VAR_25, "button3");
 VAR_7 = FUNC_7(VAR_25, "save1");
 FUNC_3(VAR_3);

 VAR_29 = FUNC_13(VAR_5);
 VAR_26 = FUNC_7(VAR_25, "toolbar1");
 FUNC_17(VAR_25, VAR_5->window, VAR_29,
       "button4", (gchar **) VAR_21);
 FUNC_17(VAR_25, VAR_5->window, VAR_29,
       "button5", (gchar **) VAR_22);
 FUNC_17(VAR_25, VAR_5->window, VAR_29,
       "button6", (gchar **) VAR_23);
 VAR_27 = FUNC_12(FUNC_0(VAR_13));
 VAR_11 = FUNC_11(VAR_27, "mytag1",
       "foreground", "red",
       "weight", VAR_1,
       ((void*)0));
 VAR_12 = FUNC_11(VAR_27, "mytag2",

       ((void*)0));

 FUNC_18(VAR_28, FUNC_2("Linux Kernel v%s Configuration"),
  FUNC_6("KERNELVERSION"));
 FUNC_16(FUNC_1(VAR_5), VAR_28);

 FUNC_15(VAR_5);
}
