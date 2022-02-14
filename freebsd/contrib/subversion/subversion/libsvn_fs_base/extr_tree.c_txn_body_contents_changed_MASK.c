
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct things_changed_args {int* changed_p; int strict; int path2; int root2; int path1; int root1; } ;
typedef int dag_node_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int **,int ,int *,TYPE_1__*,int ) ;
 int FUNC_4 (int **,int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,int*,int *,int *,TYPE_1__*,int ) ;
 int FUNC_6 (int *,int *,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_3, trail_t *VAR_4)
{
  struct things_changed_args *VAR_5 = VAR_3;
  dag_node_t *VAR_6, *VAR_7;
  svn_checksum_t *VAR_8, *VAR_9;
  svn_stream_t *VAR_10, *VAR_11;
  svn_boolean_t VAR_12;

  FUNC_0(FUNC_1(&VAR_6, VAR_5->root1, VAR_5->path1, VAR_4, VAR_4->pool));
  FUNC_0(FUNC_1(&VAR_7, VAR_5->root2, VAR_5->path2, VAR_4, VAR_4->pool));
  FUNC_0(FUNC_5(((void*)0), VAR_5->changed_p,
                                        VAR_6, VAR_7, VAR_4, VAR_4->pool));


  if (!VAR_5->strict || !*VAR_5->changed_p)
    return VAR_0;




  FUNC_0(FUNC_3(&VAR_8, VAR_1,
                                         VAR_6, VAR_4, VAR_4->pool));
  FUNC_0(FUNC_3(&VAR_9, VAR_1,
                                         VAR_7, VAR_4, VAR_4->pool));


  if (!FUNC_2(VAR_8, VAR_9))
    return VAR_0;



  FUNC_0(FUNC_3(&VAR_8, VAR_2,
                                         VAR_6, VAR_4, VAR_4->pool));
  FUNC_0(FUNC_3(&VAR_9, VAR_2,
                                         VAR_7, VAR_4, VAR_4->pool));


  if (VAR_8 && VAR_9)
    {
      *VAR_5->changed_p = !FUNC_2(VAR_8, VAR_9);
      return VAR_0;
    }


  FUNC_0(FUNC_4(&VAR_10, VAR_6, VAR_4, VAR_4->pool));
  FUNC_0(FUNC_4(&VAR_11, VAR_7, VAR_4, VAR_4->pool));
  FUNC_0(FUNC_6(&VAR_12, VAR_10, VAR_11, VAR_4->pool));


  *VAR_5->changed_p = !VAR_12;
  return VAR_0;
}
