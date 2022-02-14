
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iv; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_stack {int dummy; } ;
struct ucl_parser {TYPE_3__* cur_obj; TYPE_1__* chunks; } ;
typedef int ssize_t ;
typedef enum ucl_msgpack_format { ____Placeholder_ucl_msgpack_format } ucl_msgpack_format ;
struct TYPE_5__ {int priority; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 TYPE_3__* FUNC_1 (int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_2 (struct ucl_parser *VAR_1,
  struct ucl_stack *VAR_2, size_t VAR_3, enum ucl_msgpack_format VAR_4,
  const unsigned char *VAR_5, size_t VAR_6)
{
 ucl_object_t *VAR_7;

 if (VAR_3 > VAR_6) {
  return -1;
 }

 VAR_7 = FUNC_1 (VAR_0, VAR_1->chunks->priority);

 switch (VAR_4) {
 case 128:
  VAR_7->value.iv = 1;
  break;
 case 129:
  VAR_7->value.iv = 0;
  break;
 default:
  FUNC_0 (0);
  break;
 }

 VAR_1->cur_obj = VAR_7;

 return 1;
}
