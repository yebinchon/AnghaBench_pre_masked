
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;
struct TYPE_7__ {int logical_input_file; int logical_input_line; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 () ;
 TYPE_3__* VAR_6 ;
 int FUNC_4 (int *,char) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;

void
FUNC_7 (sb *VAR_8, char *VAR_9, int VAR_10)
{
  if (VAR_4 > VAR_5)
    FUNC_1 (FUNC_0("macros nested too deeply"));
  ++VAR_4;
  VAR_6 = FUNC_2 (VAR_9);

  FUNC_5 (&VAR_0);
  VAR_1 = VAR_10;
  if (VAR_8->len >= 1 && VAR_8->ptr[0] != '\n')
    {

      FUNC_4 (&VAR_0, '\n');
    }
  FUNC_6 (&VAR_0, VAR_8);
  VAR_7 = 1;



  VAR_3 = VAR_6->logical_input_line;
  VAR_2 = VAR_6->logical_input_file;
}
