
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct svndumpfilter_opt_state {int skip_missing_merge_sources; int prefixes; int glob; int quiet; int preserve_revprops; scalar_t__ drop_all_empty_revs; scalar_t__ drop_empty_revs; scalar_t__ renumber_revs; } ;
struct parse_baton_t {int do_renumber_revs; int allow_deltas; void* oldest_original_rev; void* last_live_revision; void* renumber_history; void* dropped_nodes; scalar_t__ rev_drop_count; int skip_missing_merge_sources; int prefixes; int glob; int quiet; int preserve_revprops; scalar_t__ drop_all_empty_revs; scalar_t__ drop_empty_revs; int do_exclude; int out_stream; int in_stream; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int *) ;
 struct parse_baton_t* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct parse_baton_t **VAR_4,
                       struct svndumpfilter_opt_state *VAR_5,
                       svn_boolean_t VAR_6,
                       apr_pool_t *VAR_7)
{
  struct parse_baton_t *VAR_8 = FUNC_2(VAR_7, sizeof(*VAR_8));


  FUNC_0(FUNC_3(&VAR_8->in_stream, VAR_3, VAR_7));


  FUNC_0(FUNC_4(&VAR_8->out_stream, VAR_7));

  VAR_8->do_exclude = VAR_6;



  VAR_8->do_renumber_revs =
    (VAR_5->renumber_revs && (VAR_5->drop_empty_revs
                                  || VAR_5->drop_all_empty_revs));

  VAR_8->drop_empty_revs = VAR_5->drop_empty_revs;
  VAR_8->drop_all_empty_revs = VAR_5->drop_all_empty_revs;
  VAR_8->preserve_revprops = VAR_5->preserve_revprops;
  VAR_8->quiet = VAR_5->quiet;
  VAR_8->glob = VAR_5->glob;
  VAR_8->prefixes = VAR_5->prefixes;
  VAR_8->skip_missing_merge_sources = VAR_5->skip_missing_merge_sources;
  VAR_8->rev_drop_count = 0;
  VAR_8->dropped_nodes = FUNC_1(VAR_7);
  VAR_8->renumber_history = FUNC_1(VAR_7);
  VAR_8->last_live_revision = VAR_1;
  VAR_8->oldest_original_rev = VAR_1;
  VAR_8->allow_deltas = VAR_0;

  *VAR_4 = VAR_8;
  return VAR_2;
}
