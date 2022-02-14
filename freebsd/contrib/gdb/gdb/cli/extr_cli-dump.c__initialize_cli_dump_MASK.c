
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int completer; } ;


 int FUNC_0 (char*,int ,int ,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

void
FUNC_4 (void)
{
  struct cmd_list_element *VAR_31;
  FUNC_3 ("dump", VAR_9, VAR_14, "Dump target code/data to a local file.",

    &VAR_13, "dump ",
    0 ,
    &VAR_10);
  FUNC_3 ("append", VAR_9, VAR_4, "Append target code/data to a local file.",

    &VAR_3, "append ",
    0 ,
    &VAR_10);

  FUNC_2 ("memory", VAR_17, "Write contents of memory to a raw binary file.\nArguments are FILE START STOP.  Writes the contents of memory within the\nrange [START .. STOP) to the specifed FILE in raw target ordered bytes.");




  FUNC_2 ("value", VAR_22, "Write the value of an expression to a raw binary file.\nArguments are FILE EXPRESSION.  Writes the value of EXPRESSION to\nthe specified FILE in raw target ordered bytes.");




  FUNC_3 ("srec", VAR_0, VAR_28, "Write target code/data to an srec file.",

    &VAR_27, "dump srec ",
    0 ,
    &VAR_13);

  FUNC_3 ("ihex", VAR_0, VAR_25, "Write target code/data to an intel hex file.",

    &VAR_24, "dump ihex ",
    0 ,
    &VAR_13);

  FUNC_3 ("tekhex", VAR_0, VAR_30, "Write target code/data to a tekhex file.",

    &VAR_29, "dump tekhex ",
    0 ,
    &VAR_13);

  FUNC_3 ("binary", VAR_0, VAR_8, "Write target code/data to a raw binary file.",

    &VAR_7, "dump binary ",
    0 ,
    &VAR_13);

  FUNC_3 ("binary", VAR_0, VAR_6, "Append target code/data to a raw binary file.",

    &VAR_5, "append binary ",
    0 ,
    &VAR_3);

  FUNC_0 ("memory", VAR_0, VAR_18, "Write contents of memory to an srec file.\nArguments are FILE START STOP.  Writes the contents of memory\nwithin the range [START .. STOP) to the specifed FILE in srec format.",



    &VAR_27);

  FUNC_0 ("value", VAR_0, VAR_19, "Write the value of an expression to an srec file.\nArguments are FILE EXPRESSION.  Writes the value of EXPRESSION\nto the specified FILE in srec format.",



    &VAR_27);

  FUNC_0 ("memory", VAR_0, VAR_15, "Write contents of memory to an ihex file.\nArguments are FILE START STOP.  Writes the contents of memory within\nthe range [START .. STOP) to the specifed FILE in intel hex format.",



    &VAR_24);

  FUNC_0 ("value", VAR_0, VAR_16, "Write the value of an expression to an ihex file.\nArguments are FILE EXPRESSION.  Writes the value of EXPRESSION\nto the specified FILE in intel hex format.",



    &VAR_24);

  FUNC_0 ("memory", VAR_0, VAR_20, "Write contents of memory to a tekhex file.\nArguments are FILE START STOP.  Writes the contents of memory\nwithin the range [START .. STOP) to the specifed FILE in tekhex format.",



    &VAR_29);

  FUNC_0 ("value", VAR_0, VAR_21, "Write the value of an expression to a tekhex file.\nArguments are FILE EXPRESSION.  Writes the value of EXPRESSION\nto the specified FILE in tekhex format.",



    &VAR_29);

  FUNC_0 ("memory", VAR_0, VAR_11, "Write contents of memory to a raw binary file.\nArguments are FILE START STOP.  Writes the contents of memory\nwithin the range [START .. STOP) to the specifed FILE in binary format.",



    &VAR_7);

  FUNC_0 ("value", VAR_0, VAR_12, "Write the value of an expression to a raw binary file.\nArguments are FILE EXPRESSION.  Writes the value of EXPRESSION\nto the specified FILE in raw target ordered bytes.",



    &VAR_7);

  FUNC_0 ("memory", VAR_0, VAR_1, "Append contents of memory to a raw binary file.\nArguments are FILE START STOP.  Writes the contents of memory within the\nrange [START .. STOP) to the specifed FILE in raw target ordered bytes.",



    &VAR_5);

  FUNC_0 ("value", VAR_0, VAR_2, "Append the value of an expression to a raw binary file.\nArguments are FILE EXPRESSION.  Writes the value of EXPRESSION\nto the specified FILE in raw target ordered bytes.",



    &VAR_5);

  VAR_31 = FUNC_1 ("restore", VAR_9, VAR_26,
        "Restore the contents of FILE to target memory.\nArguments are FILE OFFSET START END where all except FILE are optional.\nOFFSET will be added to the base address of the file (default zero).\nIf START and END are given, only the file contents within that range\n(file relative) will be restored to target memory.");




  VAR_31->completer = VAR_23;

}
