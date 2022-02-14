
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*) ;
 int VAR_6 ;
 int * FUNC_2 (void const*,int ,int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 void* FUNC_4 (int *,int,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int const**,int *,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_boolean_t *VAR_7,
                 const apr_array_header_t **VAR_8,
                 svn_boolean_t *VAR_9,
                 svn_node_kind_t *VAR_10,
                 svn_wc__db_wcroot_t *VAR_11,
                 const char *VAR_12,
                 svn_wc__db_t *VAR_13,
                 apr_pool_t *VAR_14,
                 apr_pool_t *VAR_15)
{
  svn_sqlite__stmt_t *VAR_16;
  svn_boolean_t VAR_17;

  *VAR_7 = VAR_0;
  *VAR_8 = ((void*)0);
  *VAR_9 = VAR_0;
  *VAR_10 = VAR_6;

  FUNC_0(FUNC_9(&VAR_16, VAR_11->sdb,
                                    VAR_2));
  FUNC_0(FUNC_3(VAR_16, "s", VAR_12));
  FUNC_0(FUNC_11(&VAR_17, VAR_16));
  if (VAR_17)
    {
      svn_boolean_t VAR_18 = FUNC_5(VAR_16, 0);
      svn_boolean_t VAR_19 = VAR_0;

      if (VAR_18)
        {
          apr_size_t VAR_20;
          const void *VAR_21;

          VAR_21 = FUNC_4(VAR_16, 5, &VAR_20,
                                                  VAR_15);
          if (VAR_21)
            {
              svn_skel_t *VAR_22 = FUNC_2(VAR_21,
                                                      VAR_20,
                                                      VAR_15);

              FUNC_0(FUNC_13(VAR_8,
                                                    VAR_13, VAR_11->abspath,
                                                    VAR_22,
                                                    VAR_14,
                                                    VAR_15));
            }

          if (!FUNC_7(VAR_16, 1))
            *VAR_7 = VAR_4;

          FUNC_0(FUNC_11(&VAR_19, VAR_16));
        }

      if (!VAR_18 || VAR_19)
        {
          *VAR_7 = VAR_4;
          if (!FUNC_7(VAR_16, 4))
            {
              int VAR_23 = FUNC_6(VAR_16, 3);
              *VAR_9 = (VAR_23 == FUNC_1(VAR_12));
            }
          *VAR_10 = FUNC_8(VAR_16, 2, VAR_5);
        }

    }
  FUNC_0(FUNC_10(VAR_16));

  if (VAR_17)
    {
      FUNC_0(FUNC_9(&VAR_16, VAR_11->sdb,
                                        VAR_1));
      FUNC_0(FUNC_3(VAR_16, "s", VAR_12));
      FUNC_0(FUNC_12(VAR_16));
    }

  return VAR_3;
}
