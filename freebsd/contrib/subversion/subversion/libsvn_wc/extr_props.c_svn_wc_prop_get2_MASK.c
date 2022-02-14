
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_string_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef enum svn_prop_kind { ____Placeholder_svn_prop_kind } svn_prop_kind ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,int *,int ,char const*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (char const*) ;
 TYPE_2__* FUNC_7 (int const**,int ,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_8(const svn_string_t **VAR_4,
                 svn_wc_context_t *VAR_5,
                 const char *VAR_6,
                 const char *VAR_7,
                 apr_pool_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  enum svn_prop_kind VAR_10 = FUNC_6(VAR_7);
  svn_error_t *VAR_11;

  FUNC_0(FUNC_2(VAR_6));

  if (VAR_10 == VAR_3)
    {

      return FUNC_4(VAR_0, ((void*)0),
                               FUNC_1("Property '%s' is an entry property"), VAR_7);
    }

  VAR_11 = FUNC_7(VAR_4, VAR_5->db, VAR_6, VAR_7,
                                 VAR_8, VAR_9);

  if (VAR_11)
    {
      if (VAR_11->apr_err != VAR_1)
        return FUNC_5(VAR_11);

      FUNC_3(VAR_11);

      *VAR_4 = ((void*)0);
    }

  return VAR_2;
}
