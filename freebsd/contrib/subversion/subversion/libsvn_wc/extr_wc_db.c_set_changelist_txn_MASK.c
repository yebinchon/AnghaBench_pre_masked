
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
struct set_changelist_baton_t {scalar_t__ new_changelist; int changelist_filter; int depth; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int * VAR_6 ;
 int FUNC_1 (TYPE_1__*,char const*,int ,int ,int *) ;
 int FUNC_2 (int *,char*,int ,char const*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_7,
                   svn_wc__db_wcroot_t *VAR_8,
                   const char *VAR_9,
                   apr_pool_t *VAR_10)
{
  struct set_changelist_baton_t *VAR_11 = VAR_7;
  svn_sqlite__stmt_t *VAR_12;

  FUNC_0(FUNC_1(VAR_8, VAR_9, VAR_11->depth,
                                VAR_11->changelist_filter, VAR_10));


  if (VAR_11->new_changelist)
    {
      FUNC_0(FUNC_4(&VAR_12, VAR_8->sdb,
                                        VAR_3));
      FUNC_0(FUNC_5(VAR_12));
    }


  FUNC_0(FUNC_3(VAR_8->sdb,
                                      VAR_0));
  FUNC_0(FUNC_3(VAR_8->sdb,
                                      VAR_1));


  FUNC_0(FUNC_4(&VAR_12, VAR_8->sdb,
                                    VAR_5));
  FUNC_0(FUNC_2(VAR_12, "iss", VAR_8->wc_id, VAR_9,
                            VAR_11->new_changelist));
  FUNC_0(FUNC_5(VAR_12));

  if (VAR_11->new_changelist)
    {

      FUNC_0(FUNC_4(&VAR_12, VAR_8->sdb,
                                        VAR_4));
      FUNC_0(FUNC_2(VAR_12, "iss", VAR_8->wc_id, VAR_9,
                                VAR_11->new_changelist));
      FUNC_0(FUNC_5(VAR_12));
    }



  if (!VAR_11->new_changelist)
    {
      FUNC_0(FUNC_4(&VAR_12, VAR_8->sdb,
                                        VAR_2));
      FUNC_0(FUNC_2(VAR_12, "is", VAR_8->wc_id, VAR_9));
      FUNC_0(FUNC_5(VAR_12));
    }

  return VAR_6;
}
