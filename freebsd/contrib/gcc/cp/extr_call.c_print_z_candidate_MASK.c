
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_candidate {int num_convs; int viable; int fn; TYPE_1__** convs; } ;
struct TYPE_2__ {int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int ,...) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_1, struct z_candidate *VAR_2)
{
  if (FUNC_0 (VAR_2->fn) == VAR_0)
    {
      if (VAR_2->num_convs == 3)
 FUNC_2 ("%s %D(%T, %T, %T) <built-in>", VAR_1, VAR_2->fn,
  VAR_2->convs[0]->type,
  VAR_2->convs[1]->type,
  VAR_2->convs[2]->type);
      else if (VAR_2->num_convs == 2)
 FUNC_2 ("%s %D(%T, %T) <built-in>", VAR_1, VAR_2->fn,
  VAR_2->convs[0]->type,
  VAR_2->convs[1]->type);
      else
 FUNC_2 ("%s %D(%T) <built-in>", VAR_1, VAR_2->fn,
  VAR_2->convs[0]->type);
    }
  else if (FUNC_1 (VAR_2->fn))
    FUNC_2 ("%s %T <conversion>", VAR_1, VAR_2->fn);
  else if (VAR_2->viable == -1)
    FUNC_2 ("%s %+#D <near match>", VAR_1, VAR_2->fn);
  else
    FUNC_2 ("%s %+#D", VAR_1, VAR_2->fn);
}
