
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_19__ {int change_set; } ;
struct TYPE_18__ {char const* created_path; TYPE_2__ predecessor_id; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef TYPE_2__ svn_fs_x__id_t ;
struct TYPE_20__ {int * node; } ;
typedef TYPE_3__ svn_fs_x__dag_path_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
struct TYPE_21__ {TYPE_5__* fsap_data; } ;
typedef TYPE_4__ svn_fs_history_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_22__ {char* path; scalar_t__ revision; int is_interesting; scalar_t__ next_copy; char* path_hint; scalar_t__ rev_hint; TYPE_2__ current_id; int * fs; } ;
typedef TYPE_5__ fs_history_data_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (int *,char const*,scalar_t__,int,char const*,scalar_t__,scalar_t__,TYPE_2__*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,char const**,int *,TYPE_3__*) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,TYPE_2__*,int *,int *) ;
 TYPE_2__* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__**,int *,char const*,int ,int,int *,int *) ;
 int FUNC_12 (TYPE_1__**,int *,TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int **,int *,char const*,int *) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int **,int *,scalar_t__,int *) ;
 char* FUNC_18 (char const*,char const*,int *) ;
 char* FUNC_19 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_20(svn_fs_history_t **VAR_4,
             svn_fs_history_t *VAR_5,
             svn_boolean_t VAR_6,
             apr_pool_t *VAR_7,
             apr_pool_t *VAR_8)
{
  fs_history_data_t *VAR_9 = VAR_5->fsap_data;
  const char *VAR_10, *VAR_11, *VAR_12 = VAR_9->path;
  svn_revnum_t VAR_13, VAR_14, VAR_15;
  svn_revnum_t VAR_16 = VAR_9->revision;
  svn_fs_t *VAR_17 = VAR_9->fs;
  svn_fs_x__dag_path_t *VAR_18;
  dag_node_t *VAR_19;
  svn_fs_root_t *VAR_20;
  svn_boolean_t VAR_21 = VAR_9->is_interesting;
  svn_revnum_t VAR_22;
  const char *VAR_23;
  svn_fs_x__id_t VAR_24;


  *VAR_4 = ((void*)0);




  if ( FUNC_1(VAR_9->next_copy)
      && VAR_16 > VAR_9->next_copy
      && FUNC_16(&VAR_9->current_id))
    {


      svn_fs_x__noderev_t *VAR_25;
      FUNC_3(VAR_21);



      FUNC_0(FUNC_12(&VAR_25, VAR_17, &VAR_9->current_id,
                                          VAR_8, VAR_8));
      if (! FUNC_16(&VAR_25->predecessor_id))
        return VAR_2;



      VAR_13 = FUNC_13(VAR_25->predecessor_id.change_set);
      if (VAR_13 > VAR_9->next_copy)
        {


          *VAR_4 = FUNC_2(VAR_17, VAR_25->created_path,
                                           VAR_13, VAR_3, ((void*)0),
                                           VAR_1,
                                           VAR_9->next_copy,
                                           &VAR_25->predecessor_id,
                                           VAR_7);

          return VAR_2;
        }


    }





  if (VAR_9->path_hint && FUNC_1(VAR_9->rev_hint))
    {
      VAR_21 = VAR_0;
      if (! VAR_6)
        return VAR_2;
      VAR_12 = VAR_9->path_hint;
      VAR_16 = VAR_9->rev_hint;
    }


  FUNC_0(FUNC_17(&VAR_20, VAR_17, VAR_16, VAR_8));



  FUNC_0(FUNC_11(&VAR_18, VAR_20, VAR_12, 0, VAR_0,
                                 VAR_8, VAR_8));
  VAR_19 = VAR_18->node;
  VAR_10 = FUNC_7(VAR_19);
  VAR_13 = FUNC_10(VAR_19);
  FUNC_15(&VAR_24);
  if (VAR_16 == VAR_13)
    {
      if (! VAR_21)
        {


          *VAR_4 = FUNC_2(VAR_17, VAR_10,
                                           VAR_13, VAR_3, ((void*)0),
                                           VAR_1,
                                           VAR_1, ((void*)0),
                                           VAR_7);
          return VAR_2;
        }
      else
        {



          VAR_24 = *FUNC_9(VAR_19);
          if (!FUNC_16(&VAR_24))
            return VAR_2;



          FUNC_0(FUNC_8(&VAR_19, VAR_17, &VAR_24, VAR_8,
                                         VAR_8));
          VAR_10 = FUNC_7(VAR_19);
          VAR_13 = FUNC_10(VAR_19);
        }
    }



  FUNC_0(FUNC_4(&VAR_22, &VAR_23, VAR_17,
                                 VAR_18));


  VAR_11 = ((void*)0);
  VAR_14 = VAR_1;
  VAR_15 = VAR_1;

  if (VAR_22 > VAR_13)
    {
      const char *VAR_26;
      const char *VAR_27, *VAR_28;
      svn_fs_root_t *VAR_29;

      FUNC_0(FUNC_17(&VAR_29, VAR_17, VAR_22,
                                       VAR_8));
      FUNC_0(FUNC_14(&VAR_19, VAR_29,
                                          VAR_23, VAR_8));
      VAR_27 = FUNC_7(VAR_19);
      VAR_26 = FUNC_19(VAR_27, VAR_12);

      if (VAR_26)
        {



          VAR_14 = FUNC_6(VAR_19);
          VAR_28 = FUNC_5(VAR_19);

          VAR_15 = VAR_22;
          VAR_11 = FUNC_18(VAR_28, VAR_26, VAR_8);
        }
    }



  if (VAR_11 && FUNC_1(VAR_14))
    {
      svn_boolean_t VAR_30 = VAR_0;





      if ((VAR_15 == VAR_16) && VAR_21)
        VAR_30 = VAR_3;

      *VAR_4 = FUNC_2(VAR_17, VAR_12, VAR_15, ! VAR_30,
                                       VAR_11, VAR_14,
                                       VAR_1, ((void*)0),
                                       VAR_7);
    }
  else
    {



      *VAR_4 = FUNC_2(VAR_17, VAR_10, VAR_13, VAR_3,
                                       ((void*)0), VAR_1,
                                       VAR_22, &VAR_24, VAR_7);
    }

  return VAR_2;
}
