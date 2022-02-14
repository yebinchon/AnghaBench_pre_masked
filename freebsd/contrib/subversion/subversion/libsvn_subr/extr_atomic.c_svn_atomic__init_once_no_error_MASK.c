
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_atomic_t ;
typedef int svn_atomic__str_init_func_t ;
struct TYPE_3__ {char const* errstr; void* baton; int str_init_func; } ;
typedef TYPE_1__ init_baton_t ;


 scalar_t__ FUNC_0 (int volatile*,int ,TYPE_1__*) ;
 int VAR_0 ;

const char *
FUNC_1(volatile svn_atomic_t *VAR_1,
                               svn_atomic__str_init_func_t VAR_2,
                               void *VAR_3)
{
  init_baton_t VAR_4;
  VAR_4.str_init_func = VAR_2;
  VAR_4.errstr = ((void*)0);
  VAR_4.baton = VAR_3;

  if (FUNC_0(VAR_1, VAR_0, &VAR_4))
    return ((void*)0);



  if (!VAR_4.errstr)
    return "Couldn't perform atomic initialization";
  else
    return VAR_4.errstr;
}
