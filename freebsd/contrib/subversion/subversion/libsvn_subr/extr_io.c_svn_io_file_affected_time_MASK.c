
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int mtime; } ;
typedef TYPE_1__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*,char const*,int,int *) ;

svn_error_t *
FUNC_2(apr_time_t *VAR_3,
                          const char *VAR_4,
                          apr_pool_t *VAR_5)
{
  apr_finfo_t VAR_6;

  FUNC_0(FUNC_1(&VAR_6, VAR_4, VAR_1 | VAR_0, VAR_5));

  *VAR_3 = VAR_6.mtime;

  return VAR_2;
}
