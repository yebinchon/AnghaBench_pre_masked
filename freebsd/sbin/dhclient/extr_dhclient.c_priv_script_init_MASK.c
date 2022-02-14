
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface_info {char const* name; TYPE_1__* client; } ;
struct TYPE_2__ {int scriptEnvsize; int ** scriptEnv; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct interface_info* VAR_1 ;
 int ** FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*,char*,char const*) ;
 int * FUNC_3 (int ) ;

void
FUNC_4(const char *VAR_2, char *VAR_3)
{
 struct interface_info *VAR_4 = VAR_1;

 if (VAR_4) {
  VAR_4->client->scriptEnvsize = 100;
  if (VAR_4->client->scriptEnv == ((void*)0))
   VAR_4->client->scriptEnv =
       FUNC_1(VAR_4->client->scriptEnvsize * sizeof(char *));
  if (VAR_4->client->scriptEnv == ((void*)0))
   FUNC_0("script_init: no memory for environment");

  VAR_4->client->scriptEnv[0] = FUNC_3(VAR_0);
  if (VAR_4->client->scriptEnv[0] == ((void*)0))
   FUNC_0("script_init: no memory for environment");

  VAR_4->client->scriptEnv[1] = ((void*)0);

  FUNC_2(VAR_4->client, "", "interface", VAR_4->name);

  if (VAR_3)
   FUNC_2(VAR_4->client, "", "medium", VAR_3);

  FUNC_2(VAR_4->client, "", "reason", VAR_2);
 }
}
