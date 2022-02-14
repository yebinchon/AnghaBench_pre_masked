
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ,int,int *) ;
 int FUNC_1 (char*,int ,int ,char*,int *) ;
 int FUNC_2 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 struct cmd_list_element* FUNC_3 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_4 (struct cmd_list_element*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct cmd_list_element*,int ) ;
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

void
FUNC_6 (void)
{
  struct cmd_list_element *VAR_24;

  FUNC_2 ("print", VAR_4, VAR_12,
    "Generic command for setting how things print.",
    &VAR_15, "set print ", 0, &VAR_14);
  FUNC_0 ("p", "print", VAR_4, 1, &VAR_14);

  FUNC_0 ("pr", "print", VAR_4, 1, &VAR_14);

  FUNC_2 ("print", VAR_4, VAR_16,
    "Generic command for showing print settings.",
    &VAR_19, "show print ", 0, &VAR_18);
  FUNC_0 ("p", "print", VAR_4, 1, &VAR_18);
  FUNC_0 ("pr", "print", VAR_4, 1, &VAR_18);

  FUNC_4
    (FUNC_3 ("elements", VAR_4, VAR_23, (char *) &VAR_8,
    "Set limit on string chars or array elements to print.\n\"set print elements 0\" causes there to be no limit.",

    &VAR_15),
     &VAR_19);

  FUNC_4
    (FUNC_3 ("null-stop", VAR_4, VAR_22,
    (char *) &VAR_20,
    "Set printing of char arrays to stop at first null char.",
    &VAR_15),
     &VAR_19);

  FUNC_4
    (FUNC_3 ("repeats", VAR_4, VAR_23,
    (char *) &VAR_9,
    "Set threshold for repeated print elements.\n\"set print repeats 0\" causes all elements to be individually printed.",

    &VAR_15),
     &VAR_19);

  FUNC_4
    (FUNC_3 ("pretty", VAR_2, VAR_22,
    (char *) &VAR_7,
    "Set prettyprinting of structures.",
    &VAR_15),
     &VAR_19);

  FUNC_4
    (FUNC_3 ("union", VAR_2, VAR_22, (char *) &VAR_21,
    "Set printing of unions interior to structures.",
    &VAR_15),
     &VAR_19);

  FUNC_4
    (FUNC_3 ("array", VAR_2, VAR_22,
    (char *) &VAR_6,
    "Set prettyprinting of arrays.",
    &VAR_15),
     &VAR_19);

  FUNC_4
    (FUNC_3 ("address", VAR_2, VAR_22, (char *) &VAR_1,
    "Set printing of addresses.",
    &VAR_15),
     &VAR_19);

  VAR_24 = FUNC_3 ("input-radix", VAR_2, VAR_23,
     (char *) &VAR_3,
     "Set default input radix for entering numbers.",
     &VAR_14);
  FUNC_4 (VAR_24, &VAR_18);
  FUNC_5 (VAR_24, VAR_10);

  VAR_24 = FUNC_3 ("output-radix", VAR_2, VAR_23,
     (char *) &VAR_5,
     "Set default output radix for printing of values.",
     &VAR_14);
  FUNC_4 (VAR_24, &VAR_18);
  FUNC_5 (VAR_24, VAR_11);






  FUNC_1 ("radix", VAR_2, VAR_13,
    "Set default input and output number radices.\nUse 'set input-radix' or 'set output-radix' to independently set each.\nWithout an argument, sets both radices back to the default value of 10.",


    &VAR_14);
  FUNC_1 ("radix", VAR_2, VAR_17,
    "Show the default input and output number radices.\nUse 'show input-radix' or 'show output-radix' to independently show each.",

    &VAR_18);


  VAR_7 = 0;
  VAR_6 = 0;
  VAR_21 = 1;
  VAR_1 = 1;
  VAR_8 = VAR_0;
}
