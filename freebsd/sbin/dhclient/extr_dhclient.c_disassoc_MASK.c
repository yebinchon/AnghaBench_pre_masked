
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface_info {TYPE_1__* client; } ;
struct TYPE_2__ {int state; int * alias; int * active; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct interface_info *VAR_2 = VAR_1;




 if (VAR_2->client->active != ((void*)0)) {
  FUNC_1("EXPIRE", ((void*)0));
  FUNC_2("old_",
      VAR_2->client->active);
  if (VAR_2->client->alias)
   FUNC_2("alias_",
    VAR_2->client->alias);
  FUNC_0();
 }
 VAR_2->client->state = VAR_0;
}
