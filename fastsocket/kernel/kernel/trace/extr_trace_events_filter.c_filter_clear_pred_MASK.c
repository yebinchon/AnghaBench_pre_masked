
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct filter_pred {TYPE_1__ regex; int * field_name; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct filter_pred *VAR_0)
{
 FUNC_0(VAR_0->field_name);
 VAR_0->field_name = ((void*)0);
 VAR_0->regex.len = 0;
}
