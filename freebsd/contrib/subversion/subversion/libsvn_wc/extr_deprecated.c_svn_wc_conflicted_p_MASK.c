
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prejfile; scalar_t__ conflict_wrk; scalar_t__ conflict_new; scalar_t__ conflict_old; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (char const*,scalar_t__,int *) ;
 int FUNC_2 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_3,
                    svn_boolean_t *VAR_4,
                    const char *VAR_5,
                    const svn_wc_entry_t *VAR_6,
                    apr_pool_t *VAR_7)
{
  svn_node_kind_t VAR_8;
  const char *VAR_9;

  *VAR_3 = VAR_0;
  *VAR_4 = VAR_0;

  if (VAR_6->conflict_old)
    {
      VAR_9 = FUNC_1(VAR_5, VAR_6->conflict_old, VAR_7);
      FUNC_0(FUNC_2(VAR_9, &VAR_8, VAR_7));
      *VAR_3 = (VAR_8 == VAR_2);
    }

  if ((! *VAR_3) && (VAR_6->conflict_new))
    {
      VAR_9 = FUNC_1(VAR_5, VAR_6->conflict_new, VAR_7);
      FUNC_0(FUNC_2(VAR_9, &VAR_8, VAR_7));
      *VAR_3 = (VAR_8 == VAR_2);
    }

  if ((! *VAR_3) && (VAR_6->conflict_wrk))
    {
      VAR_9 = FUNC_1(VAR_5, VAR_6->conflict_wrk, VAR_7);
      FUNC_0(FUNC_2(VAR_9, &VAR_8, VAR_7));
      *VAR_3 = (VAR_8 == VAR_2);
    }

  if (VAR_6->prejfile)
    {
      VAR_9 = FUNC_1(VAR_5, VAR_6->prejfile, VAR_7);
      FUNC_0(FUNC_2(VAR_9, &VAR_8, VAR_7));
      *VAR_4 = (VAR_8 == VAR_2);
    }

  return VAR_1;
}
