
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (char*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static void
FUNC_5(void)
{
    FUNC_0();

    if (VAR_13 == 0)
    {
 VAR_13 = FUNC_1(VAR_14, "r");
 if (VAR_13 == 0)
     FUNC_3(VAR_14);
    }

    VAR_0 = FUNC_4("action_file");
    VAR_18 = FUNC_4("text_file");

    if (VAR_22)
    {
 VAR_20 = FUNC_1(VAR_21, "w");
 if (VAR_20 == 0)
     FUNC_3(VAR_21);
    }

    if (VAR_9)
    {
 VAR_10 = FUNC_1(VAR_11, "w");
 if (VAR_10 == 0)
     FUNC_3(VAR_11);
 FUNC_2(VAR_10, "digraph %s {\n", VAR_8);
 FUNC_2(VAR_10, "\tedge [fontsize=10];\n");
 FUNC_2(VAR_10, "\tnode [shape=box,fontsize=10];\n");
 FUNC_2(VAR_10, "\torientation=landscape;\n");
 FUNC_2(VAR_10, "\trankdir=LR;\n");
 FUNC_2(VAR_10, "\t/*\n");
 FUNC_2(VAR_10, "\tmargin=0.2;\n");
 FUNC_2(VAR_10, "\tpage=\"8.27,11.69\"; // for A4 printing\n");
 FUNC_2(VAR_10, "\tratio=auto;\n");
 FUNC_2(VAR_10, "\t*/\n");
    }

    if (VAR_5)
    {
 VAR_3 = FUNC_1(VAR_4, "w");
 if (VAR_3 == 0)
     FUNC_3(VAR_4);
 VAR_19 = FUNC_4("union_file");
    }

    if (VAR_12)
    {
 VAR_6 = FUNC_1(VAR_7, "w");
 if (VAR_6 == 0)
     FUNC_3(VAR_7);
    }

    VAR_15 = FUNC_1(VAR_16, "w");
    if (VAR_15 == 0)
 FUNC_3(VAR_16);

    if (VAR_17)
    {
 VAR_1 = FUNC_1(VAR_2, "w");
 if (VAR_1 == 0)
     FUNC_3(VAR_2);
    }
    else
 VAR_1 = VAR_15;
}
