
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ov; } ;
struct TYPE_8__ {scalar_t__ type; char const* key; size_t keylen; TYPE_1__ value; } ;
typedef TYPE_2__ ucl_object_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;

const ucl_object_t *
FUNC_1 (const ucl_object_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
 const ucl_object_t *VAR_4;
 ucl_object_t VAR_5;

 if (VAR_1 == ((void*)0) || VAR_1->type != VAR_0 || VAR_2 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_5.key = VAR_2;
 VAR_5.keylen = VAR_3;
 VAR_4 = FUNC_0 (VAR_1->value.ov, &VAR_5);

 return VAR_4;
}
