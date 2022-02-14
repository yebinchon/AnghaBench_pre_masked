
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_stack {int obj; } ;
struct ucl_parser {int cur_obj; } ;
typedef int ssize_t ;
typedef enum ucl_msgpack_format { ____Placeholder_ucl_msgpack_format } ucl_msgpack_format ;



__attribute__((used)) static ssize_t
FUNC_0 (struct ucl_parser *VAR_0,
  struct ucl_stack *VAR_1, size_t VAR_2, enum ucl_msgpack_format VAR_3,
  const unsigned char *VAR_4, size_t VAR_5)
{
 VAR_1->obj = VAR_0->cur_obj;

 return 0;
}
