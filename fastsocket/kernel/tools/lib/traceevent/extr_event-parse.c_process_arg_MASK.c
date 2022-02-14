
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_arg {int dummy; } ;
struct event_format {int dummy; } ;
typedef enum event_type { ____Placeholder_event_type } event_type ;


 int FUNC_0 (struct event_format*,struct print_arg*,char**,int) ;
 int FUNC_1 (char**) ;

__attribute__((used)) static enum event_type
FUNC_2(struct event_format *VAR_0, struct print_arg *VAR_1, char **VAR_2)
{
 enum event_type VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(&VAR_4);
 *VAR_2 = VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
