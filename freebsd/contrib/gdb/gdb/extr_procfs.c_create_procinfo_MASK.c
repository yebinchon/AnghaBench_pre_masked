
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pid; int tid; struct TYPE_9__* thread_list; struct TYPE_9__* next; int pathname; void* saved_exitset; void* saved_entryset; } ;
typedef TYPE_1__ procinfo ;


 char* VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int ,char*,int,...) ;
 void* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static procinfo *
FUNC_7 (int VAR_2, int VAR_3)
{
  procinfo *VAR_4, *VAR_5;

  if ((VAR_4 = FUNC_0 (VAR_2, VAR_3)))
    return VAR_4;


  if (VAR_3 != 0)
    VAR_5 = FUNC_1 (VAR_2, 0);



  VAR_4 = (procinfo *) FUNC_6 (sizeof (procinfo));
  FUNC_3 (VAR_4, 0, sizeof (procinfo));
  VAR_4->pid = VAR_2;
  VAR_4->tid = VAR_3;





  VAR_4->saved_entryset = FUNC_5 (VAR_4);
  VAR_4->saved_exitset = FUNC_5 (VAR_4);


  if (VAR_3 == 0)
    {
      FUNC_4 (VAR_4->pathname, VAR_0, VAR_2);
      VAR_4->next = VAR_1;
      VAR_1 = VAR_4;
    }
  else
    {



      FUNC_4 (VAR_4->pathname, VAR_0, VAR_2);

      VAR_4->next = VAR_5->thread_list;
      VAR_5->thread_list = VAR_4;
    }
  return VAR_4;
}
