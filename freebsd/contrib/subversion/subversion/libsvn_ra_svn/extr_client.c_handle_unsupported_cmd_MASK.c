
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *FUNC_2(svn_error_t *VAR_2,
                                           const char *VAR_3)
{
  if (VAR_2 && VAR_2->apr_err == VAR_1)
    return FUNC_1(VAR_0, VAR_2,
                            FUNC_0(VAR_3));
  return VAR_2;
}
