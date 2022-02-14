
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {unsigned char const* key; size_t keylen; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_stack {int level; TYPE_5__* obj; } ;
struct ucl_parser {int flags; int err; struct ucl_stack* stack; } ;
struct TYPE_8__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct ucl_parser*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_5 (struct ucl_parser *VAR_4,
  const unsigned char *VAR_5,
  size_t VAR_6, ucl_object_t *VAR_7)
{
 uint64_t VAR_8;
 struct ucl_stack *VAR_9;

 VAR_9 = VAR_4->stack;
 FUNC_0 (VAR_9 != ((void*)0));
 FUNC_0 (VAR_9->level > 0);
 FUNC_0 (VAR_7 != ((void*)0));
 FUNC_0 (VAR_9->obj != ((void*)0));

 if (VAR_9->obj->type == VAR_1) {
  FUNC_1 (VAR_9->obj, VAR_7);
 }
 else if (VAR_9->obj->type == VAR_2) {
  if (VAR_5 == ((void*)0) || VAR_6 == 0) {
   FUNC_3 (&VAR_4->err, "cannot insert object with no key");
   return 0;
  }

  VAR_7->key = VAR_5;
  VAR_7->keylen = VAR_6;

  if (!(VAR_4->flags & VAR_3)) {
   FUNC_2 (VAR_7);
  }

  FUNC_4 (VAR_4, VAR_7);
 }
 else {
  FUNC_3 (&VAR_4->err, "bad container type");
  return 0;
 }

 if (VAR_9->level & VAR_0) {
  VAR_8 = VAR_9->level & ~VAR_0;
  VAR_9->level = (VAR_8 - 1) | VAR_0;
 }

 return 1;
}
