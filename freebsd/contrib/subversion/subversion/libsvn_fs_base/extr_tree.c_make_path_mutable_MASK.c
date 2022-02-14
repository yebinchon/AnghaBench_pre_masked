
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
struct TYPE_7__ {char* txn; int * fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_8__ {char* copy_src_path; int copy_inherit; int * node; int entry; struct TYPE_8__* parent; } ;
typedef TYPE_2__ parent_path_t ;
typedef int dag_node_t ;
typedef int copy_id_inherit_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * VAR_0 ;




 int VAR_1 ;
 int * FUNC_2 (int **,TYPE_1__*,char const*,int *,int *) ;
 char* FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (int *,char const*,char const*,int *,int *) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 int * FUNC_6 (int **,int *,char const*,int ,char const*,char const*,int *,int *) ;
 int * FUNC_7 (int *) ;
 char* FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int * FUNC_10 (int *,char const*,char const*,int ,int const*,int ,int *,int *) ;
 int * FUNC_11 (char const**,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_fs_root_t *VAR_2,
                  parent_path_t *VAR_3,
                  const char *VAR_4,
                  trail_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  dag_node_t *VAR_7;
  const char *VAR_8 = VAR_2->txn;
  svn_fs_t *VAR_9 = VAR_2->fs;


  if (FUNC_5(VAR_3->node, VAR_8))
    return VAR_0;


  if (VAR_3->parent)
    {
      const svn_fs_id_t *VAR_10;
      const svn_fs_id_t *VAR_11 = FUNC_7(VAR_3->node);
      const char *VAR_12 = ((void*)0);
      const char *VAR_13 = VAR_3->copy_src_path;
      copy_id_inherit_t VAR_14 = VAR_3->copy_inherit;
      const char *VAR_15;



      FUNC_0(FUNC_12(VAR_2, VAR_3->parent,
                                VAR_4, VAR_5, VAR_6));

      switch (VAR_14)
        {
        case 130:
          VAR_10 = FUNC_7(VAR_3->parent->node);
          VAR_12 = FUNC_8(VAR_10);
          break;

        case 131:
          FUNC_0(FUNC_11(&VAR_12, VAR_9, VAR_5, VAR_6));
          break;

        case 129:
          VAR_12 = ((void*)0);
          break;

        case 128:
        default:
          FUNC_1();

        }


      VAR_15 = FUNC_3(VAR_3->parent, VAR_6);
      FUNC_0(FUNC_6(&VAR_7,
                                           VAR_3->parent->node,
                                           VAR_15,
                                           VAR_3->entry,
                                           VAR_12, VAR_8,
                                           VAR_5, VAR_6));





      if (VAR_14 == 131)
        {
          const svn_fs_id_t *VAR_16 =
            FUNC_7(VAR_7);
          FUNC_0(FUNC_10(VAR_9, VAR_12, VAR_13,
                                          FUNC_9(VAR_11),
                                          VAR_16,
                                          VAR_1, VAR_5, VAR_6));
          FUNC_0(FUNC_4(VAR_9, VAR_8, VAR_12,
                                            VAR_5, VAR_6));
        }
    }
  else
    {

      FUNC_0(FUNC_2(&VAR_7, VAR_2, VAR_4, VAR_5, VAR_6));
    }


  VAR_3->node = VAR_7;

  return VAR_0;
}
