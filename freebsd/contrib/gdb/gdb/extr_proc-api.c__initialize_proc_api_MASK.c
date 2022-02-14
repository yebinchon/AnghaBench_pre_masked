
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
 int VAR_3 ;
 int FUNC_2 (struct cmd_list_element*,int ) ;
 int FUNC_3 (struct cmd_list_element*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_4 (void)
{
  struct cmd_list_element *VAR_10;

  VAR_10 = FUNC_0 ("procfs-trace", VAR_1,
     VAR_8, (char *) &VAR_3,
     "Set tracing for /proc api calls.\n", &VAR_6);

  FUNC_1 (VAR_10, &VAR_7);
  FUNC_3 (VAR_10, VAR_5);
  FUNC_2 (VAR_10, VAR_0);

  VAR_10 = FUNC_0 ("procfs-file", VAR_1, VAR_9,
     (char *) &VAR_2,
     "Set filename for /proc tracefile.\n", &VAR_6);

  FUNC_1 (VAR_10, &VAR_7);
  FUNC_3 (VAR_10, VAR_4);
}
