
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucl_parser {TYPE_1__* chunks; } ;
struct TYPE_2__ {int column; } ;



unsigned
FUNC_0(struct ucl_parser *VAR_0)
{
 if (VAR_0 == ((void*)0) || VAR_0->chunks == ((void*)0)) {
  return 0;
 }

 return VAR_0->chunks->column;
}
