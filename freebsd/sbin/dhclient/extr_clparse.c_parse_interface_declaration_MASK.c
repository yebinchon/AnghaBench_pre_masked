
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface_info {TYPE_1__* client; } ;
struct client_config {int dummy; } ;
struct TYPE_2__ {int config; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct interface_info* FUNC_0 (char*) ;
 int FUNC_1 (struct interface_info*,struct client_config*) ;
 int FUNC_2 (struct interface_info*) ;
 int FUNC_3 (char**,int *) ;
 int FUNC_4 (int *,struct interface_info*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(FILE *VAR_4, struct client_config *VAR_5)
{
 int VAR_6;
 char *VAR_7;
 struct interface_info *VAR_8;

 VAR_6 = FUNC_3(&VAR_7, VAR_4);
 if (VAR_6 != VAR_3) {
  FUNC_5("expecting interface name (in quotes).");
  FUNC_7(VAR_4);
  return;
 }

 VAR_8 = FUNC_0(VAR_7);

 if (!VAR_8->client)
  FUNC_2(VAR_8);

 if (!VAR_8->client->config)
  FUNC_1(VAR_8, VAR_5);

 VAR_6 = FUNC_3(&VAR_7, VAR_4);
 if (VAR_6 != VAR_1) {
  FUNC_5("expecting left brace.");
  FUNC_7(VAR_4);
  return;
 }

 do {
  VAR_6 = FUNC_6(&VAR_7, VAR_4);
  if (VAR_6 == VAR_0) {
   FUNC_5("unterminated interface declaration.");
   return;
  }
  if (VAR_6 == VAR_2)
   break;
  FUNC_4(VAR_4, VAR_8, VAR_8->client->config);
 } while (1);
 VAR_6 = FUNC_3(&VAR_7, VAR_4);
}
