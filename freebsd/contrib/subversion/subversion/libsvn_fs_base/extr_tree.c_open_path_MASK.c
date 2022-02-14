
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
struct TYPE_21__ {int * fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_23__ {int copy_src_path; int copy_inherit; } ;
typedef TYPE_3__ parent_path_t ;
typedef int dag_node_t ;
typedef int copy_id_inherit_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char const*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,char const*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int *,char const*) ;
 int VAR_2 ;
 int * FUNC_7 (TYPE_1__*,char const*,int *) ;
 int FUNC_8 (TYPE_1__*,char const*,int *) ;
 TYPE_2__* FUNC_9 (int *,char const**,int *,TYPE_3__*,char const*,int *,int *) ;
 TYPE_3__* FUNC_10 (int *,char*,TYPE_3__*,int *) ;
 int VAR_3 ;
 TYPE_2__* FUNC_11 (int **,TYPE_1__*,int *,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 char* FUNC_13 (char const*,int *) ;
 char* FUNC_14 (char const**,char const*,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 TYPE_2__* FUNC_16 (int **,int *,char*,int *,int *) ;
 char* FUNC_17 (char const*,char*,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_18(parent_path_t **VAR_5,
          svn_fs_root_t *VAR_6,
          const char *VAR_7,
          int VAR_8,
          const char *VAR_9,
          trail_t *VAR_10,
          apr_pool_t *VAR_11)
{
  svn_fs_t *VAR_12 = VAR_6->fs;
  dag_node_t *VAR_13;
  parent_path_t *VAR_14;
  const char *VAR_15;
  const char *VAR_16 = FUNC_13(VAR_7, VAR_11);
  const char *VAR_17 = "/";



  FUNC_0(FUNC_11(&VAR_13, VAR_6, VAR_10, VAR_11));
  VAR_14 = FUNC_10(VAR_13, 0, 0, VAR_11);
  VAR_14->copy_inherit = VAR_2;

  VAR_15 = VAR_16 + 1;






  for (;;)
    {
      const char *VAR_18;
      char *VAR_19;
      dag_node_t *VAR_20;


      VAR_19 = FUNC_14(&VAR_18, VAR_15, VAR_11);


      VAR_17 = FUNC_17(VAR_17, VAR_19, VAR_11);

      if (*VAR_19 == '\0')
        {




          VAR_20 = VAR_13;
        }
      else
        {
          copy_id_inherit_t VAR_21;
          const char *VAR_22 = ((void*)0);
          svn_error_t *VAR_23 = VAR_1;
          dag_node_t *VAR_24;




          VAR_24 = FUNC_7(VAR_6, VAR_17, VAR_11);
          if (VAR_24)
            VAR_20 = VAR_24;
          else
            VAR_23 = FUNC_16(&VAR_20, VAR_13, VAR_19, VAR_10, VAR_11);


          if (VAR_23 && VAR_23->apr_err == VAR_0)
            {




              FUNC_12(VAR_23);

              if ((VAR_8 & VAR_3)
                  && (! VAR_18 || *VAR_18 == '\0'))
                {
                  VAR_14 = FUNC_10(((void*)0), VAR_19, VAR_14,
                                                 VAR_11);
                  break;
                }
              else
                {


                  return FUNC_3(VAR_6, VAR_7);
                }
            }


          FUNC_0(VAR_23);


          VAR_14 = FUNC_10(VAR_20, VAR_19, VAR_14, VAR_11);
          if (VAR_9)
            {
              FUNC_0(FUNC_9(&VAR_21, &VAR_22,
                                           VAR_12, VAR_14, VAR_9,
                                           VAR_10, VAR_11));
              VAR_14->copy_inherit = VAR_21;
              VAR_14->copy_src_path = FUNC_6(VAR_11, VAR_22);
            }


          if (! VAR_24)
            FUNC_8(VAR_6, VAR_17, VAR_20);
        }


      if (! VAR_18)
        break;


      if (FUNC_15(VAR_20) != VAR_4)
        FUNC_1(FUNC_2(VAR_12, VAR_17),
                  FUNC_5(VAR_11, FUNC_4("Failure opening '%s'"), VAR_7));

      VAR_15 = VAR_18;
      VAR_13 = VAR_20;
    }

  *VAR_5 = VAR_14;
  return VAR_1;
}
