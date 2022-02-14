
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expiration_date; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_boolean_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static svn_boolean_t FUNC_1(const svn_lock_t *VAR_0)
{
  return VAR_0->expiration_date && (FUNC_0() > VAR_0->expiration_date);
}
