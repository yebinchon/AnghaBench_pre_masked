
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_wc__db_base_info_t {char const* repos_root_url; int lock; int update_root; int depth; int revnum; void* kind; void* status; void* repos_relpath; } ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int * FUNC_1 (int *) ;
 struct svn_wc__db_base_info_t* FUNC_2 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int,int,int,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,char const*,struct svn_wc__db_base_info_t*) ;
 char* FUNC_7 (char const*,int *) ;
 int FUNC_8 (int *,char*,int ,char const*) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 void* FUNC_12 (int *,int,int *) ;
 void* FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int,int ,int ) ;
 int FUNC_15 (int **,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (scalar_t__*,int *) ;
 int * FUNC_18 (char const**,int *,TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(apr_hash_t **VAR_8,
                       svn_wc__db_wcroot_t *VAR_9,
                       const char *VAR_10,
                       svn_boolean_t VAR_11,
                       apr_pool_t *VAR_12,
                       apr_pool_t *VAR_13)
{
  svn_sqlite__stmt_t *VAR_14;
  svn_boolean_t VAR_15;
  apr_int64_t VAR_16 = VAR_0;
  const char *VAR_17 = ((void*)0);

  *VAR_8 = FUNC_1(VAR_12);

  FUNC_0(FUNC_15(&VAR_14, VAR_9->sdb,
                                    VAR_11
                                      ? VAR_2
                                      : VAR_1));
  FUNC_0(FUNC_8(VAR_14, "is", VAR_9->wc_id, VAR_10));

  FUNC_0(FUNC_17(&VAR_15, VAR_14));

  while (VAR_15)
    {
      struct svn_wc__db_base_info_t *VAR_18;
      apr_int64_t VAR_19;
      const char *VAR_20 = FUNC_12(VAR_14, 0, ((void*)0));
      const char *VAR_21 = FUNC_7(VAR_20, VAR_12);

      VAR_18 = FUNC_2(VAR_12, sizeof(*VAR_18));

      VAR_19 = FUNC_10(VAR_14, 1);
      VAR_18->repos_relpath = FUNC_12(VAR_14, 2, VAR_12);
      VAR_18->status = FUNC_13(VAR_14, 3, VAR_6);
      VAR_18->kind = FUNC_13(VAR_14, 4, VAR_5);
      VAR_18->revnum = FUNC_11(VAR_14, 5);

      VAR_18->depth = FUNC_14(VAR_14, 6, VAR_4,
                                                  VAR_7);

      VAR_18->update_root = FUNC_9(VAR_14, 7);

      if (VAR_11)
        VAR_18->lock = FUNC_3(VAR_14, 8, 9, 10, 11, VAR_12);

      if (VAR_19 != VAR_16)
        {
          svn_error_t *VAR_22;

          VAR_22 = FUNC_18(&VAR_17, ((void*)0),
                                            VAR_9, VAR_19,
                                            VAR_12);

          if (VAR_22)
            return FUNC_5(
                     FUNC_4(VAR_22,
                                              FUNC_16(VAR_14)));

          VAR_16 = VAR_19;
        }

      VAR_18->repos_root_url = VAR_17;

      FUNC_6(*VAR_8, VAR_21, VAR_18);

      FUNC_0(FUNC_17(&VAR_15, VAR_14));
    }

  FUNC_0(FUNC_16(VAR_14));

  return VAR_3;
}
