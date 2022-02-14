
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_list_element* FUNC_0 (char*,int ,int ,int *,char*,int *) ;
 int FUNC_1 (struct cmd_list_element*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_6 (void)
{
  FUNC_5 (VAR_3, VAR_8);


  {
    struct cmd_list_element *VAR_19;

    VAR_19 = FUNC_0 ("disassembly-flavor", VAR_13,
    VAR_18,
    &VAR_6,
    "Set the disassembly flavor, the valid values are \"att\" and \"intel\", and the default value is \"att\".",


    &VAR_14);
    FUNC_1 (VAR_19, &VAR_15);
  }



  {
    struct cmd_list_element *VAR_20;

    VAR_20 = FUNC_0 ("struct-convention", VAR_13,
    VAR_17,
    &VAR_16, "Set the convention for returning small structs, valid values are \"default\", \"pcc\" and \"reg\", and the default value is \"default\".",


                                &VAR_14);
    FUNC_1 (VAR_20, &VAR_15);
  }

  FUNC_3 (VAR_3, VAR_4,
      VAR_7);
  FUNC_3 (VAR_3, VAR_5,
      VAR_10);

  FUNC_2 (VAR_3, 0, VAR_2,
     VAR_12);
  FUNC_2 (VAR_3, 0, VAR_0,
     VAR_9);
  FUNC_2 (VAR_3, 0, VAR_1,
     VAR_11);


  FUNC_4 ();
}
