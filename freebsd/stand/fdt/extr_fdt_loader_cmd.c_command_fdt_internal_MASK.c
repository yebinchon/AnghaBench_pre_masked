
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* cmdf_t ) (int,char**) ;
struct TYPE_2__ {int (* handler ) (int,char**) ;int flags; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int FUNC_2 (int,char**) ;

int
FUNC_3(int VAR_4, char *VAR_5[])
{
 cmdf_t *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4 < 2) {
  VAR_2 = "usage is 'fdt <command> [<args>]";
  return (VAR_0);
 }




 VAR_8 = 0;
 VAR_6 = ((void*)0);
 while (!(VAR_3[VAR_8].name == ((void*)0))) {
  if (FUNC_1(VAR_5[1], VAR_3[VAR_8].name) == 0) {

   VAR_6 = &VAR_3[VAR_8].handler;
   VAR_7 = VAR_3[VAR_8].flags;
   break;
  }
  VAR_8++;
 }
 if (VAR_6 == ((void*)0)) {
  VAR_2 = "unknown command";
  return (VAR_0);
 }

 if (VAR_7 & VAR_1) {



  if (FUNC_0() == 0)
   return (VAR_0);
 }




 VAR_9 = (*VAR_6)(VAR_4, VAR_5);

 return (VAR_9);
}
