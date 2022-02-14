
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*,int ,char*,int *) ;
 int FUNC_5 (int ,char*,int ,int *) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7 (void)
{
 GtkWidget *VAR_3;

 VAR_3 = FUNC_4("Could not grab keyboard or mouse.\n"
  "A malicious client may be eavesdropping on your session.",
        VAR_0, "EXIT", ((void*)0));
 FUNC_6(FUNC_2(VAR_3), VAR_2);
 FUNC_5(FUNC_1(VAR_3), "type", VAR_1, ((void*)0));

 FUNC_3(FUNC_0(VAR_3));
}
