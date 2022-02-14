
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_21__ {scalar_t__ len; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_fs_x__change_set_t ;
struct TYPE_22__ {int is_txn_root; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int **,TYPE_3__*,int *,char const*,TYPE_2__*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int **,TYPE_3__*,int ,int *) ;
 char* FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int,int *) ;
 int FUNC_12 (int **,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_13(dag_node_t **VAR_2,
              svn_fs_root_t *VAR_3,
              svn_string_t *VAR_4,
              apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6 = ((void*)0);
  apr_pool_t *VAR_7;
  svn_fs_x__change_set_t VAR_8 = FUNC_7(VAR_3);
  const char *VAR_9;
  svn_string_t VAR_10;
  svn_stringbuf_t *VAR_11;




  if (VAR_4->len == 0)
    return FUNC_6(FUNC_4(VAR_2, VAR_3, VAR_8,
                                         VAR_5));
  if (!VAR_3->is_txn_root)
    {
      FUNC_0(FUNC_12(VAR_2, VAR_3, VAR_4));


      if (*VAR_2)
          return VAR_1;
    }





  VAR_11 = FUNC_11(64, VAR_5);
  if (FUNC_3(VAR_4, &VAR_10, VAR_11))
    {
      VAR_6 = FUNC_1(VAR_3, &VAR_10);


      if (VAR_6)
        return FUNC_6(FUNC_2(VAR_2, VAR_3, VAR_6,
                                        VAR_11->data, VAR_4,
                                        VAR_8, VAR_0, VAR_5));
    }


  VAR_7 = FUNC_9(VAR_5);



  FUNC_0(FUNC_4(&VAR_6, VAR_3, VAR_8, VAR_7));
  VAR_4->len = 0;


  for (VAR_9 = FUNC_5(VAR_4, VAR_11);
       VAR_9;
       VAR_9 = FUNC_5(VAR_4, VAR_11))
    {
      FUNC_8(VAR_7);



      FUNC_0(FUNC_2(&VAR_6, VAR_3, VAR_6, VAR_9, VAR_4, VAR_8, VAR_0,
                       VAR_7));
    }

  FUNC_10(VAR_7);
  *VAR_2 = VAR_6;

  return VAR_1;
}
