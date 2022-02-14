
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_context {int dummy; } ;
typedef enum ucl_emitter { ____Placeholder_ucl_emitter } ucl_emitter ;


 int VAR_0 ;
 int VAR_1 ;
 struct ucl_emitter_context const* VAR_2 ;

const struct ucl_emitter_context *
FUNC_0 (enum ucl_emitter VAR_3)
{
 if (VAR_3 >= VAR_0 && VAR_3 < VAR_1) {
  return &VAR_2[VAR_3];
 }

 return ((void*)0);
}
