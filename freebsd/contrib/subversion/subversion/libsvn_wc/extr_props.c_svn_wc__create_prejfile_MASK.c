
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef int svn_wc__db_t ;
struct TYPE_17__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_18__ {struct TYPE_18__* next; TYPE_1__* children; } ;
typedef TYPE_3__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_16__ {TYPE_3__* next; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *,char const*) ;
 int FUNC_5 (TYPE_2__ const**,TYPE_3__ const*,int ,void*,int *,int *) ;
 int FUNC_6 (TYPE_2__ const**,char const*,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*,int ,void*,int *,int *) ;
 TYPE_2__* FUNC_7 (int *,char const*) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char const**,char const*,int ,int *,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (scalar_t__*,int *,int *,int *,int *,int *,char const*,TYPE_3__*,int *,int *) ;
 int FUNC_15 (int *,int **,int **,int **,int **,int *,char const*,TYPE_3__*,int *,int *) ;
 int FUNC_16 (TYPE_3__**,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_17 (int **,int *,char const*,int *,int *) ;
 int FUNC_18 (char const**,int *,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_19(const char **VAR_3,
                        svn_wc__db_t *VAR_4,
                        const char *VAR_5,
                        const svn_skel_t *VAR_6,
                        svn_cancel_func_t VAR_7,
                        void *VAR_8,
                        apr_pool_t *VAR_9,
                        apr_pool_t *VAR_10)
{
  const char *VAR_11;
  svn_stream_t *VAR_12;
  const char *VAR_13;
  apr_pool_t *VAR_14 = FUNC_9(VAR_10);
  const svn_skel_t *VAR_15;

  FUNC_0(FUNC_18(&VAR_11,
                                         VAR_4, VAR_5,
                                         VAR_14, VAR_14));

  FUNC_0(FUNC_12(&VAR_12, &VAR_13,
                                 VAR_11, VAR_1,
                                 VAR_10, VAR_14));

  if (VAR_6)
    {
      for (VAR_15 = VAR_6->children->next;
            VAR_15 != ((void*)0); VAR_15 = VAR_15->next)
        {
          const svn_string_t *VAR_16;

          FUNC_8(VAR_14);

          FUNC_0(FUNC_5(&VAR_16, VAR_15,
                                          VAR_7, VAR_8,
                                          VAR_14, VAR_14));

          FUNC_0(FUNC_13(VAR_12, VAR_16->data));
        }
    }
  else
    {
      svn_wc_operation_t VAR_17;
      apr_hash_index_t *VAR_18;
      apr_hash_t *VAR_19;
      apr_hash_t *VAR_20;
      apr_hash_t *VAR_21;
      apr_hash_t *VAR_22;
      apr_hash_t *VAR_23;
      svn_skel_t *VAR_24;

      FUNC_0(FUNC_16(&VAR_24, ((void*)0), ((void*)0),
                                       VAR_4, VAR_5,
                                      VAR_10, VAR_10));

      FUNC_0(FUNC_14(&VAR_17, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         VAR_4, VAR_5,
                                         VAR_24,
                                         VAR_10, VAR_10));

      FUNC_0(FUNC_15(((void*)0),
                                                  &VAR_20,
                                                  &VAR_21,
                                                  &VAR_22,
                                                  &VAR_23,
                                                  VAR_4, VAR_5,
                                                  VAR_24,
                                                  VAR_10,
                                                  VAR_10));

      if (VAR_17 == VAR_2)
        FUNC_0(FUNC_17(&VAR_19, VAR_4, VAR_5,
                                                VAR_10, VAR_10));
      else
        VAR_19 = VAR_21;


      for (VAR_18 = FUNC_1(VAR_10, VAR_23);
           VAR_18;
           VAR_18 = FUNC_2(VAR_18))
        {
          const svn_string_t *VAR_25;
          const char *VAR_26 = FUNC_3(VAR_18);
          const svn_string_t *VAR_27;
          const svn_string_t *VAR_28;
          const svn_string_t *VAR_29;
          const svn_string_t *VAR_30;

          FUNC_8(VAR_14);

          VAR_27 = VAR_19 ? FUNC_7(VAR_19, VAR_26) : ((void*)0);
          VAR_28 = VAR_20 ? FUNC_7(VAR_20, VAR_26) : ((void*)0);
          VAR_29 = VAR_22 ? FUNC_7(VAR_22, VAR_26)
                                    : ((void*)0);
          VAR_30 = VAR_21
                                    ? FUNC_7(VAR_21, VAR_26)
                                    : ((void*)0);

          FUNC_0(FUNC_6(&VAR_25,
                                    VAR_26, VAR_27, VAR_28,
                                    VAR_29, VAR_30,
                                    VAR_7, VAR_8,
                                    VAR_14, VAR_14));

          FUNC_0(FUNC_13(VAR_12, VAR_25->data));
        }
    }

  FUNC_0(FUNC_11(VAR_12));

  FUNC_10(VAR_14);

  *VAR_3 = FUNC_4(VAR_9, VAR_13);
  return VAR_0;
}
