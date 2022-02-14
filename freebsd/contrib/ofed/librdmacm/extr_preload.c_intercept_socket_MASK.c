
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; int type; int protocol; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;

 if (!VAR_5)
  return 1;

 if (!VAR_9) {
  if (VAR_8 == VAR_3)
   VAR_9 = VAR_0;
  else if (VAR_8 == VAR_2)
   VAR_9 = VAR_1;
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if ((!VAR_4[VAR_10].name ||
       !FUNC_1(VAR_4[VAR_10].name, VAR_6,
      FUNC_0(VAR_4[VAR_10].name))) &&
      (!VAR_4[VAR_10].domain || VAR_4[VAR_10].domain == VAR_7) &&
      (!VAR_4[VAR_10].type || VAR_4[VAR_10].type == VAR_8) &&
      (!VAR_4[VAR_10].protocol || VAR_4[VAR_10].protocol == VAR_9))
   return 1;
 }

 return 0;
}
