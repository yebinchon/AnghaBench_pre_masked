
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uiv64 ;
typedef int uiv32 ;
typedef int uiv16 ;
typedef void* uint64_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_6__ {unsigned char iv; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_stack {int dummy; } ;
struct ucl_parser {TYPE_3__* cur_obj; TYPE_1__* chunks; } ;
typedef int ssize_t ;
typedef int iv8 ;
typedef int iv64 ;
typedef int iv32 ;
typedef int iv16 ;
typedef void* int8_t ;
typedef void* int64_t ;
typedef void* int32_t ;
typedef void* int16_t ;
typedef enum ucl_msgpack_format { ____Placeholder_ucl_msgpack_format } ucl_msgpack_format ;
struct TYPE_5__ {int priority; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void**,unsigned char const*,int) ;
 TYPE_3__* FUNC_5 (int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_6 (struct ucl_parser *VAR_1,
  struct ucl_stack *VAR_2, size_t VAR_3, enum ucl_msgpack_format VAR_4,
  const unsigned char *VAR_5, size_t VAR_6)
{
 ucl_object_t *VAR_7;
 int8_t VAR_8;
 int16_t VAR_9;
 int32_t VAR_10;
 int64_t VAR_11;
 uint16_t VAR_12;
 uint32_t VAR_13;
 uint64_t VAR_14;


 if (VAR_3 > VAR_6) {
  return -1;
 }

 VAR_7 = FUNC_5 (VAR_0, VAR_1->chunks->priority);

 switch (VAR_4) {
 case 132:
  VAR_7->value.iv = (*VAR_5 & 0x7f);
  VAR_3 = 1;
  break;
 case 133:
  VAR_7->value.iv = - (*VAR_5 & 0x1f);
  VAR_3 = 1;
  break;
 case 128:
  VAR_7->value.iv = (unsigned char)*VAR_5;
  VAR_3 = 1;
  break;
 case 134:
  FUNC_4 (&VAR_8, VAR_5, sizeof (VAR_8));
  VAR_7->value.iv = VAR_8;
  VAR_3 = 1;
  break;
 case 137:
  FUNC_4 (&VAR_9, VAR_5, sizeof (VAR_9));
  VAR_9 = FUNC_0 (VAR_9);
  VAR_7->value.iv = VAR_9;
  VAR_3 = 2;
  break;
 case 131:
  FUNC_4 (&VAR_12, VAR_5, sizeof (VAR_12));
  VAR_12 = FUNC_0 (VAR_12);
  VAR_7->value.iv = VAR_12;
  VAR_3 = 2;
  break;
 case 136:
  FUNC_4 (&VAR_10, VAR_5, sizeof (VAR_10));
  VAR_10 = FUNC_1 (VAR_10);
  VAR_7->value.iv = VAR_10;
  VAR_3 = 4;
  break;
 case 130:
  FUNC_4(&VAR_13, VAR_5, sizeof(VAR_13));
  VAR_13 = FUNC_1(VAR_13);
  VAR_7->value.iv = VAR_13;
  VAR_3 = 4;
  break;
 case 135:
  FUNC_4 (&VAR_11, VAR_5, sizeof (VAR_11));
  VAR_11 = FUNC_2 (VAR_11);
  VAR_7->value.iv = VAR_11;
  VAR_3 = 8;
  break;
 case 129:
  FUNC_4(&VAR_14, VAR_5, sizeof(VAR_14));
  VAR_14 = FUNC_2(VAR_14);
  VAR_7->value.iv = VAR_14;
  VAR_3 = 8;
  break;
 default:
  FUNC_3 (0);
  break;
 }

 VAR_1->cur_obj = VAR_7;

 return VAR_3;
}
