
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_state_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct file_baton {scalar_t__ new_text_base_sha1_checksum; int local_abspath; int propchanges; int old_revision; int * original_checksum; scalar_t__ add_existed; scalar_t__ adding_file; int edit_obstructed; int obstruction_found; int shadowed; struct dir_baton* dir_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {int cancel_baton; int cancel_func; int db; int diff3_cmd; int * target_revision; int ext_patterns; } ;
struct dir_baton {int local_abspath; } ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int *,int **,int *,int ,int ,int *,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int ,int ,scalar_t__,int *) ;
 int FUNC_5 (char const**,int ,int ,int ,int,int ,int ,int *,int *) ;
 int FUNC_6 (int **,int **,scalar_t__*,int ,int ,int ,scalar_t__,int *,int *,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_skel_t **VAR_9,
           svn_skel_t **VAR_10,
           svn_boolean_t *VAR_11,
           const char **VAR_12,
           svn_wc_notify_state_t *VAR_13,
           struct file_baton *VAR_14,
           apr_hash_t *VAR_15,
           apr_time_t VAR_16,
           apr_pool_t *VAR_17,
           apr_pool_t *VAR_18)
{
  struct edit_baton *VAR_19 = VAR_14->edit_baton;
  struct dir_baton *VAR_20 = VAR_14->dir_baton;
  svn_boolean_t VAR_21;
  svn_boolean_t VAR_22 = VAR_0;

  FUNC_1(! VAR_14->shadowed
                 && ! VAR_14->obstruction_found
                 && ! VAR_14->edit_obstructed);
  *VAR_9 = ((void*)0);
  *VAR_11 = VAR_0;
  *VAR_12 = ((void*)0);
  if (VAR_14->adding_file && !VAR_14->add_existed)
    {
      VAR_21 = VAR_0;
    }
  else
    {






      FUNC_0(FUNC_4(&VAR_21,
                                               VAR_19->db, VAR_14->local_abspath,
                                               VAR_0 ,
                                               VAR_18));
    }
  if (! VAR_21
      && VAR_14->new_text_base_sha1_checksum)
    {
      *VAR_11 = VAR_4;
    }
  else if (VAR_14->new_text_base_sha1_checksum)
    {



      FUNC_0(FUNC_6(VAR_9,
                                         VAR_10,
                                         &VAR_22,
                                         VAR_19->db,
                                         VAR_14->local_abspath,
                                         VAR_20->local_abspath,
                                         VAR_14->new_text_base_sha1_checksum,
                                         VAR_14->add_existed
                                                  ? ((void*)0)
                                                  : VAR_14->original_checksum,
                                         VAR_15,
                                         VAR_19->ext_patterns,
                                         VAR_14->old_revision,
                                         *VAR_19->target_revision,
                                         VAR_14->propchanges,
                                         VAR_19->diff3_cmd,
                                         VAR_19->cancel_func, VAR_19->cancel_baton,
                                         VAR_17, VAR_18));
    }
  else
    {



      apr_hash_t *VAR_23;



      svn_boolean_t VAR_24;

      VAR_24 = FUNC_3(VAR_14->propchanges);

      FUNC_0(FUNC_2(((void*)0), ((void*)0),
                                         &VAR_23,
                                         ((void*)0),
                                         VAR_19->db, VAR_14->local_abspath,
                                         VAR_15, VAR_4,
                                         VAR_18, VAR_18));
      if (VAR_24 || VAR_23)
        {
          if (VAR_21)
            {
              const char *VAR_25;



              FUNC_0(FUNC_5(
                        &VAR_25, VAR_14->local_abspath, VAR_19->db, VAR_14->local_abspath,
                        VAR_3
                          | VAR_2,
                        VAR_19->cancel_func, VAR_19->cancel_baton,
                        VAR_17, VAR_18));
              *VAR_11 = VAR_4;
              *VAR_12 = VAR_25;
            }
          else
            {




              *VAR_11 = VAR_4;
            }
        }
    }



  if (VAR_22)
    *VAR_13 = VAR_6;
  else if (VAR_14->new_text_base_sha1_checksum)
    {
      if (VAR_21)
        *VAR_13 = VAR_7;
      else
        *VAR_13 = VAR_5;
    }
  else
    *VAR_13 = VAR_8;

  return VAR_1;
}
