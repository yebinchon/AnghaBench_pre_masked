
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
struct TYPE_2__ {int* cost; int mem_cost; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__** VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *,char*,...) ;
 int * VAR_5 ;
 int FUNC_3 (int,int,size_t) ;
 int VAR_6 ;
 char** VAR_7 ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_8)
{
  int VAR_9;
  for (VAR_9 = VAR_0; VAR_9 < VAR_6; VAR_9++)
    {
      int VAR_10;
      if (FUNC_1 (VAR_9))
 {
   FUNC_2 (VAR_8, "  Register %i costs:", VAR_9);
   for (VAR_10 = 0; VAR_10 < (int) VAR_1; VAR_10++)
     if (VAR_2 [(enum reg_class) VAR_10][FUNC_0 (VAR_9)]
  )
     FUNC_2 (VAR_8, " %s:%i", VAR_7[VAR_10],
       VAR_3[VAR_9].cost[(enum reg_class) VAR_10]);
   FUNC_2 (VAR_8, " MEM:%i\n", VAR_3[VAR_9].mem_cost);
 }
    }
}
