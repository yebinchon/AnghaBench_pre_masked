
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int h; int id; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_7__ {TYPE_1__* next; } ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_3__ VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static thread_info *
FUNC_4 (DWORD VAR_2, HANDLE VAR_3)
{
  thread_info *VAR_4;

  if ((VAR_4 = FUNC_2 (VAR_2, VAR_0)))
    return VAR_4;

  VAR_4 = (thread_info *) FUNC_3 (sizeof (*VAR_4));
  FUNC_1 (VAR_4, 0, sizeof (*VAR_4));
  VAR_4->id = VAR_2;
  VAR_4->h = VAR_3;
  VAR_4->next = VAR_1.next;
  VAR_1.next = VAR_4;
  FUNC_0 (VAR_2);
  return VAR_4;
}
