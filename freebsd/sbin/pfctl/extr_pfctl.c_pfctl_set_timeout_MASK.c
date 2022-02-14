
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfctl {int* timeout; int* timeout_set; int opts; } ;
struct TYPE_2__ {size_t timeout; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct pfctl *VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 if ((VAR_2 & VAR_0) == 0)
  return (0);

 for (VAR_8 = 0; VAR_3[VAR_8].name; VAR_8++) {
  if (FUNC_1(VAR_5, VAR_3[VAR_8].name) == 0) {
   VAR_4->timeout[VAR_3[VAR_8].timeout] = VAR_6;
   VAR_4->timeout_set[VAR_3[VAR_8].timeout] = 1;
   break;
  }
 }

 if (VAR_3[VAR_8].name == ((void*)0)) {
  FUNC_2("Bad timeout name.");
  return (1);
 }


 if (VAR_4->opts & VAR_1 && ! VAR_7)
  FUNC_0("set timeout %s %d\n", VAR_5, VAR_6);

 return (0);
}
