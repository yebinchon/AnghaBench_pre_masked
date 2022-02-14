
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ei; int * msg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool
FUNC_2(int VAR_1)
{

 FUNC_0(VAR_1 > 0);
 if (VAR_1 < FUNC_1(VAR_0) && VAR_0[VAR_1].msg != ((void*)0))
  return (VAR_0[VAR_1].ei);
 return (0);
}
