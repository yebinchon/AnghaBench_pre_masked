
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc; scalar_t__ func; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1, const char **VAR_2)
{
 int VAR_3 = 0;

 while (VAR_0[VAR_3].func) {
  int VAR_4 = VAR_3++;

  if (VAR_1 > 1 && !FUNC_1(VAR_0[VAR_4].desc, VAR_2[1]))
   continue;

  FUNC_0("%2d: %s\n", VAR_3, VAR_0[VAR_4].desc);
 }

 return 0;
}
