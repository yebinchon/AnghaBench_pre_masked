
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* func ) () ;int desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int,int,char const**) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_6(int VAR_3, const char *VAR_4[])
{
 int VAR_5 = 0;
 int VAR_6 = 0;

 while (VAR_2[VAR_5].func) {
  int VAR_7 = FUNC_4(VAR_2[VAR_5].desc);

  if (VAR_6 < VAR_7)
   VAR_6 = VAR_7;
  ++VAR_5;
 }

 VAR_5 = 0;
 while (VAR_2[VAR_5].func) {
  int VAR_8 = VAR_5++, VAR_9;

  if (!FUNC_1(VAR_8, VAR_3, VAR_4))
   continue;

  FUNC_3("%2d: %-*s:", VAR_5, VAR_6, VAR_2[VAR_8].desc);
  FUNC_2("\n--- start ---\n");
  VAR_9 = VAR_2[VAR_8].func();
  FUNC_2("---- end ----\n%s:", VAR_2[VAR_8].desc);
  if (VAR_9)
   FUNC_0(VAR_1, VAR_0, " FAILED!\n");
  else
   FUNC_3(" Ok\n");
 }

 return 0;
}
