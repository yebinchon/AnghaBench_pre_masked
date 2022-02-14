
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int nr_entries; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,long,...) ;
 int* VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct seq_file*,long) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_7, void *VAR_8)
{
 long VAR_9;
 int VAR_10;

 if (VAR_8 == VAR_0) {
  FUNC_1(VAR_7, "        Depth    Size   Location"
      "    (%d entries)\n"
      "        -----    ----   --------\n",
      VAR_3.nr_entries - 1);

  if (!VAR_6 && !VAR_2)
   FUNC_0(VAR_7);

  return 0;
 }

 VAR_9 = *(long *)VAR_8;

 if (VAR_9 >= VAR_3.nr_entries ||
     VAR_5[VAR_9] == VAR_1)
  return 0;

 if (VAR_9+1 == VAR_3.nr_entries ||
     VAR_5[VAR_9+1] == VAR_1)
  VAR_10 = VAR_4[VAR_9];
 else
  VAR_10 = VAR_4[VAR_9] - VAR_4[VAR_9+1];

 FUNC_1(VAR_7, "%3ld) %8d   %5d   ", VAR_9, VAR_4[VAR_9], VAR_10);

 FUNC_2(VAR_7, VAR_9);

 return 0;
}
