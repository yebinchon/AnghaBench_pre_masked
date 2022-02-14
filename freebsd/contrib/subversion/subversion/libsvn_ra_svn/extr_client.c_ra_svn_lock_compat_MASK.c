
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_5__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int * (* svn_ra_lock_callback_t ) (void*,char const*,int ,int *,int *,int *) ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int *,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,int *,char*,int **) ;
 int FUNC_14 (int *,int *,char const*,char const*,int ,int ) ;

__attribute__((used)) static svn_error_t *FUNC_15(svn_ra_session_t *VAR_2,
                                       apr_hash_t *VAR_3,
                                       const char *VAR_4,
                                       svn_boolean_t VAR_5,
                                       svn_ra_lock_callback_t VAR_6,
                                       void *VAR_7,
                                       apr_pool_t *VAR_8)
{
  svn_ra_svn__session_baton_t *VAR_9 = VAR_2->priv;
  svn_ra_svn_conn_t* VAR_10 = VAR_9->conn;
  svn_ra_svn__list_t *VAR_11;
  apr_hash_index_t *VAR_12;
  apr_pool_t *VAR_13 = FUNC_11(VAR_8);

  for (VAR_12 = FUNC_3(VAR_8, VAR_3); VAR_12; VAR_12 = FUNC_4(VAR_12))
    {
      svn_lock_t *VAR_14;
      const void *VAR_15;
      const char *VAR_16;
      void *VAR_17;
      svn_revnum_t *VAR_18;
      svn_error_t *VAR_19, *VAR_20 = ((void*)0);

      FUNC_10(VAR_13);

      FUNC_5(VAR_12, &VAR_15, ((void*)0), &VAR_17);
      VAR_16 = VAR_15;
      VAR_18 = VAR_17;

      FUNC_1(FUNC_14(VAR_10, VAR_13, VAR_16, VAR_4,
                                         VAR_5, *VAR_18));


      FUNC_1(FUNC_7(FUNC_6(VAR_9, VAR_8),
                                     FUNC_0("Server doesn't support "
                                        "the lock command")));

      VAR_19 = FUNC_13(VAR_10, VAR_13, "l", &VAR_11);

      if (!VAR_19)
        FUNC_1(FUNC_8(VAR_11, VAR_13, &VAR_14));

      if (VAR_19 && !FUNC_2(VAR_19))
        return VAR_19;

      if (VAR_6)
        VAR_20 = VAR_6(VAR_7, VAR_16, VAR_1, VAR_19 ? ((void*)0) : VAR_14,
                                 VAR_19, VAR_13);

      FUNC_9(VAR_19);

      if (VAR_20)
        return VAR_20;
    }

  FUNC_12(VAR_13);

  return VAR_0;
}
