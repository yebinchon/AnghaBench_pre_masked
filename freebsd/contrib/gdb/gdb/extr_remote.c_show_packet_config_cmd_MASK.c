
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_config {int support; int detect; int title; int name; } ;
 int FUNC_0 (char*,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_1 (struct packet_config *VAR_0)
{
  char *VAR_1 = "internal-error";
  switch (VAR_0->support)
    {
    case 129:
      VAR_1 = "enabled";
      break;
    case 130:
      VAR_1 = "disabled";
      break;
    case 128:
      VAR_1 = "unknown";
      break;
    }
  switch (VAR_0->detect)
    {
    case 133:
      FUNC_0 ("Support for remote protocol `%s' (%s) packet is auto-detected, currently %s.\n",
         VAR_0->name, VAR_0->title, VAR_1);
      break;
    case 131:
    case 132:
      FUNC_0 ("Support for remote protocol `%s' (%s) packet is currently %s.\n",
         VAR_0->name, VAR_0->title, VAR_1);
      break;
    }
}
