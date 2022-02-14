
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct cmd_list_element {int dummy; } ;
struct TYPE_5__ {char* fastmap; } ;
typedef TYPE_1__ regex_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cmd_list_element*,TYPE_1__*,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (scalar_t__,int *,char*,int) ;
 char* FUNC_5 (int,int) ;
 int FUNC_6 (char*) ;

void
FUNC_7 (char *VAR_2, int VAR_3)
{
  extern struct cmd_list_element *VAR_4;
  regex_t VAR_5;
  char *VAR_6;
  char VAR_7[512];
  VAR_6 = FUNC_5 (256, sizeof (char));
  if (VAR_2 == ((void*)0))
      FUNC_1("REGEXP string is empty");

  if (FUNC_3(&VAR_5,VAR_2,VAR_0) == 0)
    {
      VAR_5.fastmap=VAR_6;
      FUNC_2(&VAR_5);
      FUNC_0 (VAR_1,VAR_4,&VAR_5,"");
    }
  else
    {
      FUNC_4(FUNC_3(&VAR_5,VAR_2,VAR_0),((void*)0),VAR_7,512);
      FUNC_1("Error in regular expression:%s",VAR_7);
    }
  FUNC_6 (VAR_6);
}
