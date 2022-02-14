
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
typedef TYPE_3__* res_state ;
struct TYPE_7__ {unsigned int nsort; TYPE_2__* sort_list; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {int mask; TYPE_1__ addr; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(char **VAR_1, int VAR_2, res_state VAR_3)
{
 int VAR_4, VAR_5;
 char **VAR_6;
 short VAR_7[VAR_0];
 int VAR_8 = 0;

 VAR_6 = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_6++) {
     for (VAR_5 = 0 ; (unsigned)VAR_5 < VAR_3->nsort; VAR_5++)
  if (VAR_3->sort_list[VAR_5].addr.s_addr ==
      (((struct in_addr *)(*VAR_6))->s_addr & VAR_3->sort_list[VAR_5].mask))
   break;
     VAR_7[VAR_4] = VAR_5;
     if (VAR_8 == 0 && VAR_4 > 0 && VAR_5 < VAR_7[VAR_4-1])
  VAR_8 = VAR_4;
 }
 if (!VAR_8)
     return;

 while (VAR_8 < VAR_2) {
     for (VAR_5 = VAR_8 - 1; VAR_5 >= 0; VAR_5--) {
  if (VAR_7[VAR_5] > VAR_7[VAR_5+1]) {
      char *VAR_9;

      VAR_4 = VAR_7[VAR_5];
      VAR_7[VAR_5] = VAR_7[VAR_5+1];
      VAR_7[VAR_5+1] = VAR_4;

      VAR_9 = VAR_1[VAR_5];
      VAR_1[VAR_5] = VAR_1[VAR_5+1];
      VAR_1[VAR_5+1] = VAR_9;

  } else
      break;
     }
     VAR_8++;
 }
}
