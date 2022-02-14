
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_6__ {scalar_t__ curch; int cur_line; } ;
struct TYPE_7__ {TYPE_2__ command_info; } ;
struct TYPE_5__ {int * handle; } ;
struct TYPE_8__ {TYPE_3__ detail; TYPE_1__ generic; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *) ;

int
FUNC_10 (FILE *VAR_4)
{
  int VAR_5;
  WINDOW *VAR_6;

  VAR_6 = VAR_2->generic.handle;






  VAR_5 = FUNC_7 (VAR_6);
  VAR_5 = FUNC_3 (VAR_5);


  if (VAR_5 == '\n')
    {





      if (VAR_3 == 0)
        {
          FUNC_8 (VAR_6, VAR_2->detail.command_info.cur_line, 0);



          FUNC_6 (VAR_6);
          FUNC_9 (VAR_6);
          FUNC_1 (20);
        }
      else
        {
          FUNC_8 (VAR_6, VAR_2->detail.command_info.cur_line,
                 VAR_2->detail.command_info.curch);
          FUNC_5 (VAR_6, VAR_5);
        }
    }

  if (FUNC_0 (VAR_5))
    {
      VAR_5 = FUNC_2 (VAR_5);
    }

  if (VAR_5 == '\n' || VAR_5 == '\r' || VAR_5 == '\f')
    VAR_2->detail.command_info.curch = 0;
  if (VAR_5 == VAR_1)
    return '\b';

  return VAR_5;
}
