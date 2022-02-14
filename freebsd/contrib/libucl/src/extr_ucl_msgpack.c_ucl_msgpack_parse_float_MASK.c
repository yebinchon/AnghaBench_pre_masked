
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uiv64 ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {float dv; int iv; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_stack {int dummy; } ;
struct ucl_parser {TYPE_3__* cur_obj; TYPE_1__* chunks; } ;
typedef int ssize_t ;
typedef enum ucl_msgpack_format { ____Placeholder_ucl_msgpack_format } ucl_msgpack_format ;
struct TYPE_5__ {int priority; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char const*,int) ;


 TYPE_3__* FUNC_4 (int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_5 (struct ucl_parser *VAR_1,
  struct ucl_stack *VAR_2, size_t VAR_3, enum ucl_msgpack_format VAR_4,
  const unsigned char *VAR_5, size_t VAR_6)
{
 ucl_object_t *VAR_7;
 union {
  uint32_t i;
  float f;
 } VAR_8;
 uint64_t VAR_9;

 if (VAR_3 > VAR_6) {
  return -1;
 }

 VAR_7 = FUNC_4 (VAR_0, VAR_1->chunks->priority);

 switch (VAR_4) {
 case 129:
  FUNC_3(&VAR_8.i, VAR_5, sizeof(VAR_8.i));
  VAR_8.i = FUNC_0(VAR_8.i);

  VAR_7->value.dv = VAR_8.f;
  VAR_3 = 4;
  break;
 case 128:
  FUNC_3(&VAR_9, VAR_5, sizeof(VAR_9));
  VAR_9 = FUNC_1(VAR_9);
  VAR_7->value.iv = VAR_9;
  VAR_3 = 8;
  break;
 default:
  FUNC_2 (0);
  break;
 }

 VAR_1->cur_obj = VAR_7;

 return VAR_3;
}
