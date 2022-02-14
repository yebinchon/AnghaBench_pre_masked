
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_fs_t ;
struct TYPE_16__ {int rev; int txn; scalar_t__ is_txn_root; int * fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_17__ {int copy_src_path; void* copy_inherit; int * node; } ;
typedef TYPE_3__ parent_path_t ;
typedef int dag_node_t ;
typedef void* copy_id_inherit_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int * FUNC_3 (TYPE_2__*,char const*) ;
 int * VAR_0 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int ,char const*,int ) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int ) ;
 void* VAR_1 ;
 int FUNC_8 (int **,TYPE_2__*,char const*,int *) ;
 int FUNC_9 (TYPE_2__*,char const*,int *,int *) ;
 int FUNC_10 (void**,char const**,int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_11 (int *,char*,TYPE_3__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int **,TYPE_2__*,int *) ;
 int FUNC_13 (char const*) ;
 char* FUNC_14 (char const*,int *) ;
 int FUNC_15 (char const*) ;
 char* FUNC_16 (char const**,char const*,int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int **,int *,char*,int *,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 TYPE_1__* FUNC_22 (char const*,int *) ;
 int FUNC_23 (int **,TYPE_2__*,char const*,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_24(parent_path_t **VAR_7,
          svn_fs_root_t *VAR_8,
          const char *VAR_9,
          int VAR_10,
          svn_boolean_t VAR_11,
          apr_pool_t *VAR_12)
{
  svn_fs_t *VAR_13 = VAR_8->fs;
  dag_node_t *VAR_14 = ((void*)0);
  parent_path_t *VAR_15;
  const char *VAR_16 = ((void*)0);
  apr_pool_t *VAR_17 = FUNC_20(VAR_12);





  svn_stringbuf_t *VAR_18 = FUNC_22(VAR_9, VAR_12);
  apr_size_t VAR_19 = VAR_18->len;





  FUNC_7(FUNC_15(VAR_9));
  VAR_18->len = 0;
  if (VAR_10 & VAR_4)
    {
      const char *VAR_20;
      if (!VAR_8->is_txn_root)
        {
          dag_node_t *VAR_21;
          FUNC_0(FUNC_23(&VAR_21, VAR_8, VAR_9, VAR_19, VAR_17));


          if (VAR_21)
            {

              FUNC_21(VAR_17);

              VAR_15 = FUNC_11(VAR_21, 0, 0, VAR_12);
              VAR_15->copy_inherit = VAR_1;
              *VAR_7 = VAR_15;

              return VAR_0;
            }
        }




      VAR_20 = FUNC_14(VAR_9, VAR_12);
      if (VAR_20[1] != 0)
        {
          FUNC_0(FUNC_8(&VAR_14, VAR_8, VAR_20, VAR_12));


          if (VAR_14)
            {
              apr_size_t VAR_22 = FUNC_13(VAR_20);
              VAR_18->len = VAR_22;
              VAR_16 = VAR_9 + VAR_22 + 1;
            }
        }
    }


  if (!VAR_14)
    {


      FUNC_0(FUNC_12(&VAR_14, VAR_8, VAR_12));
      VAR_16 = VAR_9 + 1;
    }

  VAR_18->data[VAR_18->len] = '\0';
  VAR_15 = FUNC_11(VAR_14, 0, 0, VAR_12);
  VAR_15->copy_inherit = VAR_1;






  for (;;)
    {
      const char *VAR_23;
      char *VAR_24;
      dag_node_t *VAR_25;

      FUNC_19(VAR_17);


      VAR_24 = FUNC_16(&VAR_23, VAR_16, VAR_12);


      VAR_18->data[VAR_18->len] = '/';
      VAR_18->len += FUNC_13(VAR_24) + 1;
      VAR_18->data[VAR_18->len] = '\0';

      if (*VAR_24 == '\0')
        {




          VAR_25 = VAR_14;
        }
      else
        {
          copy_id_inherit_t VAR_26;
          const char *VAR_27 = ((void*)0);
          dag_node_t *VAR_28 = ((void*)0);






          if (VAR_23 || !(VAR_10 & VAR_5))
            FUNC_0(FUNC_8(&VAR_28, VAR_8, VAR_18->data,
                                       VAR_12));
          if (VAR_28)
            VAR_25 = VAR_28;
          else
            FUNC_0(FUNC_18(&VAR_25, VAR_14, VAR_24, VAR_12, VAR_17));


          if (VAR_25 == ((void*)0))
            {




              if ((VAR_10 & VAR_3)
                  && (! VAR_23 || *VAR_23 == '\0'))
                {
                  VAR_15 = FUNC_11(((void*)0), VAR_24, VAR_15,
                                                 VAR_12);
                  break;
                }
              else if (VAR_10 & VAR_2)
                {
                  VAR_15 = ((void*)0);
                  break;
                }
              else
                {


                  return FUNC_3(VAR_8, VAR_9);
                }
            }

          if (VAR_10 & VAR_4)
            {

              VAR_15->node = VAR_25;
            }
          else
            {

              VAR_15 = FUNC_11(VAR_25, VAR_24, VAR_15, VAR_12);
              if (VAR_11)
                {
                  FUNC_0(FUNC_10(&VAR_26, &VAR_27, VAR_13,
                                               VAR_15, VAR_17));
                  VAR_15->copy_inherit = VAR_26;
                  VAR_15->copy_src_path = FUNC_6(VAR_12, VAR_27);
                }
            }


          if (! VAR_28)
            FUNC_0(FUNC_9(VAR_8, VAR_18->data, VAR_25,
                                       VAR_17));
        }


      if (! VAR_23)
        break;


      if (FUNC_17(VAR_25) != VAR_6)
        {
          const char *VAR_29;




          if (VAR_10 & VAR_2)
            {
              VAR_15 = ((void*)0);
              break;
            }


          VAR_29 = VAR_8->is_txn_root
              ? FUNC_5(VAR_17,
                             FUNC_4("Failure opening '%s' in transaction '%s'"),
                             VAR_9, VAR_8->txn)
              : FUNC_5(VAR_17,
                             FUNC_4("Failure opening '%s' in revision %ld"),
                             VAR_9, VAR_8->rev);
          FUNC_1(FUNC_2(VAR_13, VAR_18->data), VAR_29);
        }

      VAR_16 = VAR_23;
      VAR_14 = VAR_25;
    }

  FUNC_21(VAR_17);
  *VAR_7 = VAR_15;
  return VAR_0;
}
