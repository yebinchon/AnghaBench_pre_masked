
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
struct TYPE_4__ {TYPE_1__ generic; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ VAR_1 ;

void
FUNC_3 (void)
{
  char VAR_2[50];
  int VAR_3, VAR_4;

  FUNC_1 (&VAR_3, &VAR_4);

  FUNC_2 (VAR_2, "set width %d",
           VAR_1 ? VAR_0->generic.width : VAR_4);
  FUNC_0 (VAR_2, 0);
  FUNC_2 (VAR_2, "set height %d",
           VAR_1 ? VAR_0->generic.height : VAR_3);
  FUNC_0 (VAR_2, 0);
}
