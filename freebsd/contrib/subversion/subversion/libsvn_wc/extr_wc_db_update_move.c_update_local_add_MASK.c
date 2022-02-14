
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int new_version; void* cancel_baton; int cancel_func; TYPE_2__* wcroot; int * db; int add_op_depth; int member_0; } ;
typedef TYPE_1__ update_local_add_baton_t ;
struct TYPE_11__ {int wc_id; int sdb; } ;
typedef TYPE_2__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
struct TYPE_12__ {char const* local_relpath; int skip; TYPE_1__* b; int member_0; } ;
typedef TYPE_3__ added_node_baton_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char*,int ,char const*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_2__*,char const*,int *,int *) ;
 int FUNC_7 (char const**,char const**,TYPE_2__*,int ,int *) ;
 int FUNC_8 (TYPE_2__*,char const*,int *,int ,int ,int ,int *,int *) ;
 int FUNC_9 (char const*,char const*,char const*,int ,int ,int *) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_2__*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_revnum_t *VAR_5,
                svn_wc__db_t *VAR_6,
                svn_wc__db_wcroot_t *VAR_7,
                const char *VAR_8,
                svn_cancel_func_t VAR_9,
                void *VAR_10,
                apr_pool_t *VAR_11)
{
  update_local_add_baton_t VAR_12 = { 0 };
  added_node_baton_t VAR_13 = { 0 };
  const char *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  apr_int64_t VAR_17;
  svn_node_kind_t VAR_18;
  svn_sqlite__stmt_t *VAR_19;

  VAR_12.add_op_depth = FUNC_1(VAR_8);

  FUNC_0(FUNC_11(VAR_7, VAR_8, VAR_11));

  VAR_12.db = VAR_6;
  VAR_12.wcroot = VAR_7;
  VAR_12.cancel_func = VAR_9;
  VAR_12.cancel_baton = VAR_10;


  FUNC_0(FUNC_6(((void*)0), &VAR_18, VAR_5,
                                            &VAR_16, &VAR_17,
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            VAR_7, VAR_8,
                                            VAR_11, VAR_11));
  FUNC_0(FUNC_7(&VAR_14, &VAR_15, VAR_7,
                                      VAR_17, VAR_11));
  VAR_12.new_version = FUNC_9(VAR_14, VAR_15,
                                                  VAR_16, *VAR_5,
                                                  VAR_18, VAR_11);


  FUNC_0(FUNC_3(VAR_7->sdb,
                                      VAR_1));


  VAR_13.b = &VAR_12;
  VAR_13.local_relpath = VAR_8;
  VAR_13.skip = VAR_0;
  FUNC_0(FUNC_10(&VAR_13, VAR_11));





  FUNC_0(FUNC_4(&VAR_19, VAR_7->sdb,
                                    VAR_2));
  FUNC_0(FUNC_2(VAR_19, "isd", VAR_7->wc_id, VAR_8,
                            FUNC_1(VAR_8)));
  FUNC_0(FUNC_5(((void*)0), VAR_19));


  FUNC_0(FUNC_8(VAR_7, VAR_8, VAR_6,
                                               VAR_0, VAR_0, VAR_4,
                                               ((void*)0), VAR_11));
  return VAR_3;
}
