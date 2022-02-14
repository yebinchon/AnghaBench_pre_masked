
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int pool; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_15__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_16__ {char* id; int * fs; } ;
typedef TYPE_3__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct commit_args {int new_rev; TYPE_3__* txn; } ;
typedef int dag_node_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,char const*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int **,int *,char*,TYPE_1__*,int ) ;
 int * FUNC_5 (int *,TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char const*,TYPE_1__*,int ) ;
 int FUNC_8 (int **,int *,char const*,TYPE_1__*,int ) ;
 int FUNC_9 (int const*,int ) ;
 TYPE_2__* FUNC_10 (int const*,int ) ;
 int FUNC_11 (int const**,int *,int ,TYPE_1__*,int ) ;
 int FUNC_12 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_13 (char const*,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_14(void *VAR_1, trail_t *VAR_2)
{
  struct commit_args *VAR_3 = VAR_1;

  svn_fs_txn_t *VAR_4 = VAR_3->txn;
  svn_fs_t *VAR_5 = VAR_4->fs;
  const char *VAR_6 = VAR_4->id;

  svn_revnum_t VAR_7;
  const svn_fs_id_t *VAR_8;
  dag_node_t *VAR_9, *VAR_10;



  FUNC_0(FUNC_12(&VAR_7, VAR_5, VAR_2, VAR_2->pool));



  FUNC_0(FUNC_11(&VAR_8, VAR_5, VAR_7,
                                    VAR_2, VAR_2->pool));
  FUNC_0(FUNC_7(&VAR_9, VAR_5, VAR_6,
                                         VAR_2, VAR_2->pool));




  if (! FUNC_9(VAR_8,
                           FUNC_6(VAR_9)))
    {
      svn_string_t *VAR_11 = FUNC_10(VAR_8,
                                                     VAR_2->pool);
      return FUNC_2
        (VAR_0, ((void*)0),
         FUNC_1("Transaction '%s' out-of-date with respect to revision '%s'"),
         VAR_6, VAR_11->data);
    }





  FUNC_0(FUNC_13(VAR_6, VAR_2, VAR_2->pool));





  FUNC_0(FUNC_8(&VAR_10, VAR_5, VAR_6,
                                    VAR_2, VAR_2->pool));
  if (!FUNC_3(VAR_10, VAR_4->id))
    {
      dag_node_t *VAR_12;
      FUNC_0(FUNC_4(&VAR_12, VAR_5, VAR_4->id,
                                          VAR_2, VAR_2->pool));
    }


  return FUNC_5(&(VAR_3->new_rev), VAR_4, VAR_2,
                                     VAR_2->pool);
}
