
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ContextFlags; void* Dr7; void* Dr3; void* Dr2; void* Dr1; void* Dr0; } ;
struct TYPE_8__ {TYPE_6__ context; int h; struct TYPE_8__* next; int id; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_9__ {TYPE_1__* next; } ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 void** VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_4 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static thread_info *
FUNC_8 (DWORD VAR_5, HANDLE VAR_6)
{
  thread_info *VAR_7;

  if ((VAR_7 = FUNC_6 (VAR_5, VAR_1)))
    return VAR_7;

  VAR_7 = (thread_info *) FUNC_7 (sizeof (*VAR_7));
  FUNC_4 (VAR_7, 0, sizeof (*VAR_7));
  VAR_7->id = VAR_5;
  VAR_7->h = VAR_6;
  VAR_7->next = VAR_4.next;
  VAR_4.next = VAR_7;
  FUNC_3 (FUNC_5 (VAR_5));

  if (VAR_2)
    {

      VAR_7->context.ContextFlags = VAR_0;
      FUNC_0 (FUNC_1 (VAR_7->h, &VAR_7->context));
      VAR_7->context.Dr0 = VAR_3[0];
      VAR_7->context.Dr1 = VAR_3[1];
      VAR_7->context.Dr2 = VAR_3[2];
      VAR_7->context.Dr3 = VAR_3[3];


      VAR_7->context.Dr7 = VAR_3[7];
      FUNC_0 (FUNC_2 (VAR_7->h, &VAR_7->context));
      VAR_7->context.ContextFlags = 0;
    }
  return VAR_7;
}
