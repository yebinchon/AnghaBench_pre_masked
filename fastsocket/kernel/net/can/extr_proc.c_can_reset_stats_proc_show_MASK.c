
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {scalar_t__ stats_reset; } ;
struct TYPE_5__ {scalar_t__ jiffies_init; } ;
struct TYPE_4__ {scalar_t__ function; } ;


 int FUNC_0 () ;
 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_6, void *VAR_7)
{
 VAR_5 = 1;

 if (VAR_3.function == VAR_1) {
  FUNC_1(VAR_6, "Scheduled statistic reset #%ld.\n",
    VAR_0.stats_reset + 1);

 } else {
  if (VAR_2.jiffies_init != VAR_4)
   FUNC_0();

  FUNC_1(VAR_6, "Performed statistic reset #%ld.\n",
    VAR_0.stats_reset);
 }
 return 0;
}
