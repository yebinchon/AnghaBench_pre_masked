
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,int *,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct cmd_list_element*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_3 (void)
{
  struct cmd_list_element *VAR_7;
  VAR_7 = FUNC_1 ("endian", VAR_0,
   VAR_1, &VAR_3,
   "Set endianness of target.",
   &VAR_4);
  FUNC_2 (VAR_7, VAR_2);


  FUNC_0 ("endian", VAR_0, VAR_5,
    "Show the current byte-order", &VAR_6);
}
