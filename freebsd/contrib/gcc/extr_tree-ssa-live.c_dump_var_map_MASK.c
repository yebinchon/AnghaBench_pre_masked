
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
struct TYPE_4__ {unsigned int num_partitions; int* compact_to_partition; scalar_t__* partition_to_var; int* partition_to_compact; int var_partition; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ,int ) ;

void
FUNC_4 (FILE *VAR_3, var_map VAR_4)
{
  int VAR_5;
  unsigned VAR_6, VAR_7;
  int VAR_8;

  FUNC_0 (VAR_3, "\nPartition map \n\n");

  for (VAR_6 = 0; VAR_6 < VAR_4->num_partitions; VAR_6++)
    {
      if (VAR_4->compact_to_partition != ((void*)0))
 VAR_8 = VAR_4->compact_to_partition[VAR_6];
      else
 VAR_8 = VAR_6;

      if (VAR_4->partition_to_var[VAR_8] == VAR_0)
        continue;

      VAR_5 = 0;
      for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++)
        {
   VAR_8 = FUNC_1 (VAR_4->var_partition, VAR_7);
   if (VAR_4->partition_to_compact)
     VAR_8 = VAR_4->partition_to_compact[VAR_8];
   if (VAR_8 == (int)VAR_6)
     {
       if (VAR_5++ == 0)
         {
    FUNC_0(VAR_3, "Partition %d (", VAR_6);
    FUNC_3 (VAR_3, FUNC_2 (VAR_4, VAR_8), VAR_1);
    FUNC_0 (VAR_3, " - ");
  }
       FUNC_0 (VAR_3, "%d ", VAR_7);
     }
 }
      if (VAR_5 != 0)
 FUNC_0 (VAR_3, ")\n");
    }
  FUNC_0 (VAR_3, "\n");
}
