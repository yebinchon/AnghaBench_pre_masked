
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filter_type {struct filter_arg* filter; } ;
struct TYPE_2__ {int value; } ;
struct filter_arg {TYPE_1__ boolean; int type; } ;
struct event_format {int id; } ;
struct event_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filter_type* FUNC_0 (struct event_filter*,int ) ;
 struct filter_arg* FUNC_1 () ;
 int FUNC_2 (struct filter_arg*) ;
 int FUNC_3 (struct event_format*,char const*,struct filter_arg**,char**) ;

__attribute__((used)) static int FUNC_4(struct event_filter *VAR_2,
   struct event_format *VAR_3,
   const char *VAR_4, char **VAR_5)
{
 struct filter_type *VAR_6;
 struct filter_arg *VAR_7;
 int VAR_8;

 if (VAR_4) {
  VAR_8 = FUNC_3(VAR_3, VAR_4, &VAR_7, VAR_5);
  if (VAR_8 < 0)
   return VAR_8;

 } else {

  VAR_7 = FUNC_1();
  VAR_7->type = VAR_0;
  VAR_7->boolean.value = VAR_1;
 }

 VAR_6 = FUNC_0(VAR_2, VAR_3->id);
 if (VAR_6->filter)
  FUNC_2(VAR_6->filter);
 VAR_6->filter = VAR_7;

 return 0;
}
