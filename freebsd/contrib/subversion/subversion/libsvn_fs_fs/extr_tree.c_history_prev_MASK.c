
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_id_t ;
struct TYPE_11__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_history_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_12__ {int * node; } ;
typedef TYPE_2__ parent_path_t ;
struct TYPE_13__ {char const* created_path; int const* predecessor_id; } ;
typedef TYPE_3__ node_revision_t ;
struct TYPE_14__ {char* path; scalar_t__ revision; int is_interesting; scalar_t__ next_copy; char* path_hint; scalar_t__ rev_hint; scalar_t__ current_id; int * fs; } ;
typedef TYPE_4__ fs_history_data_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int *,char const*,scalar_t__,int,char const*,scalar_t__,scalar_t__,int const*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,char const**,int *,TYPE_2__*,int *) ;
 int FUNC_5 (int **,int *,char const*,int *) ;
 int FUNC_6 (TYPE_2__**,int *,char const*,int ,int,int *) ;
 int FUNC_7 (char const**,int *) ;
 int FUNC_8 (scalar_t__*,int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int const*,int *) ;
 int FUNC_11 (int const**,int *) ;
 int FUNC_12 (scalar_t__*,int *,int *) ;
 int FUNC_13 (TYPE_3__**,int *,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_14 (int const*) ;
 int FUNC_15 (int **,int *,scalar_t__,int *) ;
 char* FUNC_16 (char const*,char const*,int *) ;
 char* FUNC_17 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_18(svn_fs_history_t **VAR_4,
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
  parent_path_t *VAR_18;
  dag_node_t *VAR_19;
  svn_fs_root_t *VAR_20;
  svn_boolean_t VAR_21 = VAR_9->is_interesting;
  svn_revnum_t VAR_22;
  const char *VAR_23;
  const svn_fs_id_t *VAR_24 = ((void*)0);


  *VAR_4 = ((void*)0);




  if ( FUNC_1(VAR_9->next_copy)
      && VAR_16 > VAR_9->next_copy
      && VAR_9->current_id)
    {


      node_revision_t *VAR_25;
      FUNC_3(VAR_21);



      FUNC_0(FUNC_13(&VAR_25, VAR_17, VAR_9->current_id,
                                           VAR_8, VAR_8));
      if (! VAR_25->predecessor_id)
        return VAR_2;



      VAR_13 = FUNC_14(VAR_25->predecessor_id);
      if (VAR_13 > VAR_9->next_copy)
        {


          *VAR_4 = FUNC_2(VAR_17, VAR_25->created_path,
                                           VAR_13, VAR_3, ((void*)0),
                                           VAR_1,
                                           VAR_9->next_copy,
                                           VAR_25->predecessor_id,
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


  FUNC_0(FUNC_15(&VAR_20, VAR_17, VAR_16, VAR_8));



  FUNC_0(FUNC_6(&VAR_18, VAR_20, VAR_12, 0, VAR_0, VAR_8));
  VAR_19 = VAR_18->node;
  VAR_10 = FUNC_9(VAR_19);
  FUNC_0(FUNC_12(&VAR_13, VAR_19, VAR_8));
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



          FUNC_0(FUNC_11(&VAR_24, VAR_19));
          if (! VAR_24)
            return VAR_2;



          FUNC_0(FUNC_10(&VAR_19, VAR_17, VAR_24, VAR_8));
          VAR_10 = FUNC_9(VAR_19);
          FUNC_0(FUNC_12(&VAR_13, VAR_19, VAR_8));
        }
    }



  FUNC_0(FUNC_4(&VAR_22, &VAR_23, VAR_17,
                                 VAR_18, VAR_8));


  VAR_11 = ((void*)0);
  VAR_14 = VAR_1;
  VAR_15 = VAR_1;

  if (VAR_22 > VAR_13)
    {
      const char *VAR_26;
      const char *VAR_27, *VAR_28;
      svn_fs_root_t *VAR_29;

      FUNC_0(FUNC_15(&VAR_29, VAR_17, VAR_22,
                                       VAR_8));
      FUNC_0(FUNC_5(&VAR_19, VAR_29, VAR_23, VAR_8));
      VAR_27 = FUNC_9(VAR_19);
      VAR_26 = FUNC_17(VAR_27, VAR_12);

      if (VAR_26)
        {



          FUNC_0(FUNC_8(&VAR_14, VAR_19));
          FUNC_0(FUNC_7(&VAR_28, VAR_19));

          VAR_15 = VAR_22;
          VAR_11 = FUNC_16(VAR_28, VAR_26, VAR_8);
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
                                       VAR_22, VAR_24, VAR_7);
    }

  return VAR_2;
}
