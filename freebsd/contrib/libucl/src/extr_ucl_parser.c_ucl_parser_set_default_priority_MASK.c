
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {unsigned int default_priority; } ;



bool
FUNC_0 (struct ucl_parser *VAR_0, unsigned VAR_1)
{
 if (VAR_0 == ((void*)0)) {
  return 0;
 }

 VAR_0->default_priority = VAR_1;

 return 1;
}
