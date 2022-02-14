
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser {int const* comments; } ;



const ucl_object_t *
FUNC_0 (struct ucl_parser *VAR_0)
{
 if (VAR_0 && VAR_0->comments) {
  return VAR_0->comments;
 }

 return ((void*)0);
}
