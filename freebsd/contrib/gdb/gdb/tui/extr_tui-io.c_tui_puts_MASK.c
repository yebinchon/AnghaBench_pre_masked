
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {int cur_line; int start_line; int curch; } ;
struct TYPE_6__ {TYPE_1__ command_info; } ;
struct TYPE_7__ {int * handle; } ;
struct TYPE_8__ {TYPE_2__ detail; TYPE_3__ generic; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (const char *VAR_2)
{
  static int VAR_3 = -1;
  char VAR_4;
  WINDOW *VAR_5;

  VAR_5 = VAR_0->generic.handle;
  while ((VAR_4 = *VAR_2++) != 0)
    {


      if (VAR_4 == '\032')
        {
          VAR_3++;
        }
      else if (VAR_3 != 1)
        {
          VAR_3 = -1;
          FUNC_2 (VAR_5, VAR_4);
        }
      else if (VAR_4 == '\n')
        VAR_3 = -1;
    }
  FUNC_1 (VAR_5, VAR_0->detail.command_info.cur_line,
         VAR_0->detail.command_info.curch);
  VAR_0->detail.command_info.start_line = VAR_0->detail.command_info.cur_line;


  FUNC_3 (VAR_5);
  FUNC_0 (VAR_1);
}
