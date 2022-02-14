
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int pool; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct merge_args {int conflict; int * ancestor_node; int * source_node; TYPE_1__* txn; } ;
typedef int dag_node_t ;
struct TYPE_11__ {char* id; int * fs; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char*,int *,int *,int *,char const*,int *,TYPE_2__*,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,TYPE_2__*,int ) ;
 int FUNC_4 (int **,int *,char const*,TYPE_2__*,int ) ;
 int FUNC_5 (int **,int *,char const*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char const*,int const*,TYPE_2__*,int ) ;
 int FUNC_8 (int *,char const*,int const*,TYPE_2__*,int ) ;
 int FUNC_9 (int *,int const*,int *,char const*,char*,int,TYPE_2__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_1, trail_t *VAR_2)
{
  struct merge_args *VAR_3 = VAR_1;
  dag_node_t *VAR_4, *VAR_5, *VAR_6;
  const svn_fs_id_t *VAR_7;
  svn_fs_t *VAR_8 = VAR_3->txn->fs;
  const char *VAR_9 = VAR_3->txn->id;

  VAR_4 = VAR_3->source_node;
  VAR_6 = VAR_3->ancestor_node;
  VAR_7 = FUNC_2(VAR_4);

  FUNC_0(FUNC_5(&VAR_5, VAR_8, VAR_9,
                                    VAR_2, VAR_2->pool));

  if (VAR_6 == ((void*)0))
    {
      FUNC_0(FUNC_4(&VAR_6, VAR_8,
                                             VAR_9, VAR_2, VAR_2->pool));
    }

  if (FUNC_6(FUNC_2(VAR_6),
                         FUNC_2(VAR_5)))
    {
      FUNC_0(FUNC_7(VAR_8, VAR_9, VAR_7,
                                        VAR_2, VAR_2->pool));
      FUNC_0(FUNC_8(VAR_8, VAR_9, VAR_7,
                                        VAR_2, VAR_2->pool));
    }
  else
    {
      int VAR_10;

      FUNC_0(FUNC_1(VAR_3->conflict, "/", VAR_5, VAR_4,
                    VAR_6, VAR_9, ((void*)0), VAR_2, VAR_2->pool));

      FUNC_0(FUNC_3(&VAR_10,
                                                     VAR_4, VAR_2,
                                                     VAR_2->pool));





      FUNC_0(FUNC_9(VAR_8, VAR_7,
                              FUNC_2(VAR_5),
                              VAR_9, "/", VAR_10, VAR_2, VAR_2->pool));
      FUNC_0(FUNC_7(VAR_8, VAR_9, VAR_7,
                                        VAR_2, VAR_2->pool));
    }

  return VAR_0;
}
