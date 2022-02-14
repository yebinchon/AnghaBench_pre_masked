
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_3__ {scalar_t__ endAddr; scalar_t__ startAddr; int taskId; } ;
typedef TYPE_1__ SOURCE_STEP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ,int*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3 (void)
{
  enum clnt_stat VAR_8;
  int VAR_9;
  SOURCE_STEP VAR_10;

  VAR_10.taskId = FUNC_0 (VAR_2);

  if (VAR_4)
    {
      VAR_10.startAddr = VAR_5;
      VAR_10.endAddr = VAR_4;
    }
  else
    {
      VAR_10.startAddr = 0;
      VAR_10.endAddr = 0;
    }

  VAR_8 = FUNC_2 (VAR_1, VAR_6, &VAR_10,
     VAR_7, &VAR_9);

  if (VAR_8 == VAR_0)
    return VAR_9;
  else
    FUNC_1 (VAR_3);
}
