
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_10__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int protection; } ;
typedef TYPE_2__ apr_finfo_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (char const*,int *,scalar_t__*,int *) ;
 int FUNC_9 (TYPE_2__*,char const*,int ,int *) ;

svn_error_t *
FUNC_10(const char *VAR_2,
                  const char *VAR_3,
                  apr_pool_t *VAR_4)
{







  {
    apr_finfo_t VAR_5;
    svn_node_kind_t VAR_6;
    svn_boolean_t VAR_7;
    svn_error_t *VAR_8;


    FUNC_2(FUNC_8(VAR_3, &VAR_6, &VAR_7, VAR_4));
    if (VAR_7)
      return VAR_1;

    FUNC_2(FUNC_9(&VAR_5, VAR_2, VAR_0, VAR_4));
    VAR_8 = FUNC_4(VAR_3, VAR_5.protection, VAR_4);
    if (VAR_8)
      {





        if (FUNC_1(VAR_8->apr_err) ||
            FUNC_0(VAR_8->apr_err))
          FUNC_6(VAR_8);
        else
          {
            return FUNC_7(
                     VAR_8, FUNC_3("Can't set permissions on '%s'"),
                     FUNC_5(VAR_3, VAR_4));
          }
      }
  }


  return VAR_1;
}
