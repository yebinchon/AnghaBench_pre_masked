
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int line; int file; } ;
struct TYPE_4__ {int line; int file; } ;
struct TYPE_6__ {int macro_nest; TYPE_2__ else_file_line; scalar_t__ else_seen; TYPE_1__ if_file_line; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_3__* VAR_0 ;

void
FUNC_3 (int VAR_1)
{
  if (VAR_0 != ((void*)0) && VAR_0->macro_nest >= VAR_1)
    {
      if (VAR_1 >= 0)
 FUNC_1 (FUNC_0("end of macro inside conditional"));
      else
 FUNC_1 (FUNC_0("end of file inside conditional"));
      FUNC_2 (VAR_0->if_file_line.file,
      VAR_0->if_file_line.line,
      FUNC_0("here is the start of the unterminated conditional"));
      if (VAR_0->else_seen)
 FUNC_2 (VAR_0->else_file_line.file,
        VAR_0->else_file_line.line,
        FUNC_0("here is the \"else\" of the unterminated conditional"));
    }
}
