
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_arg {int dummy; } ;
struct pevent_function_handler {int dummy; } ;
struct event_format {int pevent; } ;
typedef enum event_type { ____Placeholder_event_type } event_type ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 struct pevent_function_handler* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct event_format*,struct print_arg*,char**) ;
 int FUNC_4 (struct event_format*,struct print_arg*,char**) ;
 int FUNC_5 (struct event_format*,struct pevent_function_handler*,struct print_arg*,char**) ;
 int FUNC_6 (struct event_format*,struct print_arg*,char**) ;
 int FUNC_7 (struct event_format*,struct print_arg*,char**) ;
 int FUNC_8 (struct event_format*,struct print_arg*,char**) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static enum event_type
FUNC_10(struct event_format *VAR_3, struct print_arg *VAR_4,
   char *VAR_5, char **VAR_6)
{
 struct pevent_function_handler *VAR_7;

 if (FUNC_9(VAR_5, "__print_flags") == 0) {
  FUNC_2(VAR_5);
  VAR_1 = 1;
  return FUNC_4(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_9(VAR_5, "__print_symbolic") == 0) {
  FUNC_2(VAR_5);
  VAR_2 = 1;
  return FUNC_8(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_9(VAR_5, "__print_hex") == 0) {
  FUNC_2(VAR_5);
  return FUNC_6(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_9(VAR_5, "__get_str") == 0) {
  FUNC_2(VAR_5);
  return FUNC_7(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_9(VAR_5, "__get_dynamic_array") == 0) {
  FUNC_2(VAR_5);
  return FUNC_3(VAR_3, VAR_4, VAR_6);
 }

 VAR_7 = FUNC_1(VAR_3->pevent, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_5);
  return FUNC_5(VAR_3, VAR_7, VAR_4, VAR_6);
 }

 FUNC_0("function %s not defined", VAR_5);
 FUNC_2(VAR_5);
 return VAR_0;
}
