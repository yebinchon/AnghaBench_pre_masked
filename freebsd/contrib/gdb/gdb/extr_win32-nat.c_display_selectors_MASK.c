
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SegCs; int SegDs; int SegEs; int SegSs; int SegFs; int SegGs; } ;
struct TYPE_4__ {int h; TYPE_1__ context; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char * VAR_1, int VAR_2)
{
  if (!VAR_0)
    {
      FUNC_3 ("Impossible to display selectors now.\n");
      return;
    }
  if (!VAR_1)
    {

      FUNC_3 ("Selector $cs\n");
      FUNC_0 (VAR_0->h,
 VAR_0->context.SegCs);
      FUNC_3 ("Selector $ds\n");
      FUNC_0 (VAR_0->h,
 VAR_0->context.SegDs);
      FUNC_3 ("Selector $es\n");
      FUNC_0 (VAR_0->h,
 VAR_0->context.SegEs);
      FUNC_3 ("Selector $ss\n");
      FUNC_0 (VAR_0->h,
 VAR_0->context.SegSs);
      FUNC_3 ("Selector $fs\n");
      FUNC_0 (VAR_0->h,
 VAR_0->context.SegFs);
      FUNC_3 ("Selector $gs\n");
      FUNC_0 (VAR_0->h,
 VAR_0->context.SegGs);
    }
  else
    {
      int VAR_3;
      VAR_3 = FUNC_1 (VAR_1);
      FUNC_2 ("Selector \"%s\"\n",VAR_1);
      FUNC_0 (VAR_0->h, VAR_3);
    }
}
