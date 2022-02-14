
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct work_stuff {int dummy; } ;
struct TYPE_5__ {char* b; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (struct work_stuff*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_3 (struct work_stuff *VAR_0, string *VAR_1, int VAR_2)
{
  char *VAR_3 = ((void*)0);

  FUNC_0 (VAR_0);




  if (!VAR_2)
    {
      FUNC_2 (VAR_1);
    }
  else
    {
      FUNC_1 (VAR_1, "", 1);
      VAR_3 = VAR_1->b;
    }
  return (VAR_3);
}
