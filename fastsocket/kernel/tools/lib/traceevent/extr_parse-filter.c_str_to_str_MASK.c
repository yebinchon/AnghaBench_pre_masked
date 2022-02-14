
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; char* val; TYPE_1__* field; } ;
struct filter_arg {TYPE_2__ str; } ;
struct event_filter {int dummy; } ;
struct TYPE_3__ {char* name; } ;






 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(struct event_filter *VAR_0, struct filter_arg *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 int VAR_4;

 switch (VAR_1->str.type) {
 case 131:
  VAR_3 = "==";

 case 130:
  if (!VAR_3)
   VAR_3 = "!=";

 case 128:
  if (!VAR_3)
   VAR_3 = "=~";

 case 129:
  if (!VAR_3)
   VAR_3 = "!~";

  VAR_4 = FUNC_2(VAR_1->str.field->name) + FUNC_2(VAR_3) +
   FUNC_2(VAR_1->str.val) + 6;
  VAR_2 = FUNC_0(VAR_4);
  FUNC_1(VAR_2, VAR_4, "%s %s \"%s\"",
    VAR_1->str.field->name,
    VAR_3, VAR_1->str.val);
  break;

 default:

  break;
 }
 return VAR_2;
}
