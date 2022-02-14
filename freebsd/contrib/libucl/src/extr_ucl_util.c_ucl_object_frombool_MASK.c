
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iv; } ;
struct TYPE_6__ {TYPE_1__ value; int type; } ;
typedef TYPE_2__ ucl_object_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;

ucl_object_t*
FUNC_1 (bool VAR_1)
{
 ucl_object_t *VAR_2;

 VAR_2 = FUNC_0 ();
 if (VAR_2 != ((void*)0)) {
  VAR_2->type = VAR_0;
  VAR_2->value.iv = VAR_1;
 }

 return VAR_2;
}
