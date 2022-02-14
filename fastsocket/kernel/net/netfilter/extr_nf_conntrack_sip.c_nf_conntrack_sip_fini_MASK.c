
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * me; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   if (VAR_1[VAR_2][VAR_3].me == ((void*)0))
    continue;
   FUNC_0(&VAR_1[VAR_2][VAR_3]);
  }
 }
}
