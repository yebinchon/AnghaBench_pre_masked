
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int (* load ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(int VAR_7, char *VAR_8[])
{
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 VAR_6 = 0;
 VAR_5 = 0;
 VAR_10 = 0;
 VAR_2 = 1;
 VAR_3 = 1;
 VAR_12 = 0;
 while ((VAR_11 = FUNC_0(VAR_7, VAR_8, "v")) != -1) {
  switch(VAR_11) {
  case 'v':
   VAR_10 = 1;
   break;
  case '?':
  default:

   return(VAR_1);
  }
 }
 VAR_8 += (VAR_2 - 1);
 VAR_7 -= (VAR_2 - 1);

 if (VAR_7 > 2)
  return (VAR_0);

 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_4); VAR_9++) {
  if (VAR_7 == 2 && FUNC_3(VAR_8[1], VAR_4[VAR_9].name) != 0) {
   if (VAR_10)
    FUNC_2("Skipping bus %s\n", VAR_4[VAR_9].name);
   continue;
  }
  if (VAR_10)
   FUNC_2("Autoloading modules for simplebus\n");
  VAR_4[VAR_9].load();
  VAR_12 = 1;
 }
 if (VAR_12 == 0)
  FUNC_2("Unsupported bus %s\n", VAR_8[1]);

 return (VAR_1);
}
