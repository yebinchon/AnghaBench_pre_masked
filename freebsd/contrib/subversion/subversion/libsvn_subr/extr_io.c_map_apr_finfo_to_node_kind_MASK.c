
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {scalar_t__ filetype; } ;
typedef TYPE_1__ apr_finfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_0(svn_node_kind_t *VAR_8,
                           svn_boolean_t *VAR_9,
                           apr_finfo_t *VAR_10)
{
  *VAR_9 = VAR_3;

  if (VAR_10->filetype == VAR_2)
    *VAR_8 = VAR_6;
  else if (VAR_10->filetype == VAR_0)
    *VAR_8 = VAR_5;
  else if (VAR_10->filetype == VAR_1)
    {
      *VAR_9 = VAR_4;
      *VAR_8 = VAR_6;
    }
  else
    *VAR_8 = VAR_7;
}
