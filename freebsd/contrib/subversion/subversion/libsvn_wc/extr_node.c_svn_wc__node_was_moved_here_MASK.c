
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char const**,int *,int *,char const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_3(const char **VAR_2,
                            const char **VAR_3,
                            svn_wc_context_t *VAR_4,
                            const char *VAR_5,
                            apr_pool_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8;

  if (VAR_2)
    *VAR_2 = ((void*)0);
  if (VAR_3)
    *VAR_3 = ((void*)0);

  VAR_8 = FUNC_2(VAR_2, ((void*)0), ((void*)0),
                              VAR_3,
                              VAR_4->db, VAR_5,
                              VAR_6, VAR_7);

  if (VAR_8)
    {

      if (VAR_8->apr_err != VAR_0)
        return FUNC_1(VAR_8);


      FUNC_0(VAR_8);
      return VAR_1;
    }

  return VAR_1;
}
