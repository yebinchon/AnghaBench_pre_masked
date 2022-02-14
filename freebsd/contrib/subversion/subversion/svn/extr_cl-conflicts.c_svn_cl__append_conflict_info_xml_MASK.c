
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_3__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,char*,char const*,char const*,int ,int ,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (int **,int *,char*,char const*) ;
 int FUNC_6 (scalar_t__*,TYPE_1__**,scalar_t__*,int *,int *,int *) ;
 int FUNC_7 (char const**,int *,int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const**,int *,int *,int *,int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,char const**,char const**,char const**,int *,int *,int *) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int *,char*,char*) ;
 int FUNC_14 (int **,int *,char*) ;
 int FUNC_15 (int **,int *,int ,char*,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_16(svn_stringbuf_t *VAR_2,
                                 svn_client_conflict_t *VAR_3,
                                 apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5;
  svn_boolean_t VAR_6;
  apr_array_header_t *VAR_7;
  svn_boolean_t VAR_8;
  svn_wc_operation_t VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  svn_revnum_t VAR_12;
  svn_node_kind_t VAR_13;

  VAR_9 = FUNC_8(VAR_3);

  FUNC_0(FUNC_6(&VAR_6,
                                             &VAR_7,
                                             &VAR_8,
                                             VAR_3,
                                             VAR_4, VAR_4));
  if (VAR_8)
    {

      return FUNC_12(
                FUNC_2(VAR_2, VAR_3, VAR_4));
    }

  FUNC_0(FUNC_9(&VAR_10, ((void*)0),
                                             VAR_3,
                                             VAR_4, VAR_4));
  VAR_5 = FUNC_3(VAR_4);

  FUNC_13(VAR_5, "operation",
                FUNC_4(VAR_9, VAR_4));

  FUNC_13(VAR_5, "operation",
                FUNC_4(VAR_9, VAR_4));

  if (VAR_6)
    {
      const char *VAR_14;
      const char *VAR_15;
      const char *VAR_16;

      FUNC_13(VAR_5, "type", "text");


      FUNC_15(&VAR_2, VAR_4,
                                 VAR_1, "conflict", VAR_5);

      FUNC_0(FUNC_7(
                &VAR_11, &VAR_12, &VAR_13, VAR_3,
                VAR_4, VAR_4));
      if (VAR_10 && VAR_11)
        FUNC_0(FUNC_1(&VAR_2, "source-left",
                                         VAR_10, VAR_11, VAR_12,
                                         VAR_13, VAR_4));

      FUNC_0(FUNC_7(
                &VAR_11, &VAR_12, &VAR_13, VAR_3,
                VAR_4, VAR_4));
      if (VAR_10 && VAR_11)
        FUNC_0(FUNC_1(&VAR_2, "source-right",
                                         VAR_10, VAR_11, VAR_12,
                                         VAR_13, VAR_4));

      FUNC_0(FUNC_11(((void*)0), &VAR_15,
                                                    &VAR_14,
                                                    &VAR_16,
                                                    VAR_3, VAR_4,
                                                    VAR_4));

      FUNC_5(
        &VAR_2, VAR_4, "prev-base-file", VAR_14);


      FUNC_5(
        &VAR_2, VAR_4, "prev-wc-file", VAR_15);


      FUNC_5(
        &VAR_2, VAR_4, "cur-base-file", VAR_16);


      FUNC_14(&VAR_2, VAR_4, "conflict");
    }

  if (VAR_7->nelts > 0)
    {
      const char *VAR_17;

      FUNC_13(VAR_5, "type", "property");


      FUNC_15(&VAR_2, VAR_4,
                                 VAR_1, "conflict", VAR_5);

      FUNC_0(FUNC_7(
                &VAR_11, &VAR_12, &VAR_13, VAR_3,
                VAR_4, VAR_4));
      if (VAR_10 && VAR_11)
        FUNC_0(FUNC_1(&VAR_2, "source-left",
                                         VAR_10, VAR_11, VAR_12,
                                         VAR_13, VAR_4));

      FUNC_0(FUNC_7(
                &VAR_11, &VAR_12, &VAR_13, VAR_3,
                VAR_4, VAR_4));
      if (VAR_10 && VAR_11)
        FUNC_0(FUNC_1(&VAR_2, "source-right",
                                         VAR_10, VAR_11, VAR_12,
                                         VAR_13, VAR_4));


      VAR_17 =
        FUNC_10(VAR_3);
      FUNC_5(
        &VAR_2, VAR_4, "prop-file", VAR_17);


      FUNC_14(&VAR_2, VAR_4, "conflict");
    }

  return VAR_0;
}
