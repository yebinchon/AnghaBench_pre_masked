
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_16__ {scalar_t__ len; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_17__ {int copy_src_path; int copy_inherit; int node; } ;
typedef TYPE_2__ svn_fs_x__dag_path_t ;
typedef int svn_fs_x__change_set_t ;
typedef int svn_fs_t ;
struct TYPE_18__ {int * fs; } ;
typedef TYPE_3__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int dag_node_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_3__*,char const*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int **,TYPE_3__*,int ,char const*,TYPE_1__*,int ,int ,int *) ;
 int FUNC_3 (int *,int *,int *,TYPE_2__*,int *) ;
 int FUNC_4 (int **,TYPE_3__*,int ,int *) ;
 TYPE_2__* FUNC_5 (int *,int *,TYPE_2__*,int *) ;
 char* FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int,int *) ;

svn_error_t *
FUNC_14(svn_fs_x__dag_path_t **VAR_6,
                       svn_fs_root_t *VAR_7,
                       const char *VAR_8,
                       int VAR_9,
                       svn_boolean_t VAR_10,
                       apr_pool_t *VAR_11,
                       apr_pool_t *VAR_12)
{
  svn_fs_t *VAR_13 = VAR_7->fs;
  dag_node_t *VAR_14 = ((void*)0);
  svn_fs_x__dag_path_t *VAR_15;
  apr_pool_t *VAR_16 = FUNC_11(VAR_12);

  svn_fs_x__change_set_t VAR_17 = FUNC_9(VAR_7);
  const char *VAR_18;
  svn_string_t VAR_19;
  svn_stringbuf_t *VAR_20 = FUNC_13(64,
                                                              VAR_12);
  apr_size_t VAR_21;


  FUNC_7(&VAR_19, VAR_8);


  FUNC_0(FUNC_4(&VAR_14, VAR_7, VAR_17, VAR_16));
  VAR_15 = FUNC_5(VAR_14, VAR_20, ((void*)0), VAR_11);
  VAR_15->copy_inherit = VAR_2;

  VAR_21 = VAR_19.len;
  VAR_19.len = 0;


  for (VAR_18 = FUNC_6(&VAR_19, VAR_20);
       VAR_18;
       VAR_18 = FUNC_6(&VAR_19, VAR_20))
    {
      FUNC_10(VAR_16);




      if ( (VAR_9 & VAR_3)
          && (FUNC_8(VAR_15->node) != VAR_5))
        {
          VAR_15 = ((void*)0);
          break;
        }


      FUNC_0(FUNC_2(&VAR_14, VAR_7, VAR_15->node, VAR_18, &VAR_19, VAR_17,
                       VAR_1, VAR_16));


      if (VAR_14 == ((void*)0))
        {




          if ((VAR_9 & VAR_4)
              && (VAR_21 == VAR_19.len))
            {
              VAR_15 = FUNC_5(((void*)0), VAR_20, VAR_15,
                                          VAR_11);
              break;
            }
          else if (VAR_9 & VAR_3)
            {
              VAR_15 = ((void*)0);
              break;
            }
          else
            {


              return FUNC_1(VAR_7, VAR_8);
            }
        }


      VAR_15 = FUNC_5(VAR_14, VAR_20, VAR_15, VAR_11);
      if (VAR_10)
        {
          FUNC_0(FUNC_3(&VAR_15->copy_inherit,
                                       &VAR_15->copy_src_path,
                                       VAR_13, VAR_15, VAR_16));
        }
    }

  FUNC_12(VAR_16);
  *VAR_6 = VAR_15;
  return VAR_0;
}
