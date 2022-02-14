
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int * db; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_20__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *,char const**,char const*,int *) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (scalar_t__,int *,int ,int ) ;
 TYPE_2__* FUNC_7 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int **,int *,int ,int ,int *,int *) ;
 TYPE_2__* FUNC_10 (TYPE_1__**,TYPE_1__*,char const*,int ,int,int ,void*,int *) ;

svn_error_t *
FUNC_11(svn_wc_adm_access_t **VAR_5,
                       svn_wc_adm_access_t *VAR_6,
                       const char *VAR_7,
                       svn_boolean_t VAR_8,
                       int VAR_9,
                       svn_cancel_func_t VAR_10,
                       void *VAR_11,
                       apr_pool_t *VAR_12)
{
  svn_error_t *VAR_13;
  const char *VAR_14;

  if (VAR_6 == ((void*)0))
    {
      svn_wc__db_t *VAR_15;


      FUNC_0(FUNC_9(&VAR_15,
                              ((void*)0) , VAR_0, VAR_3, VAR_12, VAR_12));
      VAR_13 = FUNC_2(VAR_15, &VAR_14, VAR_7, VAR_12);
      FUNC_4(FUNC_8(VAR_15));
      FUNC_0(VAR_13);
    }
  else
    {
      FUNC_0(FUNC_2(VAR_6->db, &VAR_14, VAR_7, VAR_12));
    }





  if (VAR_14 != VAR_7)
    VAR_9 = 0;

  VAR_13 = FUNC_10(VAR_5, VAR_6, VAR_14, VAR_8,
                         VAR_9, VAR_10, VAR_11, VAR_12);
  if (VAR_13)
    {
      svn_error_t *VAR_16;






      svn_node_kind_t VAR_17;
      if ((VAR_16 = FUNC_7(VAR_7, &VAR_17, VAR_12)))
        {
          FUNC_5(VAR_13, VAR_16);
          return VAR_13;
        }

      if ((VAR_14 != VAR_7)
          && (VAR_17 == VAR_4)
          && (VAR_13->apr_err == VAR_1))
        {
          FUNC_4(VAR_13);
          return FUNC_6(VAR_1, ((void*)0),
                                   FUNC_1("'%s' is not a working copy"),
                                   FUNC_3(VAR_7, VAR_12));
        }

      return VAR_13;
    }

  return VAR_2;
}
