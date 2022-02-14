
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_node_kind_t ;
struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (char const*,char const*,int ,void*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (scalar_t__,TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (char const*,int *,scalar_t__*,int *) ;
 int FUNC_11 (char const*,char const*,int ,int *) ;
 int FUNC_12 (char const*,char const*,int *) ;
 int VAR_3 ;
 int FUNC_13 (char const*,char const*,int ,int *) ;
 int FUNC_14 (char const*,int ,int *) ;
 int FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 (int *,int *,int ,void*,int *) ;
 int FUNC_17 (int **,char const*,int *,int *) ;
 int FUNC_18 (int **,char const**,int ,int ,int *,int *) ;
 int FUNC_19 (int **,char const*,int *,int *) ;
 int * FUNC_20 (int *,char const*,scalar_t__,int *,scalar_t__,int *) ;

svn_error_t *
FUNC_21(const char *VAR_4,
                              const char *VAR_5,
                              const char *VAR_6,
                              svn_boolean_t VAR_7,
                              apr_hash_t *VAR_8,
                              svn_boolean_t VAR_9,
                              svn_boolean_t VAR_10,
                              svn_cancel_func_t VAR_11,
                              void *VAR_12,
                              apr_pool_t *VAR_13)
{
  svn_stream_t *VAR_14;
  svn_stream_t *VAR_15;
  const char *VAR_16;
  svn_error_t *VAR_17;
  svn_node_kind_t VAR_18;
  svn_boolean_t VAR_19;

  FUNC_0(FUNC_10(VAR_4, &VAR_18, &VAR_19, VAR_13));



  if (VAR_10 || VAR_19)
    {
      if (VAR_9)
        {
          if (VAR_19)
            {
              FUNC_0(FUNC_19(&VAR_14, VAR_4, VAR_13, VAR_13));
            }
          else
            {
              FUNC_0(FUNC_17(&VAR_14, VAR_4, VAR_13, VAR_13));
            }

          FUNC_0(FUNC_3(VAR_14, VAR_5, VAR_13));

          return FUNC_9(FUNC_15(VAR_14));
        }


      return FUNC_9(FUNC_4(VAR_4, VAR_5,
                                                      VAR_11,
                                                      VAR_12,
                                                      VAR_13));
    }


  if (! (VAR_6 || (VAR_8 && (FUNC_2(VAR_8) > 0))))
    return FUNC_9(FUNC_11(VAR_4, VAR_5, VAR_0, VAR_13));


  FUNC_0(FUNC_17(&VAR_14, VAR_4, VAR_13, VAR_13));



  FUNC_0(FUNC_18(&VAR_15, &VAR_16,
                                 FUNC_5(VAR_5, VAR_13),
                                 VAR_3, VAR_13, VAR_13));

  VAR_15 = FUNC_20(VAR_15, VAR_6, VAR_7,
                                           VAR_8, VAR_9, VAR_13);


  VAR_17 = FUNC_16(VAR_14, VAR_15, VAR_11, VAR_12,
                         VAR_13);
  if (VAR_17)
    {

      if (VAR_17->apr_err == VAR_1)
        VAR_17 = FUNC_8(VAR_1, VAR_17,
                                FUNC_1("File '%s' has inconsistent newlines"),
                                FUNC_6(VAR_4, VAR_13));
      return FUNC_7(VAR_17, FUNC_14(VAR_16,
                                                               VAR_0, VAR_13));
    }


  FUNC_0(FUNC_13(VAR_16, VAR_5, VAR_0, VAR_13));


  FUNC_0(FUNC_12(VAR_4, VAR_5, VAR_13));

  return VAR_2;
}
