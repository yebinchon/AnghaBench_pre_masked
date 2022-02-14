
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
struct filter_arg {TYPE_1__ boolean; int type; } ;
struct event_format {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filter_arg* FUNC_0 () ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct event_format*,struct filter_arg**,char**,int ) ;
 int FUNC_3 (char**,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(struct event_format *VAR_2, const char *VAR_3,
       struct filter_arg **VAR_4, char **VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_3, FUNC_4(VAR_3));

 VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_5, 0);
 if (VAR_6 == 1) {
  FUNC_3(VAR_5,
      "Unbalanced number of ')'");
  return -1;
 }
 if (VAR_6 < 0)
  return VAR_6;


 if (!*VAR_4) {
  *VAR_4 = FUNC_0();
  (*VAR_4)->type = VAR_0;
  (*VAR_4)->boolean.value = VAR_1;
 }

 return 0;
}
