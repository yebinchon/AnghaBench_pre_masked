
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum dtor_kinds { ____Placeholder_dtor_kinds } dtor_kinds ;
struct TYPE_2__ {int (* is_destructor_name ) (char const*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;

enum dtor_kinds
FUNC_2 (const char *VAR_1)
{
  if ((VAR_0.is_destructor_name) == ((void*)0))
    FUNC_0 ("ABI doesn't define required function is_destructor_name");
  return (*VAR_0.is_destructor_name) (VAR_1);
}
