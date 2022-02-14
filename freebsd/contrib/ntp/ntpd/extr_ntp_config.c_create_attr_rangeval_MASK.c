
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int first; int last; } ;
struct TYPE_7__ {TYPE_1__ r; } ;
struct TYPE_8__ {int attr; int type; TYPE_2__ value; } ;
typedef TYPE_3__ attr_val ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;

attr_val *
FUNC_1(
 int VAR_1,
 int VAR_2,
 int VAR_3
 )
{
 attr_val *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 VAR_4->attr = VAR_1;
 VAR_4->value.r.first = VAR_2;
 VAR_4->value.r.last = VAR_3;
 VAR_4->type = VAR_0;

 return VAR_4;
}
