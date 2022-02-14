
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char const* sv; } ;
struct TYPE_8__ {size_t len; int flags; int ** trash_stack; TYPE_2__ value; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_stack {int dummy; } ;
struct ucl_parser {int flags; TYPE_3__* cur_obj; TYPE_1__* chunks; } ;
typedef int ssize_t ;
typedef enum ucl_msgpack_format { ____Placeholder_ucl_msgpack_format } ucl_msgpack_format ;
struct TYPE_6__ {int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_4 (struct ucl_parser *VAR_6,
  struct ucl_stack *VAR_7, size_t VAR_8, enum ucl_msgpack_format VAR_9,
  const unsigned char *VAR_10, size_t VAR_11)
{
 ucl_object_t *VAR_12;

 if (VAR_8 > VAR_11) {
  return -1;
 }

 VAR_12 = FUNC_3 (VAR_2, VAR_6->chunks->priority);
 VAR_12->value.sv = VAR_10;
 VAR_12->len = VAR_8;

 if (VAR_9 >= VAR_5 && VAR_9 <= VAR_4) {
  VAR_12->flags |= VAR_0;
 }

 if (!(VAR_6->flags & VAR_1)) {
  if (VAR_12->flags & VAR_0) {
   VAR_12->trash_stack[VAR_3] = FUNC_0 (VAR_8);

   if (VAR_12->trash_stack[VAR_3] != ((void*)0)) {
    FUNC_1 (VAR_12->trash_stack[VAR_3], VAR_10, VAR_8);
   }
  }
  else {
   FUNC_2 (VAR_12);
  }
 }

 VAR_6->cur_obj = VAR_12;

 return VAR_8;
}
