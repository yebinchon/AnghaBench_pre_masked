
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; } ;
struct filter_arg {TYPE_1__ value; } ;
struct event_filter {int dummy; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static char *FUNC_2(struct event_filter *VAR_0, struct filter_arg *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(30);

 FUNC_1(VAR_2, 30, "%lld", VAR_1->value.val);

 return VAR_2;
}
