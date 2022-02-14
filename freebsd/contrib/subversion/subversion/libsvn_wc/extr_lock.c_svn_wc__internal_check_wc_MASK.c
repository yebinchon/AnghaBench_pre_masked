
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int *,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* FUNC_7 (int*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;



 TYPE_1__* FUNC_8 (int*,int *,char const*,int *) ;

svn_error_t *
FUNC_9(int *VAR_9,
                          svn_wc__db_t *VAR_10,
                          const char *VAR_11,
                          svn_boolean_t VAR_12,
                          apr_pool_t *VAR_13)
{
  svn_error_t *VAR_14;

  VAR_14 = FUNC_8(VAR_9, VAR_10, VAR_11, VAR_13);
  if (VAR_14)
    {
      svn_node_kind_t VAR_15;

      if (VAR_14->apr_err != VAR_1 &&
          VAR_14->apr_err != VAR_3 &&
          VAR_14->apr_err != VAR_4)
        return FUNC_5(VAR_14);
      FUNC_3(VAR_14);
      *VAR_9 = 0;


      FUNC_0(FUNC_6(VAR_11, &VAR_15, VAR_13));
      if (VAR_15 == VAR_8)
        {
          return FUNC_4(VAR_0, ((void*)0), FUNC_1("'%s' does not exist"),
                                   FUNC_2(VAR_11,
                                                          VAR_13));
        }
    }

  if (*VAR_9 >= VAR_6)
    {
      svn_wc__db_status_t VAR_16;
      svn_node_kind_t VAR_17;

      if (VAR_12)
        {



          svn_node_kind_t VAR_18;

          FUNC_0(FUNC_6(VAR_11, &VAR_18, VAR_13));
          if (VAR_18 != VAR_7)
            {
              *VAR_9 = 0;
              return VAR_5;
            }
        }

      VAR_14 = FUNC_7(&VAR_16, &VAR_17, ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0),
                                 VAR_10, VAR_11,
                                 VAR_13, VAR_13);

      if (VAR_14 && VAR_14->apr_err == VAR_2)
        {
          FUNC_3(VAR_14);
          *VAR_9 = 0;
          return VAR_5;
        }
      else
        FUNC_0(VAR_14);

      if (VAR_17 != VAR_7)
        {


          *VAR_9 = 0;
          return VAR_5;
        }

      switch (VAR_16)
        {
          case 129:
          case 128:
          case 130:


            *VAR_9 = 0;
            return VAR_5;
          default:
            break;
        }
    }

  return VAR_5;
}
