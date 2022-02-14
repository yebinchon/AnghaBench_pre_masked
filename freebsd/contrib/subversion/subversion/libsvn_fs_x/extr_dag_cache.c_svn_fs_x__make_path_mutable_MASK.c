
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_14__ {int member_1; int member_0; } ;
typedef TYPE_1__ svn_fs_x__id_t ;
struct TYPE_15__ {int copy_inherit; int * node; int entry; struct TYPE_15__* parent; } ;
typedef TYPE_2__ svn_fs_x__dag_path_t ;
typedef int svn_fs_x__copy_id_inherit_t ;
struct TYPE_16__ {int fs; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int **,TYPE_3__*,char const*,int *,int *) ;
 char* FUNC_3 (TYPE_2__*,int *) ;




 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int **,int *,char const*,int ,TYPE_1__*,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *,char const**,int *) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int **,TYPE_3__*,char const*,int *) ;
 int * FUNC_10 (TYPE_1__*,int ,int ,int *) ;
 int * FUNC_11 (TYPE_3__**,int ,int ,int *) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

svn_error_t *
FUNC_16(svn_fs_root_t *VAR_4,
                            svn_fs_x__dag_path_t *VAR_5,
                            const char *VAR_6,
                            apr_pool_t *VAR_7,
                            apr_pool_t *VAR_8)
{
  dag_node_t *VAR_9;
  svn_fs_x__txn_id_t VAR_10 = FUNC_12(VAR_4);


  if (FUNC_4(VAR_5->node))
    return VAR_2;


  if (VAR_5->parent)
    {
      svn_fs_x__id_t VAR_11 = { VAR_1, 0 };
      svn_fs_x__id_t *VAR_12 = &VAR_11;
      svn_fs_x__copy_id_inherit_t VAR_13 = VAR_5->copy_inherit;
      const char *VAR_14, *VAR_15;
      svn_revnum_t VAR_16;
      svn_boolean_t VAR_17 = VAR_0;
      svn_fs_root_t *VAR_18;
      dag_node_t *VAR_19;
      apr_pool_t *VAR_20;



      FUNC_0(FUNC_16(VAR_4, VAR_5->parent,
                                          VAR_6, VAR_7,
                                          VAR_8));




      VAR_20 = FUNC_14(VAR_8);
      switch (VAR_13)
        {
        case 130:
          VAR_11 = *FUNC_6(VAR_5->parent->node);
          break;

        case 131:
          FUNC_0(FUNC_10(&VAR_11, VAR_4->fs, VAR_10,
                                            VAR_20));
          break;

        case 129:
          VAR_12 = ((void*)0);
          break;

        case 128:
        default:
          FUNC_1();

        }


      FUNC_7(&VAR_16, &VAR_15,
                                 VAR_5->node);
      FUNC_0(FUNC_11(&VAR_18, VAR_4->fs,
                                      VAR_16, VAR_20));
      FUNC_0(FUNC_9(&VAR_19, VAR_18,
                                          VAR_15, VAR_20));

      if (!FUNC_8(VAR_19, VAR_5->node))
        VAR_17 = VAR_3;


      VAR_14 = FUNC_3(VAR_5->parent, VAR_20);
      FUNC_0(FUNC_5(&VAR_9,
                                        VAR_5->parent->node,
                                        VAR_14,
                                        VAR_5->entry,
                                        VAR_12, VAR_10,
                                        VAR_17,
                                        VAR_7,
                                        VAR_20));


      FUNC_13(VAR_9);
      FUNC_15(VAR_20);
    }
  else
    {

      FUNC_0(FUNC_2(&VAR_9, VAR_4, VAR_6, VAR_7,
                                VAR_8));
    }


  VAR_5->node = VAR_9;

  return VAR_2;
}
