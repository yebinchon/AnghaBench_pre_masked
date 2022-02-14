
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct change {int ignore; struct change* link; } ;
struct TYPE_4__ {int prefix_lines; } ;
struct TYPE_3__ {scalar_t__ fastmap; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (struct change*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct change*,int ,int ) ;

void
FUNC_2 (struct change *VAR_9, bool VAR_10)
{
  if (VAR_5 || VAR_6.fastmap)
    FUNC_0 (VAR_9);
  else
    {
      struct change *VAR_11;
      for (VAR_11 = VAR_9; VAR_11; VAR_11 = VAR_11->link)
 VAR_11->ignore = 0;
    }

  VAR_3 = - VAR_1[0].prefix_lines;
  VAR_2 = VAR_0;

  if (VAR_10)
    FUNC_1 (VAR_9, VAR_4, VAR_8);
  else
    FUNC_1 (VAR_9, VAR_4, VAR_7);
}
