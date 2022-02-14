
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int flags; int keylen; int key; } ;
typedef TYPE_3__ ucl_object_t ;
typedef int ucl_hash_t ;
struct ucl_parser {int flags; TYPE_2__* stack; } ;
struct TYPE_14__ {TYPE_1__* obj; } ;
struct TYPE_13__ {int len; } ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct ucl_parser *VAR_3, ucl_hash_t *VAR_4,
  ucl_object_t *VAR_5,
  ucl_object_t *VAR_6)
{
 ucl_object_t *VAR_7;

 if ((VAR_3->flags & VAR_2) == 0) {

  VAR_5->flags |= VAR_1;
  FUNC_0 (VAR_5, VAR_6);
  VAR_3->stack->obj->len ++;
 }
 else {
  if ((VAR_5->flags & VAR_1) != 0) {

   FUNC_1 (VAR_5, VAR_6);
  }
  else {

   VAR_7 = FUNC_3 (VAR_0);
   VAR_7->key = VAR_5->key;
   VAR_7->keylen = VAR_5->keylen;
   VAR_7->flags |= VAR_1;
   FUNC_1 (VAR_7, VAR_5);
   FUNC_1 (VAR_7, VAR_6);
   FUNC_2 (VAR_4, VAR_5, VAR_7);
  }
 }
}
