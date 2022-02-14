
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int const* work_items; int const* new_actual_props; int update_actual_props; int op_depth; int kind; int presence; } ;
typedef TYPE_1__ insert_working_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,char const*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int *,char const*,int *) ;
 int FUNC_8 (char const*) ;
 int VAR_2 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const**,char const**,char const*,int *) ;
 int VAR_3 ;
 char* FUNC_11 (char const*,char const*,int *) ;
 int VAR_4 ;
 int FUNC_12 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_13(svn_wc__db_t *VAR_5,
                            const char *VAR_6,
                            const apr_hash_t *VAR_7,
                            const svn_skel_t *VAR_8,
                            apr_pool_t *VAR_9)
{
  svn_wc__db_wcroot_t *VAR_10;
  const char *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  insert_working_baton_t VAR_14;


  FUNC_1(FUNC_9(VAR_6));
  FUNC_10(&VAR_12, &VAR_13, VAR_6, VAR_9);

  FUNC_0(FUNC_12(&VAR_10, &VAR_11, VAR_5,
                              VAR_12, VAR_9, VAR_9));
  FUNC_3(VAR_10);

  FUNC_5(&VAR_14);

  VAR_11 = FUNC_11(VAR_11, VAR_13, VAR_9);
  VAR_14.presence = VAR_4;
  VAR_14.kind = VAR_3;
  VAR_14.op_depth = FUNC_8(VAR_11);
  if (VAR_7 && FUNC_4((apr_hash_t *)VAR_7))
    {
      VAR_14.update_actual_props = VAR_1;
      VAR_14.new_actual_props = VAR_7;
    }

  VAR_14.work_items = VAR_8;

  FUNC_2(
            FUNC_7(&VAR_14, VAR_10, VAR_11, VAR_9),
            VAR_10);


  FUNC_0(FUNC_6(VAR_10, VAR_6, VAR_2,
                        VAR_9));

  return VAR_0;
}
