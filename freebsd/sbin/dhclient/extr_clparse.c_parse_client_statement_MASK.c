
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {size_t code; } ;
struct interface_info {int hw_address; } ;
struct client_config {int script_name; int initial_interval; int backoff_cutoff; int reboot_timeout; int select_interval; int retry_interval; int timeout; int required_options; int requested_options; int requested_option_count; int media; int * default_actions; int * defaults; int * send_options; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char**,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct client_config*) ;
 int FUNC_5 (int *,int *) ;
 struct option* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct client_config*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *) ;

void
FUNC_13(FILE *VAR_5, struct interface_info *VAR_6,
    struct client_config *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 struct option *VAR_10;

 switch (FUNC_1(&VAR_9, VAR_5)) {
 case 130:
  FUNC_6(VAR_5, &VAR_7->send_options[0]);
  return;
 case 144:
  VAR_10 = FUNC_6(VAR_5, &VAR_7->defaults[0]);
  if (VAR_10)
   VAR_7->default_actions[VAR_10->code] = VAR_1;
  return;
 case 129:
  VAR_10 = FUNC_6(VAR_5, &VAR_7->defaults[0]);
  if (VAR_10)
   VAR_7->default_actions[VAR_10->code] =
       VAR_3;
  return;
 case 146:
  VAR_10 = FUNC_6(VAR_5, &VAR_7->defaults[0]);
  if (VAR_10)
   VAR_7->default_actions[VAR_10->code] = VAR_0;
  return;
 case 138:
  VAR_10 = FUNC_6(VAR_5, &VAR_7->defaults[0]);
  if (VAR_10)
   VAR_7->default_actions[VAR_10->code] = VAR_2;
  return;
 case 139:
  FUNC_10(VAR_5, &VAR_7->media, 1);
  return;
 case 143:
  if (VAR_6)
   FUNC_3(VAR_5, &VAR_6->hw_address);
  else {
   FUNC_11("hardware address parameter %s",
        "not allowed here.");
   FUNC_12(VAR_5);
  }
  return;
 case 135:
  VAR_7->requested_option_count =
   FUNC_7(VAR_5, VAR_7->requested_options);
  return;
 case 134:
  FUNC_0(VAR_7->required_options, 0,
      sizeof(VAR_7->required_options));
  FUNC_7(VAR_5, VAR_7->required_options);
  return;
 case 128:
  FUNC_5(VAR_5, &VAR_7->timeout);
  return;
 case 133:
  FUNC_5(VAR_5, &VAR_7->retry_interval);
  return;
 case 131:
  FUNC_5(VAR_5, &VAR_7->select_interval);
  return;
 case 137:
  FUNC_5(VAR_5, &VAR_7->reboot_timeout);
  return;
 case 145:
  FUNC_5(VAR_5, &VAR_7->backoff_cutoff);
  return;
 case 142:
  FUNC_5(VAR_5, &VAR_7->initial_interval);
  return;
 case 132:
  VAR_7->script_name = FUNC_9(VAR_5);
  return;
 case 141:
  if (VAR_6)
   FUNC_11("nested interface declaration.");
  FUNC_4(VAR_5, VAR_7);
  return;
 case 140:
  FUNC_2(VAR_5, 1);
  return;
 case 147:
  FUNC_2(VAR_5, 2);
  return;
 case 136:
  FUNC_8(VAR_5, VAR_7);
  return;
 default:
  FUNC_11("expecting a statement.");
  FUNC_12(VAR_5);
  break;
 }
 VAR_8 = FUNC_1(&VAR_9, VAR_5);
 if (VAR_8 != VAR_4) {
  FUNC_11("semicolon expected.");
  FUNC_12(VAR_5);
 }
}
