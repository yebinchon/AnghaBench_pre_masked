
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int vbox; } ;
struct TYPE_19__ {int window; } ;
typedef TYPE_1__ GtkWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_7__* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 char** FUNC_10 (char*,char*,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ,int *,int *,int ) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (char*) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*,int ) ;
 int FUNC_19 (TYPE_7__*,int ) ;
 TYPE_1__* FUNC_20 (char*,int ,int ,int *) ;
 int FUNC_21 (TYPE_7__*) ;
 int FUNC_22 (TYPE_7__*,int ) ;
 int FUNC_23 (int ,TYPE_1__*,int ,int ,int ) ;
 int FUNC_24 (int ,int ) ;
 char* FUNC_25 (int ) ;
 TYPE_1__* FUNC_26 () ;
 int FUNC_27 (int ,char*) ;
 int FUNC_28 (int ,int ) ;
 TYPE_1__* FUNC_29 (char*) ;
 int FUNC_30 (int ,char*,int ,int *) ;
 int FUNC_31 (TYPE_1__*) ;
 int FUNC_32 (TYPE_1__*) ;
 int FUNC_33 (int ,int ,int ,int ) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (char*,char,int ) ;
 int FUNC_36 (char*) ;
 int FUNC_37 () ;
 int FUNC_38 (char*) ;

int
FUNC_39(char *VAR_8)
{
 char *VAR_9;
 char **VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 GtkWidget *VAR_15, *VAR_16, *VAR_17;

 VAR_13 = (FUNC_16("GNOME_SSH_ASKPASS_GRAB_SERVER") != ((void*)0));
 VAR_14 = (FUNC_16("GNOME_SSH_ASKPASS_GRAB_POINTER") != ((void*)0));

 VAR_15 = FUNC_20("OpenSSH", VAR_4,
     VAR_3, ((void*)0));

 VAR_10 = FUNC_10(VAR_8, "\\n", 0);
 if (VAR_10)
  for(VAR_12 = 0; VAR_10[VAR_12]; VAR_12++) {
   VAR_17 = FUNC_29(VAR_10[VAR_12]);
   FUNC_23(FUNC_2(FUNC_1(VAR_15)->vbox),
       VAR_17, VAR_0, VAR_0, 0);
  }

 VAR_16 = FUNC_26();
 FUNC_23(FUNC_2(FUNC_1(VAR_15)->vbox), VAR_16, VAR_0,
     VAR_0, 0);
 FUNC_28(FUNC_5(VAR_16), VAR_0);
 FUNC_31(VAR_16);


 FUNC_30(FUNC_6(VAR_15), "type", VAR_5, ((void*)0));
 FUNC_22(FUNC_1(VAR_15), 0);
 FUNC_34 (FUNC_7(VAR_15), VAR_6);
 FUNC_33(FUNC_7(VAR_15), VAR_0, VAR_0, VAR_7);
 FUNC_18(FUNC_1(VAR_15), VAR_7);
 FUNC_24(FUNC_3(FUNC_1(VAR_15)->vbox),
     VAR_2);
 FUNC_32(VAR_15);


 if (VAR_13)
  FUNC_8(FUNC_0());
 if (VAR_14 && FUNC_14(VAR_15->window, VAR_7, 0,
     ((void*)0), ((void*)0), VAR_1))
  goto nograb;
 if (FUNC_12(VAR_15->window, VAR_0, VAR_1))
  goto nograbkb;


 FUNC_19(FUNC_1(VAR_15), FUNC_4(VAR_16));


 VAR_11 = FUNC_21(FUNC_1(VAR_15));


 if (VAR_13)
  FUNC_9(FUNC_0());
 if (VAR_14)
  FUNC_15(VAR_1);
 FUNC_13(VAR_1);
 FUNC_11();


 VAR_9 = FUNC_25(FUNC_5(VAR_16));
 if (VAR_11 == 0)
  FUNC_36(VAR_9);


 FUNC_35(VAR_9, '\0', FUNC_38(VAR_9));
 FUNC_27(FUNC_5(VAR_16), VAR_9);

 FUNC_17(FUNC_1(VAR_15));
 return (VAR_11 == 0 ? 0 : -1);




 nograbkb:
 FUNC_15(VAR_1);
 nograb:
 if (VAR_13)
  FUNC_9(FUNC_0());
 FUNC_17(FUNC_1(VAR_15));

 FUNC_37();
 return (-1);
}
