
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keylen; int key; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_emitter_context {int dummy; } ;


 int FUNC_0 (struct ucl_emitter_context*,int ,int ) ;

void
FUNC_1 (bool VAR_0, struct ucl_emitter_context *VAR_1,
  const ucl_object_t *VAR_2)
{
 if (VAR_0) {
  FUNC_0 (VAR_1, VAR_2->key, VAR_2->keylen);
 }
}
