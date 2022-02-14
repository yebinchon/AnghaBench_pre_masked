
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_wc_committed_queue_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int state_flags; scalar_t__ kind; int incoming_prop_changes; int path; scalar_t__ copyfrom_url; } ;
typedef TYPE_1__ svn_client_commit_item3_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int *,int ,int,int,int ,int,int,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_wc_committed_queue_t *VAR_8,
                         const svn_client_commit_item3_t *VAR_9,
                         svn_wc_context_t *VAR_10,
                         svn_boolean_t VAR_11,
                         svn_boolean_t VAR_12,
                         svn_boolean_t VAR_13,
                         const svn_checksum_t *VAR_14,
                         apr_pool_t *VAR_15)
{
  svn_boolean_t VAR_16 = VAR_0;
  svn_boolean_t VAR_17;

  if (! VAR_13
      && (VAR_9->state_flags & VAR_1)
      && (VAR_9->kind == VAR_7)
      && (VAR_9->copyfrom_url))
    VAR_16 = VAR_6;

  VAR_17 = (! VAR_12 && (VAR_9->state_flags
                                       & (VAR_3
                                          | VAR_1
                                          | VAR_2)));





  if (VAR_9->state_flags & VAR_2)
    VAR_17 = VAR_6;

  return FUNC_0(
         FUNC_1(VAR_8, VAR_10, VAR_9->path,
                                 VAR_16,
                                 0 != (VAR_9->state_flags &
                                       (VAR_1
                                        | VAR_2
                                        | VAR_5
                                        | VAR_4)),
                                 VAR_9->incoming_prop_changes,
                                 VAR_17, !VAR_11,
                                 VAR_14, VAR_15));
}
