
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* digest; int kind; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static const char *
FUNC_1(const unsigned char *VAR_0,
              svn_checksum_kind_t VAR_1,
              svn_boolean_t VAR_2,
              apr_pool_t *VAR_3)
{
  svn_checksum_t VAR_4;
  VAR_4.digest = VAR_0;
  VAR_4.kind = VAR_1;

  if (VAR_2)
    return "(null)";

  return FUNC_0(&VAR_4, VAR_3);
}
