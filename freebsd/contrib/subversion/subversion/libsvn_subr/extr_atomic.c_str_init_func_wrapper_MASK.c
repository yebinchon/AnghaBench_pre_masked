
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_3__ {int * errstr; int baton; int * (* str_init_func ) (int ) ;} ;
typedef TYPE_1__ init_baton_t ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static svn_boolean_t FUNC_1(init_baton_t *VAR_0)
{
  VAR_0->errstr = VAR_0->str_init_func(VAR_0->baton);
  return (VAR_0->errstr == ((void*)0));
}
