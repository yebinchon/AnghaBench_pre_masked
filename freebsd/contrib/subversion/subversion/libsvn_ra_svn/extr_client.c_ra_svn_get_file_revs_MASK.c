
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_13__ {int conn; } ;
typedef TYPE_3__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
struct TYPE_12__ {TYPE_1__ string; int list; } ;
struct TYPE_14__ {scalar_t__ kind; TYPE_2__ u; } ;
typedef TYPE_4__ svn_ra_svn__item_t ;
struct TYPE_15__ {TYPE_3__* priv; } ;
typedef TYPE_5__ svn_ra_session_t ;
typedef int (* svn_file_rev_handler_t ) (void*,char const*,int ,int *,int,scalar_t__*,void**,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_uint64_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int *,int **) ;
 char* FUNC_7 (TYPE_5__*,char const*,int *) ;
 scalar_t__ VAR_7 ;
 int * FUNC_8 (int ,int *,int ) ;
 char* FUNC_9 (char const*,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int **) ;
 int FUNC_14 (int *,char*,char const**,int *,int **,int **,scalar_t__*) ;
 int FUNC_15 (int ,int *,char*) ;
 int FUNC_16 (int ,int *,TYPE_4__**) ;
 int FUNC_17 (int ,int *,char const*,int ,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,scalar_t__*) ;
 int * FUNC_20 (scalar_t__,void*,int,int *) ;

__attribute__((used)) static svn_error_t *FUNC_21(svn_ra_session_t *VAR_8,
                                         const char *VAR_9,
                                         svn_revnum_t VAR_10, svn_revnum_t VAR_11,
                                         svn_boolean_t VAR_12,
                                         svn_file_rev_handler_t VAR_13,
                                         void *VAR_14, apr_pool_t *VAR_15)
{
  svn_ra_svn__session_baton_t *VAR_16 = VAR_8->priv;
  apr_pool_t *VAR_17, *VAR_18;
  svn_boolean_t VAR_19;
  svn_boolean_t VAR_20 = VAR_0;



  VAR_17 = FUNC_11(VAR_15);
  VAR_18 = FUNC_11(VAR_15);

  VAR_9 = FUNC_7(VAR_8, VAR_9, VAR_15);
  FUNC_1(FUNC_17(VAR_16->conn, VAR_15,
                                              VAR_9, VAR_10, VAR_11,
                                              VAR_12));


  FUNC_1(FUNC_4(FUNC_3(VAR_16, VAR_15),
                                 FUNC_0("'get-file-revs' not implemented")));

  while (1)
    {
      svn_ra_svn__list_t *VAR_21, *VAR_22;
      apr_uint64_t VAR_23;
      apr_array_header_t *VAR_24;
      svn_ra_svn__item_t *VAR_25;
      apr_hash_t *VAR_26;
      svn_revnum_t VAR_27;
      const char *VAR_28;
      svn_boolean_t VAR_29;
      svn_txdelta_window_handler_t VAR_30;
      void *VAR_31;

      FUNC_10(VAR_17);
      FUNC_10(VAR_18);
      FUNC_1(FUNC_16(VAR_16->conn, VAR_17, &VAR_25));
      if (FUNC_5(VAR_25))
        break;

      VAR_20 = VAR_6;
      if (VAR_25->kind != VAR_3)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_2("Revision entry not a list"));

      FUNC_1(FUNC_14(&VAR_25->u.list,
                                      "crll?B", &VAR_28, &VAR_27, &VAR_21,
                                      &VAR_22, &VAR_23));
      VAR_28 = FUNC_9(VAR_28, VAR_17);
      FUNC_1(FUNC_13(VAR_21, VAR_17, &VAR_26));
      FUNC_1(FUNC_6(VAR_22, VAR_17, &VAR_24));
      if (VAR_23 == VAR_5)
        VAR_29 = VAR_0;
      else
        VAR_29 = (svn_boolean_t) VAR_23;


      FUNC_1(FUNC_16(VAR_16->conn, VAR_18, &VAR_25));
      if (VAR_25->kind != VAR_4)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_2("Text delta chunk not a string"));
      VAR_19 = VAR_25->u.string.len > 0;

      FUNC_1(VAR_13(VAR_14, VAR_28, VAR_27, VAR_26, VAR_29,
                      VAR_19 ? &VAR_30 : ((void*)0), &VAR_31,
                      VAR_24, VAR_17));


      if (VAR_19)
        {
          svn_stream_t *VAR_32;

          if (VAR_30 && VAR_30 != VAR_7)
            VAR_32 = FUNC_20(VAR_30, VAR_31, VAR_6,
                                               VAR_17);
          else
            VAR_32 = ((void*)0);
          while (VAR_25->u.string.len > 0)
            {
              apr_size_t VAR_33;

              VAR_33 = VAR_25->u.string.len;
              if (VAR_32)
                FUNC_1(FUNC_19(VAR_32, VAR_25->u.string.data, &VAR_33));
              FUNC_10(VAR_18);

              FUNC_1(FUNC_16(VAR_16->conn, VAR_18,
                                            &VAR_25));
              if (VAR_25->kind != VAR_4)
                return FUNC_8(VAR_1, ((void*)0),
                                        FUNC_2("Text delta chunk not a string"));
            }
          if (VAR_32)
            FUNC_1(FUNC_18(VAR_32));
        }
    }

  FUNC_1(FUNC_15(VAR_16->conn, VAR_15, ""));


  if (!VAR_20)
    return FUNC_8(VAR_1, ((void*)0),
                            FUNC_2("The get-file-revs command didn't return "
                              "any revisions"));

  FUNC_12(VAR_18);
  FUNC_12(VAR_17);

  return VAR_2;
}
