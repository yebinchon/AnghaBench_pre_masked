
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int start_pos; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(FILE *VAR_4)
{
 while (!FUNC_1(VAR_4)) {
  if (VAR_2 >= VAR_3) {
   VAR_3 += 10000;
   VAR_1 = FUNC_4(VAR_1, sizeof(*VAR_1) * VAR_3);
   if (!VAR_1) {
    FUNC_2(VAR_0, "out of memory\n");
    FUNC_0 (1);
   }
  }
  if (FUNC_3(VAR_4, &VAR_1[VAR_2]) == 0) {
   VAR_1[VAR_2].start_pos = VAR_2;
   VAR_2++;
  }
 }
}
