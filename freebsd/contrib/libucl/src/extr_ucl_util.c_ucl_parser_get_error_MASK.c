
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int * err; } ;


 char const* FUNC_0 (int *) ;

const char *
FUNC_1(struct ucl_parser *VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_0->err == ((void*)0)) {
  return ((void*)0);
 }

 return FUNC_0 (VAR_0->err);
}
