
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_version_t ;
struct TYPE_23__ {int choice; void* merged_file; TYPE_5__* merged_value; } ;
typedef TYPE_1__ svn_wc_conflict_result_t ;
typedef int (* svn_wc_conflict_resolver_func2_t ) (TYPE_1__**,TYPE_3__*,void*,int *,int *) ;
struct TYPE_24__ {void* merged_file; int reason; int action; int prop_reject_abspath; int their_abspath; TYPE_5__ const* prop_value_incoming_old; TYPE_5__ const* prop_value_base; void* base_abspath; TYPE_5__ const* prop_value_incoming_new; TYPE_5__ const* prop_value_working; void* my_abspath; int const* src_right_version; int const* src_left_version; int operation; } ;
typedef TYPE_3__ svn_wc_conflict_description2_t ;
typedef int svn_wc__db_t ;
typedef int svn_stringbuf_t ;
struct TYPE_25__ {int len; int data; } ;
typedef TYPE_5__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_file_options_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int **,TYPE_5__ const*,TYPE_5__ const*,TYPE_5__ const*,int *,int *) ;
 int FUNC_4 (int *,int *,TYPE_5__ const*,TYPE_5__ const*,TYPE_5__ const*,int *,int *,int *,int *,int ,int ,void*,int *) ;
 char* FUNC_5 (char const*,int *) ;
 void* FUNC_6 (char const*,char const*,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *,char const*,TYPE_5__ const*) ;
 int VAR_5 ;
 int FUNC_9 (char const**,char const*,int ,int ,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_5__ const*,TYPE_5__ const*) ;
 TYPE_5__* FUNC_13 (int *) ;
 int FUNC_14 (int **,void*,int *) ;
 int FUNC_15 (int *,char const*,int *,int ,int *,int *,int *) ;
 int FUNC_16 (int **,int *,char const*,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 TYPE_3__* FUNC_17 (char const*,int ,char const*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_18(svn_boolean_t *VAR_12,
                      svn_wc__db_t *VAR_13,
                      const char *VAR_14,
                      svn_node_kind_t VAR_15,
                      svn_wc_operation_t VAR_16,
                      const svn_wc_conflict_version_t *VAR_17,
                      const svn_wc_conflict_version_t *VAR_18,
                      const char *VAR_19,
                      const svn_string_t *VAR_20,
                      const svn_string_t *VAR_21,
                      const svn_string_t *VAR_22,
                      const svn_string_t *VAR_23,
                      svn_wc_conflict_resolver_func2_t VAR_24,
                      void *VAR_25,
                      svn_cancel_func_t VAR_26,
                      void *VAR_27,
                      apr_pool_t *VAR_28)
{
  svn_wc_conflict_result_t *VAR_29 = ((void*)0);
  svn_wc_conflict_description2_t *VAR_30;
  const char *VAR_31 = FUNC_5(VAR_14, VAR_28);
  const svn_string_t *VAR_32 = ((void*)0);

  VAR_30 = FUNC_17(
                VAR_14,
                VAR_15,
                VAR_19, VAR_28);

  VAR_30->operation = VAR_16;
  VAR_30->src_left_version = VAR_17;
  VAR_30->src_right_version = VAR_18;


  if (VAR_21)
    {
      const char *VAR_33;

      FUNC_0(FUNC_9(&VAR_33, VAR_31, VAR_21->data,
                                  VAR_21->len,
                                  VAR_5,
                                  VAR_28));
      VAR_30->my_abspath = FUNC_6(VAR_31, VAR_33, VAR_28);
      VAR_30->prop_value_working = VAR_21;
    }

  if (VAR_23)
    {
      const char *VAR_34;

      FUNC_0(FUNC_9(&VAR_34, VAR_31, VAR_23->data,
                                  VAR_23->len,
                                  VAR_5,
                                  VAR_28));



      VAR_30->merged_file = FUNC_6(VAR_31, VAR_34, VAR_28);
      VAR_30->prop_value_incoming_new = VAR_23;
    }

  if (!VAR_20 && !VAR_22)
    {



    }
  else if ((VAR_20 && !VAR_22)
           || (!VAR_20 && VAR_22))
    {







      const svn_string_t *VAR_35 = VAR_20 ? VAR_20
                                                       : VAR_22;
      const char *VAR_36;

      FUNC_0(FUNC_9(&VAR_36, VAR_31,
                                  VAR_35->data,
                                  VAR_35->len,
                                  VAR_5,
                                  VAR_28));
      VAR_30->base_abspath = FUNC_6(VAR_31, VAR_36, VAR_28);
    }
  else
    {
      const svn_string_t *VAR_37;
      const char *VAR_38;

      if (! FUNC_12(VAR_20, VAR_22))
        {
          if (VAR_21 && FUNC_12(VAR_20, VAR_21))
            VAR_37 = VAR_22;
          else
            VAR_37 = VAR_20;
        }
      else
        {
          VAR_37 = VAR_20;
        }

      FUNC_0(FUNC_9(&VAR_38, VAR_31, VAR_37->data,
                                  VAR_37->len,
                                  VAR_5, VAR_28));
      VAR_30->base_abspath = FUNC_6(VAR_31, VAR_38, VAR_28);

      VAR_30->prop_value_base = VAR_20;
      VAR_30->prop_value_incoming_old = VAR_22;

      if (VAR_21 && VAR_23)
        {
          svn_stream_t *VAR_39;
          svn_diff_t *VAR_40;
          svn_diff_file_options_t *VAR_41 =
            FUNC_2(VAR_28);

          FUNC_0(FUNC_11(&VAR_39, &VAR_30->prop_reject_abspath,
                                         ((void*)0), VAR_5,
                                         VAR_28, VAR_28));
          FUNC_0(FUNC_3(&VAR_40, VAR_37,
                                            VAR_21,
                                            VAR_23, VAR_41, VAR_28));
          FUNC_0(FUNC_4(VAR_39, VAR_40,
                   VAR_37, VAR_21,
                   VAR_23, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                   VAR_4,
                   VAR_26, VAR_27, VAR_28));
          FUNC_0(FUNC_10(VAR_39));



          VAR_30->their_abspath = VAR_30->prop_reject_abspath;
        }
    }

  if (!VAR_22 && VAR_23)
    VAR_30->action = VAR_6;
  else if (VAR_22 && !VAR_23)
    VAR_30->action = VAR_7;
  else
    VAR_30->action = VAR_8;

  if (VAR_20 && !VAR_21)
    VAR_30->reason = VAR_9;
  else if (!VAR_20 && VAR_21)
    VAR_30->reason = VAR_11;
  else
    VAR_30->reason = VAR_10;


  FUNC_0(VAR_24(&VAR_29, VAR_30, VAR_25, VAR_28,
                        VAR_28));
  if (VAR_29 == ((void*)0))
    {
      *VAR_12 = VAR_3;
      return FUNC_7(VAR_1,
                              ((void*)0), FUNC_1("Conflict callback violated API:"
                                      " returned no results"));
    }


  switch (VAR_29->choice)
    {
      default:
      case 129:
        {
          *VAR_12 = VAR_3;
          break;
        }
      case 130:
        {

          *VAR_12 = VAR_0;
          VAR_32 = VAR_21;
          break;
        }





      case 128:
        {
          *VAR_12 = VAR_0;
          VAR_32 = VAR_23;
          break;
        }
      case 132:
        {
          *VAR_12 = VAR_0;
          VAR_32 = VAR_20;
          break;
        }
      case 131:
        {
          if (!VAR_30->merged_file
              && (!VAR_29->merged_file && !VAR_29->merged_value))
            return FUNC_7
                (VAR_1,
                 ((void*)0), FUNC_1("Conflict callback violated API:"
                         " returned no merged file"));

          if (VAR_29->merged_value)
            VAR_32 = VAR_29->merged_value;
          else
            {
              svn_stringbuf_t *VAR_42;

              FUNC_0(FUNC_14(&VAR_42,
                                               VAR_29->merged_file ?
                                                    VAR_29->merged_file :
                                                    VAR_30->merged_file,
                                               VAR_28));
              VAR_32 = FUNC_13(VAR_42);
            }
          *VAR_12 = VAR_0;
          break;
        }
    }

  if (!*VAR_12)
    {
      apr_hash_t *VAR_43;




      FUNC_0(FUNC_16(&VAR_43, VAR_13, VAR_14, VAR_28,
                                    VAR_28));

      FUNC_8(VAR_43, VAR_19, VAR_32);

      FUNC_0(FUNC_15(VAR_13, VAR_14, VAR_43,
                                      VAR_0, ((void*)0), ((void*)0),
                                      VAR_28));
    }

  return VAR_2;
}
