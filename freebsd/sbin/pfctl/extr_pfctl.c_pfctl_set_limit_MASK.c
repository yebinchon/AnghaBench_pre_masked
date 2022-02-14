
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfctl {unsigned int* limit; int* limit_set; int opts; } ;
struct TYPE_2__ {size_t index; int * name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char const*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct pfctl *VAR_2, const char *VAR_3, unsigned int VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_1[VAR_5].name; VAR_5++) {
  if (FUNC_1(VAR_3, VAR_1[VAR_5].name) == 0) {
   VAR_2->limit[VAR_1[VAR_5].index] = VAR_4;
   VAR_2->limit_set[VAR_1[VAR_5].index] = 1;
   break;
  }
 }
 if (VAR_1[VAR_5].name == ((void*)0)) {
  FUNC_2("Bad pool name.");
  return (1);
 }

 if (VAR_2->opts & VAR_0)
  FUNC_0("set limit %s %d\n", VAR_3, VAR_4);

 return (0);
}
