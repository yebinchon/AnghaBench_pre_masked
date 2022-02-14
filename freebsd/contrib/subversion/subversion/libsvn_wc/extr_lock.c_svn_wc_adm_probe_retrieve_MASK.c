
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int db; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int ,char const**,char const*,int *) ;
 char* FUNC_3 (char const*,int *) ;
 TYPE_2__* FUNC_4 (char const**,char const*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_7 (scalar_t__*,int ,char const*,int ,int ,int ,int *) ;
 TYPE_2__* FUNC_8 (TYPE_1__**,TYPE_1__*,char const*,int *) ;

svn_error_t *
FUNC_9(svn_wc_adm_access_t **VAR_6,
                          svn_wc_adm_access_t *VAR_7,
                          const char *VAR_8,
                          apr_pool_t *VAR_9)
{
  const char *VAR_10;
  const char *VAR_11;
  svn_node_kind_t VAR_12;
  svn_error_t *VAR_13;

  FUNC_1(VAR_7 != ((void*)0));

  FUNC_0(FUNC_4(&VAR_11, VAR_8, VAR_9));
  FUNC_0(FUNC_7(&VAR_12, VAR_7->db, VAR_11,
                               VAR_3 ,
                               VAR_3 ,
                               VAR_0 ,
                               VAR_9));

  if (VAR_12 == VAR_4)
    VAR_10 = VAR_8;
  else if (VAR_12 != VAR_5)
    VAR_10 = FUNC_3(VAR_8, VAR_9);
  else

    FUNC_0(FUNC_2(VAR_7->db, &VAR_10, VAR_8, VAR_9));

  VAR_13 = FUNC_8(VAR_6, VAR_7, VAR_10, VAR_9);
  if (VAR_13 && VAR_13->apr_err == VAR_1)
    {





      FUNC_5(VAR_13);
      FUNC_0(FUNC_2(VAR_7->db, &VAR_10, VAR_8, VAR_9));
      FUNC_0(FUNC_8(VAR_6, VAR_7, VAR_10, VAR_9));
    }
  else
    return FUNC_6(VAR_13);

  return VAR_2;
}
