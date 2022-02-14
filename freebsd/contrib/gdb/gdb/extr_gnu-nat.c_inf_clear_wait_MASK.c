
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ handler; scalar_t__ reply; } ;
struct TYPE_4__ {int kind; } ;
struct TYPE_6__ {TYPE_2__ exc; scalar_t__ suppress; scalar_t__ thread; TYPE_1__ status; } ;
struct inf {TYPE_3__ wait; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inf*,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;

void
FUNC_3 (struct inf *VAR_2)
{
  FUNC_0 (VAR_2, "clearing wait");
  VAR_2->wait.status.kind = VAR_1;
  VAR_2->wait.thread = 0;
  VAR_2->wait.suppress = 0;
  if (VAR_2->wait.exc.handler != VAR_0)
    {
      FUNC_1 (FUNC_2 (), VAR_2->wait.exc.handler);
      VAR_2->wait.exc.handler = VAR_0;
    }
  if (VAR_2->wait.exc.reply != VAR_0)
    {
      FUNC_1 (FUNC_2 (), VAR_2->wait.exc.reply);
      VAR_2->wait.exc.reply = VAR_0;
    }
}
