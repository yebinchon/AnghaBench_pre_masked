
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i; } ;
struct TYPE_6__ {int attr; int type; TYPE_1__ value; } ;
typedef TYPE_2__ attr_val ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

attr_val *
FUNC_1(
 int VAR_1,
 int VAR_2
 )
{
 attr_val *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 VAR_3->attr = VAR_1;
 VAR_3->value.i = VAR_2;
 VAR_3->type = VAR_0;

 return VAR_3;
}
