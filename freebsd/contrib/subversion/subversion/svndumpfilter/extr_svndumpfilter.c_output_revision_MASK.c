
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct revmap_t {void* was_dropped; int rev; } ;
struct revision_baton_t {scalar_t__ rev_orig; TYPE_1__* pb; int rev_actual; int * props; int original_headers; scalar_t__ had_dropped_nodes; scalar_t__ has_nodes; void* writing_begun; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {scalar_t__ oldest_original_rev; int quiet; int * renumber_history; int last_live_revision; scalar_t__ do_renumber_revs; int rev_drop_count; int out_stream; int drop_all_empty_revs; scalar_t__ drop_empty_revs; int preserve_revprops; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,int,struct revmap_t*) ;
 void* FUNC_6 (int *,int) ;
 int VAR_5 ;
 int FUNC_7 (int ,int *,int ,scalar_t__,...) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ,int *,void*,int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(struct revision_baton_t *VAR_6)
{
  svn_boolean_t VAR_7 = VAR_0;
  apr_pool_t *VAR_8 = FUNC_4(VAR_6->props);
  apr_pool_t *VAR_9 = FUNC_10(VAR_8);

  VAR_6->writing_begun = VAR_4;







  if ((! VAR_6->pb->preserve_revprops)
      && (! VAR_6->has_nodes)
      && VAR_6->had_dropped_nodes
      && (! VAR_6->pb->drop_empty_revs)
      && (! VAR_6->pb->drop_all_empty_revs))
    {
      apr_hash_t *VAR_10 = VAR_6->props;
      VAR_6->props = FUNC_3(VAR_8);
      FUNC_9(VAR_6->props, VAR_2,
                    FUNC_8(VAR_10, VAR_2));
      FUNC_9(VAR_6->props, VAR_3,
                    FUNC_13(FUNC_2("This is an empty revision for "
                                        "padding."), VAR_8));
    }
  if (VAR_6->has_nodes || (VAR_6->rev_orig == 0))
    VAR_7 = VAR_4;
  else if (VAR_6->pb->drop_empty_revs)
    VAR_7 = ! VAR_6->had_dropped_nodes;
  else if (! VAR_6->pb->drop_all_empty_revs)
    VAR_7 = VAR_4;

  if (VAR_7)
    {

      FUNC_0(FUNC_12(VAR_6->pb->out_stream,
                                              VAR_6->rev_actual,
                                              VAR_6->original_headers,
                                              VAR_6->props,
                                              VAR_0 ,
                                              VAR_9));


      if (VAR_6->rev_orig > 0
          && !FUNC_1(VAR_6->pb->oldest_original_rev))
        VAR_6->pb->oldest_original_rev = VAR_6->rev_orig;

      if (VAR_6->pb->do_renumber_revs)
        {
          svn_revnum_t *VAR_11;
          struct revmap_t *VAR_12;
          apr_pool_t *VAR_13 = FUNC_4(VAR_6->pb->renumber_history);
          VAR_11 = FUNC_6(VAR_13, sizeof(*VAR_11));
          VAR_12 = FUNC_6(VAR_13, sizeof(*VAR_12));
          *VAR_11 = VAR_6->rev_orig;
          VAR_12->rev = VAR_6->rev_actual;
          VAR_12->was_dropped = VAR_0;
          FUNC_5(VAR_6->pb->renumber_history, VAR_11,
                       sizeof(*VAR_11), VAR_12);
          VAR_6->pb->last_live_revision = VAR_6->rev_actual;
        }

      if (! VAR_6->pb->quiet)
        FUNC_0(FUNC_7(VAR_5, VAR_9,
                                    FUNC_2("Revision %ld committed as %ld.\n"),
                                    VAR_6->rev_orig, VAR_6->rev_actual));
    }
  else
    {

      VAR_6->pb->rev_drop_count++;
      if (VAR_6->pb->do_renumber_revs)
        {
          svn_revnum_t *VAR_14;
          struct revmap_t *VAR_15;
          apr_pool_t *VAR_16 = FUNC_4(VAR_6->pb->renumber_history);
          VAR_14 = FUNC_6(VAR_16, sizeof(*VAR_14));
          VAR_15 = FUNC_6(VAR_16, sizeof(*VAR_15));
          *VAR_14 = VAR_6->rev_orig;
          VAR_15->rev = VAR_6->pb->last_live_revision;
          VAR_15->was_dropped = VAR_4;
          FUNC_5(VAR_6->pb->renumber_history, VAR_14,
                       sizeof(*VAR_14), VAR_15);
        }

      if (! VAR_6->pb->quiet)
        FUNC_0(FUNC_7(VAR_5, VAR_9,
                                    FUNC_2("Revision %ld skipped.\n"),
                                    VAR_6->rev_orig));
    }
  FUNC_11(VAR_9);
  return VAR_1;
}
