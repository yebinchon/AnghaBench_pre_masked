
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
struct file_baton {int local_abspath; void* already_notified; int * edit_conflict; int pool; int name; int new_repos_relpath; int old_revision; int old_repos_relpath; int edit_baton; void* shadowed; void* obstruction_found; void* add_existed; void* skip_this; } ;
struct edit_baton {char* target_basename; int db; int target_abspath; scalar_t__ allow_unver_obstructions; int adds_as_modification; int clean_checkout; } ;
struct dir_baton {scalar_t__ deletion_conflicts; int pool; int not_present_nodes; scalar_t__ parent_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_3 ;
 void* VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int *,struct edit_baton*,struct dir_baton*,int ,int *) ;
 int FUNC_7 (int **,struct edit_baton*,int ,scalar_t__,int,scalar_t__,int ,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,int *,int ,int *) ;
 int FUNC_9 (struct edit_baton*,int ,scalar_t__,int ,int *) ;
 int FUNC_10 (struct file_baton**,struct dir_baton*,char const*,void*,int *) ;
 int FUNC_11 (struct file_baton*,int *) ;
 int FUNC_12 (int*,int*,int ,int ,int *) ;
 int FUNC_13 (struct edit_baton*,int ,int *) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (TYPE_1__*) ;
 TYPE_1__* FUNC_17 (int ,int *,int ,int ) ;
 TYPE_1__* FUNC_18 (TYPE_1__*) ;
 int * FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int *,char const**,int ,int ,int *,int ,int *) ;
 int FUNC_26 (int *,int ,int ,int ,int ,char const*,int ,int *) ;
 int * FUNC_27 (int ) ;
 int FUNC_28 (int*,int ,int ,int *) ;
 int FUNC_29 (int ,int ,int *,int *,int *) ;
 TYPE_1__* FUNC_30 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int ,int ,int *,int *) ;
 int FUNC_31 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int ,int ,int *,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_32 (int ,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static svn_error_t *
FUNC_33(const char *VAR_20,
         void *VAR_21,
         const char *VAR_22,
         svn_revnum_t VAR_23,
         apr_pool_t *VAR_24,
         void **VAR_25)
{
  struct dir_baton *VAR_26 = VAR_21;
  struct edit_baton *VAR_27 = VAR_26->edit_baton;
  struct file_baton *VAR_28;
  svn_node_kind_t VAR_29;
  svn_node_kind_t VAR_30;
  svn_wc__db_status_t VAR_31;
  apr_pool_t *VAR_32;
  svn_boolean_t VAR_33;
  svn_boolean_t VAR_34 = VAR_0;
  svn_boolean_t VAR_35;
  svn_skel_t *VAR_36 = ((void*)0);
  svn_error_t *VAR_37 = VAR_3;

  FUNC_2(! (VAR_22 || FUNC_3(VAR_23)));

  FUNC_1(FUNC_10(&VAR_28, VAR_26, VAR_20, VAR_4, VAR_24));
  *VAR_25 = VAR_28;

  if (VAR_28->skip_this)
    return VAR_3;

  FUNC_1(FUNC_6(&VAR_28->new_repos_relpath, VAR_28->local_abspath,
                                  ((void*)0), VAR_27, VAR_26, VAR_28->pool, VAR_24));
  FUNC_1(FUNC_11(VAR_28, VAR_24));



  VAR_32 = FUNC_23(VAR_24);



  if (FUNC_32(VAR_28->name, VAR_24))
    return FUNC_17(
       VAR_1, ((void*)0),
       FUNC_4("Failed to add file '%s': object of the same name as the "
         "administrative directory"),
       FUNC_15(VAR_28->local_abspath, VAR_24));

  if (!VAR_27->clean_checkout)
    {
      FUNC_1(FUNC_21(VAR_28->local_abspath, &VAR_29, VAR_32));

      VAR_37 = FUNC_30(&VAR_31, &VAR_30, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                &VAR_33, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                VAR_27->db, VAR_28->local_abspath,
                                VAR_32, VAR_32);
    }
  else
    {
      VAR_29 = VAR_7;
      VAR_31 = VAR_13;
      VAR_30 = VAR_9;
      VAR_33 = VAR_0;
    }

  if (VAR_37)
    {
      if (VAR_37->apr_err != VAR_2)
        return FUNC_18(VAR_37);

      FUNC_16(VAR_37);
      VAR_30 = VAR_9;
      VAR_33 = VAR_0;

      VAR_35 = VAR_0;
    }
  else if (VAR_31 == VAR_12 && VAR_30 == VAR_9)
    {
      FUNC_2(VAR_33);
      VAR_35 = VAR_0;
    }
  else if (VAR_31 == VAR_12
           || VAR_31 == VAR_11)
    {
      svn_boolean_t VAR_38;

      FUNC_1(FUNC_28(&VAR_38, VAR_27->db, VAR_28->local_abspath,
                                   VAR_32));

      if (VAR_38)
        {
          FUNC_20(VAR_26->not_present_nodes,
                        FUNC_5(VAR_26->pool, VAR_28->name),
                        FUNC_22(VAR_5));
        }
      else if (VAR_30 == VAR_5)
        {



        }
      else
        {
          FUNC_2(VAR_30 == VAR_6
                         || VAR_30 == VAR_8);
        }

      FUNC_1(FUNC_13(VAR_27, VAR_28->local_abspath, VAR_24));
      VAR_28->skip_this = VAR_4;
      VAR_28->already_notified = VAR_4;

      FUNC_9(VAR_27, VAR_28->local_abspath, VAR_30,
                      VAR_19, VAR_32);

      FUNC_24(VAR_32);

      return VAR_3;
    }
  else
    VAR_35 = FUNC_0(VAR_31);



  if (VAR_28->shadowed)
    VAR_33 = VAR_0;
  else if (VAR_33)
    {
      if (VAR_26->deletion_conflicts)
        VAR_36 = FUNC_19(VAR_26->deletion_conflicts, VAR_28->name);

      if (VAR_36)
        {
          svn_wc_conflict_reason_t VAR_39;
          const char *VAR_40;



          FUNC_1(FUNC_25(&VAR_39, ((void*)0),
                                                      &VAR_40,
                                                      VAR_27->db,
                                                      VAR_28->local_abspath,
                                                      VAR_36,
                                                      VAR_28->pool, VAR_32));

          VAR_36 = FUNC_27(VAR_28->pool);

          FUNC_1(FUNC_26(
                                        VAR_36,
                                        VAR_27->db, VAR_28->local_abspath,
                                        VAR_39, VAR_15,
                                        VAR_40,
                                        VAR_28->pool, VAR_32));



          VAR_28->edit_conflict = VAR_36;
          VAR_36 = ((void*)0);
          VAR_28->shadowed = VAR_4;
          VAR_33 = VAR_0;
        }
      else
        FUNC_1(FUNC_12(&VAR_33, &VAR_34,
                                        VAR_27->db, VAR_28->local_abspath, VAR_24));
    }


  if (VAR_33)
    {
      FUNC_1(FUNC_13(VAR_27, VAR_28->local_abspath, VAR_24));

      VAR_28->skip_this = VAR_4;
      VAR_28->already_notified = VAR_4;
      FUNC_20(VAR_26->not_present_nodes, FUNC_5(VAR_26->pool, VAR_28->name),
                    FUNC_22(VAR_6));

      FUNC_9(VAR_27, VAR_28->local_abspath, VAR_6,
                      VAR_17, VAR_32);

      FUNC_24(VAR_32);

      return VAR_3;
    }
  else if (VAR_34)
    {
      VAR_28->shadowed = VAR_4;
    }

  if (VAR_28->shadowed)
    {

    }
  else if (VAR_35)
    {
      svn_boolean_t VAR_41;


      if (VAR_31 == VAR_10)
        FUNC_1(FUNC_31(&VAR_31, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0),
                                         VAR_27->db, VAR_28->local_abspath,
                                         VAR_32, VAR_32));


      VAR_41 = (VAR_30 == VAR_6
                       || VAR_30 == VAR_8);
      if (!VAR_27->adds_as_modification
          || !VAR_41
          || VAR_31 != VAR_10)
        {
          FUNC_1(FUNC_7(&VAR_36, VAR_27,
                                      VAR_28->local_abspath,
                                      VAR_31, VAR_0, VAR_7,
                                      VAR_14,
                                      VAR_28->pool, VAR_32));
        }

      if (VAR_36 == ((void*)0))
        VAR_28->add_existed = VAR_4;
      else
        VAR_28->shadowed = VAR_4;

    }
  else if (VAR_29 != VAR_7)
    {

      VAR_28->obstruction_found = VAR_4;



      if (! (VAR_29 == VAR_6 && VAR_27->allow_unver_obstructions))
        {

          VAR_28->shadowed = VAR_4;


          VAR_36 = FUNC_27(VAR_28->pool);

          FUNC_1(FUNC_26(
                                        VAR_36,
                                        VAR_27->db, VAR_28->local_abspath,
                                        VAR_16,
                                        VAR_14,
                                        ((void*)0),
                                        VAR_28->pool, VAR_32));
        }
    }




  if (VAR_26->parent_baton
      || *VAR_27->target_basename == '\0'
      || (FUNC_14(VAR_28->local_abspath, VAR_27->target_abspath) != 0))
    {
      FUNC_20(VAR_26->not_present_nodes, FUNC_5(VAR_26->pool, VAR_28->name),
                    FUNC_22(VAR_6));
    }

  if (VAR_36 != ((void*)0))
    {
      FUNC_1(FUNC_8(VAR_36,
                                VAR_28->edit_baton,
                                VAR_28->local_abspath,
                                VAR_28->old_repos_relpath,
                                VAR_28->old_revision,
                                VAR_28->new_repos_relpath,
                                VAR_30, VAR_6,
                                VAR_26->deletion_conflicts
                                  ? FUNC_19(VAR_26->deletion_conflicts,
                                                  VAR_28->name)
                                  : ((void*)0),
                                VAR_28->pool, VAR_32));

      FUNC_1(FUNC_29(VAR_27->db,
                                          VAR_28->local_abspath,
                                          VAR_36, ((void*)0),
                                          VAR_32));

      VAR_28->edit_conflict = VAR_36;

      VAR_28->already_notified = VAR_4;
      FUNC_9(VAR_27, VAR_28->local_abspath, VAR_6,
                      VAR_18, VAR_32);
    }

  FUNC_24(VAR_32);

  return VAR_3;
}
