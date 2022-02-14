
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_5__ {int notes_used; int notes_cap; TYPE_3__* notes; } ;
typedef TYPE_1__ cpp_buffer ;
struct TYPE_6__ {unsigned int type; int const* pos; } ;


 TYPE_3__* FUNC_0 (int ,TYPE_3__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (cpp_buffer *VAR_1, const uchar *VAR_2, unsigned int VAR_3)
{
  if (VAR_1->notes_used == VAR_1->notes_cap)
    {
      VAR_1->notes_cap = VAR_1->notes_cap * 2 + 200;
      VAR_1->notes = FUNC_0 (VAR_0, VAR_1->notes,
                                  VAR_1->notes_cap);
    }

  VAR_1->notes[VAR_1->notes_used].pos = VAR_2;
  VAR_1->notes[VAR_1->notes_used].type = VAR_3;
  VAR_1->notes_used++;
}
