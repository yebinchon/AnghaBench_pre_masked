
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct change {int dummy; } ;
struct TYPE_2__ {int valid_lines; int prefix_lines; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct change*,int ,int ) ;

void
FUNC_3 (struct change *VAR_7)
{
  VAR_4 = VAR_5 = - VAR_1[0].prefix_lines;
  FUNC_2 (VAR_7, VAR_2, VAR_6);
  if (VAR_4 < VAR_1[0].valid_lines
      || VAR_5 < VAR_1[1].valid_lines)
    {
      FUNC_0 ();
      FUNC_1 (VAR_3[VAR_0],
      VAR_4, VAR_1[0].valid_lines,
      VAR_5, VAR_1[1].valid_lines);
    }
}
