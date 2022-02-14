
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_5__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int * (* svn_ra_lock_callback_t ) (void*,char const*,int ,int *,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (void*,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,int *,char*) ;
 int FUNC_14 (int *,int *,char const*,int const*,int ) ;
 int * FUNC_15 (void*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_16(svn_ra_session_t *VAR_2,
                                         apr_hash_t *VAR_3,
                                         svn_boolean_t VAR_4,
                                         svn_ra_lock_callback_t VAR_5,
                                         void *VAR_6,
                                         apr_pool_t *VAR_7)
{
  svn_ra_svn__session_baton_t *VAR_8 = VAR_2->priv;
  svn_ra_svn_conn_t* VAR_9 = VAR_8->conn;
  apr_hash_index_t *VAR_10;
  apr_pool_t *VAR_11 = FUNC_11(VAR_7);

  for (VAR_10 = FUNC_3(VAR_7, VAR_3); VAR_10; VAR_10 = FUNC_4(VAR_10))
    {
      const void *VAR_12;
      const char *VAR_13;
      void *VAR_14;
      const svn_string_t *VAR_15;
      svn_error_t *VAR_16, *VAR_17 = ((void*)0);

      FUNC_10(VAR_11);

      FUNC_5(VAR_10, &VAR_12, ((void*)0), &VAR_14);
      VAR_13 = VAR_12;
      if (FUNC_8(VAR_14, "") != 0)
        VAR_15 = FUNC_15(VAR_14, VAR_11);
      else
        VAR_15 = ((void*)0);

      FUNC_1(FUNC_14(VAR_9, VAR_11, VAR_13, VAR_15,
                                           VAR_4));


      FUNC_1(FUNC_7(FUNC_6(VAR_8, VAR_11),
                                     FUNC_0("Server doesn't support the unlock "
                                        "command")));

      VAR_16 = FUNC_13(VAR_9, VAR_11, "");

      if (VAR_16 && !FUNC_2(VAR_16))
        return VAR_16;

      if (VAR_5)
        VAR_17 = VAR_5(VAR_6, VAR_13, VAR_0, ((void*)0), VAR_16, VAR_7);

      FUNC_9(VAR_16);

      if (VAR_17)
        return VAR_17;
    }

  FUNC_12(VAR_11);

  return VAR_1;
}
