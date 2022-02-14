
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int active; int* index; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(uint8_t VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(&VAR_0.lock);
 VAR_3 = VAR_0.active;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_0.index[VAR_2] == VAR_1) {

   int VAR_4 = VAR_0.index[VAR_3-1];
   VAR_0.index[VAR_3-1] = VAR_1;
   VAR_0.index[VAR_2] = VAR_4;
   VAR_0.active--;
   break;
  }
 }
 if (VAR_3 == VAR_0.active)
  FUNC_2("Index %u not found", VAR_1);
 FUNC_1(&VAR_0.lock);
}
