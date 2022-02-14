
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_config {char* name; char* title; int detect; int support; } ;
struct cmd_list_element {int dummy; } ;
typedef int cmd_sfunc_ftype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ,int ,struct cmd_list_element**) ;
 int FUNC_1 (char*,int ,int *,char*,char*,int *,int *,struct cmd_list_element**,struct cmd_list_element**) ;
 int VAR_2 ;
 int FUNC_2 (char**,char*,char*,...) ;

__attribute__((used)) static void
FUNC_3 (struct packet_config *VAR_3,
         char *VAR_4,
         char *VAR_5,
         cmd_sfunc_ftype *VAR_6,
         cmd_sfunc_ftype *VAR_7,
         struct cmd_list_element **VAR_8,
         struct cmd_list_element **VAR_9,
         int VAR_10)
{
  struct cmd_list_element *VAR_11;
  struct cmd_list_element *VAR_12;
  char *VAR_13;
  char *VAR_14;
  char *VAR_15;
  VAR_3->name = VAR_4;
  VAR_3->title = VAR_5;
  VAR_3->detect = VAR_0;
  VAR_3->support = VAR_1;
  FUNC_2 (&VAR_13, "Set use of remote protocol `%s' (%s) packet",
      VAR_4, VAR_5);
  FUNC_2 (&VAR_14, "Show current use of remote protocol `%s' (%s) packet",
      VAR_4, VAR_5);

  FUNC_2 (&VAR_15, "%s-packet", VAR_5);
  FUNC_1 (VAR_15, VAR_2,
    &VAR_3->detect, VAR_13, VAR_14,
    VAR_6, VAR_7,
    VAR_8, VAR_9);

  if (VAR_10)
    {
      char *VAR_16;
      FUNC_2 (&VAR_16, "%s-packet", VAR_4);
      FUNC_0 (VAR_16, VAR_15, VAR_2, 0,
       VAR_8);
      FUNC_0 (VAR_16, VAR_15, VAR_2, 0,
       VAR_9);
    }
}
