
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct action_record {int filter; int next; int offset; } ;
typedef int htab_t ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int action_record_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct action_record*,int ) ;
 int FUNC_2 (int *,int) ;
 struct action_record* FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4 (htab_t VAR_2, int VAR_3, int VAR_4)
{
  struct action_record **VAR_5, *VAR_6, VAR_7;

  VAR_7.filter = VAR_3;
  VAR_7.next = VAR_4;
  VAR_5 = (struct action_record **) FUNC_1 (VAR_2, &VAR_7, VAR_0);

  if ((VAR_6 = *VAR_5) == ((void*)0))
    {
      VAR_6 = FUNC_3 (sizeof (*VAR_6));
      VAR_6->offset = FUNC_0 (VAR_1->eh->action_record_data) + 1;
      VAR_6->filter = VAR_3;
      VAR_6->next = VAR_4;
      *VAR_5 = VAR_6;






      FUNC_2 (&VAR_1->eh->action_record_data, VAR_3);
      if (VAR_4)
 VAR_4 -= FUNC_0 (VAR_1->eh->action_record_data) + 1;
      FUNC_2 (&VAR_1->eh->action_record_data, VAR_4);
    }

  return VAR_6->offset;
}
