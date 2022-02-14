
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
struct filter_arg {TYPE_1__ boolean; int type; } ;
typedef enum filter_vals { ____Placeholder_filter_vals } filter_vals ;


 int VAR_0 ;



 struct filter_arg* FUNC_0 () ;
 int FUNC_1 (struct filter_arg*) ;
 int FUNC_2 (struct filter_arg*,struct filter_arg*) ;

__attribute__((used)) static struct filter_arg *FUNC_3(struct filter_arg *VAR_1)
{
 enum filter_vals VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_1);
 switch (VAR_2) {
 case 129:
  return VAR_1;

 case 128:
 case 130:
  FUNC_1(VAR_1);
  VAR_1 = FUNC_0();
  VAR_1->type = VAR_0;
  VAR_1->boolean.value = VAR_2 == 128;
 }

 return VAR_1;
}
