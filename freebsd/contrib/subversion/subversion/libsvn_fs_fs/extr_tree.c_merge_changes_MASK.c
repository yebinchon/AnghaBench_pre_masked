
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_4__ {int * fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int FUNC_2 (int *,char*,int *,int *,int *,int const*,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int const*,int *) ;
 int FUNC_5 (int **,int *,int const*,int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int * FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(dag_node_t *VAR_1,
              dag_node_t *VAR_2,
              svn_fs_txn_t *VAR_3,
              svn_stringbuf_t *VAR_4,
              apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6;
  svn_fs_t *VAR_7 = VAR_3->fs;
  const svn_fs_fs__id_part_t *VAR_8 = FUNC_7(VAR_3);

  FUNC_0(FUNC_5(&VAR_6, VAR_7, VAR_8, VAR_5));

  if (VAR_1 == ((void*)0))
    {
      FUNC_0(FUNC_4(&VAR_1, VAR_7,
                                           VAR_8, VAR_5));
    }

  if (FUNC_6(FUNC_3(VAR_1),
                       FUNC_3(VAR_6)))
    {



      FUNC_1();
    }
  else
    FUNC_0(FUNC_2(VAR_4, "/", VAR_6,
                  VAR_2, VAR_1, VAR_8, ((void*)0), VAR_5));

  return VAR_0;
}
