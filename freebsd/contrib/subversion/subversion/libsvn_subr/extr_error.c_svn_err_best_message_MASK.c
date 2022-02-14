
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* message; int apr_err; struct TYPE_4__* child; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_size_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 char const* FUNC_1 (int ,char*,int ) ;

const char *
FUNC_2(const svn_error_t *VAR_0, char *VAR_1, apr_size_t VAR_2)
{

  while (FUNC_0(VAR_0))
    VAR_0 = VAR_0->child;
  if (VAR_0->message)
    return VAR_0->message;
  else
    return FUNC_1(VAR_0->apr_err, VAR_1, VAR_2);
}
