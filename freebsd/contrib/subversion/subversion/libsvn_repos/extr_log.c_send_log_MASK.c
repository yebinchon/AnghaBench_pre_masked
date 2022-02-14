
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_8__ {void* subtractive_merge; void* has_children; int member_0; } ;
typedef TYPE_1__ svn_repos_log_entry_t ;
typedef scalar_t__ svn_mergeinfo_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
typedef int svn_bit_array__t ;
struct TYPE_9__ {int revision_receiver_baton; int (* revision_receiver ) (int ,TYPE_1__*,int *) ;TYPE_3__* path_change_receiver_baton; int path_change_receiver; } ;
typedef TYPE_2__ log_callbacks_t ;
struct TYPE_10__ {scalar_t__ found_rev_of_interest; struct TYPE_10__* inner_baton; int inner; scalar_t__ log_target_history_as_mergeinfo; int rev; } ;
typedef TYPE_3__ interesting_merge_baton_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int const*,TYPE_2__ const*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_revnum_t VAR_4,
         svn_fs_t *VAR_5,
         svn_mergeinfo_t VAR_6,
         svn_bit_array__t *VAR_7,
         svn_boolean_t VAR_8,
         svn_boolean_t VAR_9,
         const apr_array_header_t *VAR_10,
         svn_boolean_t VAR_11,
         const log_callbacks_t *VAR_12,
         apr_pool_t *VAR_13)
{
  svn_repos_log_entry_t VAR_14 = { 0 };
  log_callbacks_t VAR_15 = *VAR_12;

  interesting_merge_baton_t VAR_16;






  if (VAR_9
      && VAR_6
      && FUNC_1(VAR_6))
    {
      VAR_16.found_rev_of_interest = VAR_0;
      VAR_16.rev = VAR_4;
      VAR_16.log_target_history_as_mergeinfo = VAR_6;
      VAR_16.inner = VAR_12->path_change_receiver;
      VAR_16.inner_baton = VAR_12->path_change_receiver_baton;

      VAR_15.path_change_receiver = VAR_3;
      VAR_15.path_change_receiver_baton = &VAR_16;
      VAR_12 = &VAR_15;
    }
  else
    {
      VAR_16.found_rev_of_interest = VAR_2;
    }

  FUNC_0(FUNC_2(&VAR_14, VAR_4, VAR_5, VAR_10, VAR_12, VAR_13));
  VAR_14.has_children = VAR_11;
  VAR_14.subtractive_merge = VAR_8;



  if (VAR_16.found_rev_of_interest)
    {
      apr_pool_t *VAR_17;


      if (VAR_7 && VAR_9)
        {
          if (FUNC_4(VAR_7, VAR_4))
            {

              return VAR_1;
            }
          else
            {



              FUNC_5(VAR_7, VAR_4, VAR_2);
            }
        }



      VAR_17 = FUNC_6(VAR_13);
      FUNC_0(VAR_12->revision_receiver(VAR_12->revision_receiver_baton,
                                           &VAR_14, VAR_17));
      FUNC_7(VAR_17);
    }

  return VAR_1;
}
