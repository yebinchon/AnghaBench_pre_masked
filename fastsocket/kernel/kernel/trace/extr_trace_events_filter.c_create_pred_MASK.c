
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pattern; int len; } ;
struct filter_pred {int op; TYPE_1__ regex; int field_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct filter_pred*) ;
 int FUNC_1 (char*,int ) ;
 struct filter_pred* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct filter_pred *FUNC_5(int VAR_1, char *VAR_2, char *VAR_3)
{
 struct filter_pred *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->field_name = FUNC_1(VAR_2, VAR_0);
 if (!VAR_4->field_name) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 FUNC_3(VAR_4->regex.pattern, VAR_3);
 VAR_4->regex.len = FUNC_4(VAR_4->regex.pattern);

 VAR_4->op = VAR_1;

 return VAR_4;
}
