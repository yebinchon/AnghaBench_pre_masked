
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_1 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct cmd_list_element*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_4 (void)
{
  struct cmd_list_element *VAR_8;

  FUNC_2 (VAR_1, VAR_0, ((void*)0));






  VAR_8 = FUNC_0 ("heuristic-fence-post", VAR_2, VAR_7,
     (char *) &VAR_3,
     "Set the distance searched for the start of a function.\nIf you are debugging a stripped executable, GDB needs to search through the\nprogram for the start of a function.  This command sets the distance of the\nsearch.  The only need to set it is when debugging a stripped executable.",




     &VAR_5);


  FUNC_3 (VAR_8, VAR_4);
  FUNC_1 (VAR_8, &VAR_6);
}
