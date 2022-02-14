
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int removed; int total; scalar_t__ total_phis; int removed_phis; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,char*,int,int,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (VAR_2 && (VAR_3 & (VAR_1|VAR_0)))
    {
      float VAR_5;

      VAR_5 = ((float) VAR_4.removed / (float) VAR_4.total) * 100;
      FUNC_0 (VAR_2, "Removed %d of %d statements (%d%%)\n",
        VAR_4.removed, VAR_4.total, (int) VAR_5);

      if (VAR_4.total_phis == 0)
 VAR_5 = 0;
      else
 VAR_5 = ((float) VAR_4.removed_phis / (float) VAR_4.total_phis) * 100;

      FUNC_0 (VAR_2, "Removed %d of %d PHI nodes (%d%%)\n",
        VAR_4.removed_phis, VAR_4.total_phis, (int) VAR_5);
    }
}
