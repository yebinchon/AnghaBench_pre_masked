
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_18__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
struct TYPE_19__ {int member_1; int member_0; } ;
typedef TYPE_2__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_20__ {int copy_inherit; int * node; int entry; struct TYPE_20__* parent; } ;
typedef TYPE_3__ parent_path_t ;
typedef int dag_node_t ;
typedef int copy_id_inherit_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;




 int * FUNC_2 (TYPE_1__*,char*,int *,int *) ;
 int * FUNC_3 (int **,TYPE_1__*,char const*,int *) ;
 int * FUNC_4 (int **,TYPE_1__*,char const*,int *) ;
 char* FUNC_5 (TYPE_3__*,int *) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int **,int *,char const*,int ,TYPE_2__*,TYPE_2__ const*,int ,int *) ;
 int * FUNC_9 (int *,char const**,int *) ;
 int * FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int ,int ) ;
 int * FUNC_14 (TYPE_2__*,int ,TYPE_2__ const*,int *) ;
 int * FUNC_15 (TYPE_1__**,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_fs_root_t *VAR_4,
                  parent_path_t *VAR_5,
                  const char *VAR_6,
                  apr_pool_t *VAR_7)
{
  dag_node_t *VAR_8;
  const svn_fs_fs__id_part_t *VAR_9 = FUNC_6(VAR_4);


  if (FUNC_7(VAR_5->node))
    return VAR_2;


  if (VAR_5->parent)
    {
      const svn_fs_id_t *VAR_10, *VAR_11, *VAR_12;
      svn_fs_fs__id_part_t VAR_13 = { VAR_1, 0 };
      svn_fs_fs__id_part_t *VAR_14 = &VAR_13;
      copy_id_inherit_t VAR_15 = VAR_5->copy_inherit;
      const char *VAR_16, *VAR_17;
      svn_revnum_t VAR_18;
      svn_boolean_t VAR_19 = VAR_0;
      svn_fs_root_t *VAR_20;
      dag_node_t *VAR_21;



      FUNC_0(FUNC_16(VAR_4, VAR_5->parent,
                                VAR_6, VAR_7));

      switch (VAR_15)
        {
        case 130:
          VAR_10 = FUNC_10(VAR_5->parent->node);
          VAR_13 = *FUNC_11(VAR_10);
          break;

        case 131:
          FUNC_0(FUNC_14(&VAR_13, VAR_4->fs, VAR_9,
                                             VAR_7));
          break;

        case 129:
          VAR_14 = ((void*)0);
          break;

        case 128:
        default:
          FUNC_1();

        }


      FUNC_0(FUNC_9(&VAR_18, &VAR_17,
                                          VAR_5->node));
      FUNC_0(FUNC_15(&VAR_20, VAR_4->fs,
                                       VAR_18, VAR_7));
      FUNC_0(FUNC_3(&VAR_21, VAR_20, VAR_17, VAR_7));

      VAR_11 = FUNC_10(VAR_5->node);
      VAR_12 = FUNC_10(VAR_21);
      if (!FUNC_13(FUNC_12(VAR_11),
                                 FUNC_12(VAR_12)))
        VAR_19 = VAR_3;


      VAR_16 = FUNC_5(VAR_5->parent, VAR_7);
      FUNC_0(FUNC_8(&VAR_8,
                                         VAR_5->parent->node,
                                         VAR_16,
                                         VAR_5->entry,
                                         VAR_14, VAR_9,
                                         VAR_19,
                                         VAR_7));


      FUNC_0(FUNC_2(VAR_4, FUNC_5(VAR_5, VAR_7),
                                 VAR_8, VAR_7));
    }
  else
    {

      FUNC_0(FUNC_4(&VAR_8, VAR_4, VAR_6, VAR_7));
    }


  VAR_5->node = VAR_8;

  return VAR_2;
}
