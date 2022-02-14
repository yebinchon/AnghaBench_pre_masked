
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; } ;
struct TYPE_6__ {int attr; int type; TYPE_1__ value; } ;
typedef TYPE_2__ attr_val ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 TYPE_2__* FUNC_1 (int) ;
 char* FUNC_2 (char*) ;

attr_val *
FUNC_3(
 int VAR_1,
 const char *VAR_2
 )
{
 attr_val *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->attr = VAR_1;
 if (((void*)0) == VAR_2)
  VAR_2 = FUNC_2("");
 VAR_3->value.s = FUNC_0(VAR_2);
 VAR_3->type = VAR_0;

 return VAR_3;
}
