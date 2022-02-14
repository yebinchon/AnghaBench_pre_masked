
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_stack {int dummy; } ;
struct ucl_parser {int err; } ;
typedef int ssize_t ;
typedef enum ucl_msgpack_format { ____Placeholder_ucl_msgpack_format } ucl_msgpack_format ;
 int FUNC_0 (int *,char*,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_1 (struct ucl_parser *VAR_0,
  struct ucl_stack *VAR_1, size_t VAR_2, enum ucl_msgpack_format VAR_3,
  const unsigned char *VAR_4, size_t VAR_5)
{
 if (VAR_2 > VAR_5) {
  return -1;
 }

 switch (VAR_3) {
 case 132:
  VAR_2 = 2;
  break;
 case 130:
  VAR_2 = 3;
  break;
 case 129:
  VAR_2 = 5;
  break;
 case 128:
  VAR_2 = 9;
  break;
 case 131:
  VAR_2 = 17;
  break;
 case 133:
 case 135:
 case 134:
  VAR_2 = VAR_2 + 1;
  break;
 default:
  FUNC_0 (&VAR_0->err, "bad type: %x", (unsigned)VAR_3);
  return -1;
 }

 return VAR_2;
}
