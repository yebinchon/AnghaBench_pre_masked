
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_3__ {scalar_t__ err; scalar_t__ (* err_init_func ) (int ,int ) ;int pool; int baton; } ;
typedef TYPE_1__ init_baton_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_boolean_t FUNC_1(init_baton_t *VAR_1)
{
  VAR_1->err = VAR_1->err_init_func(VAR_1->baton,
                                              VAR_1->pool);
  return (VAR_1->err == VAR_0);
}
