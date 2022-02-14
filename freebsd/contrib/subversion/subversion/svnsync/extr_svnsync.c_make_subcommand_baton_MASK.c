
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* svn_revnum_t ;
struct TYPE_9__ {int auth_baton; void* open_tmp_file; } ;
struct TYPE_8__ {int auth_baton; void* open_tmp_file; } ;
struct TYPE_10__ {char const* to_url; char const* from_url; void* end_rev; void* start_rev; int source_prop_encoding; int allow_non_empty; int skip_unchanged; int quiet; TYPE_2__ sync_callbacks; TYPE_1__ source_callbacks; int config; } ;
typedef TYPE_3__ subcommand_baton_t ;
struct TYPE_11__ {int source_prop_encoding; int allow_non_empty; int skip_unchanged; int quiet; int sync_auth_baton; int source_auth_baton; int config; } ;
typedef TYPE_4__ opt_baton_t ;
typedef int apr_pool_t ;


 TYPE_3__* FUNC_0 (int *,int) ;
 void* VAR_0 ;

__attribute__((used)) static subcommand_baton_t *
FUNC_1(opt_baton_t *VAR_1,
                      const char *VAR_2,
                      const char *VAR_3,
                      svn_revnum_t VAR_4,
                      svn_revnum_t VAR_5,
                      apr_pool_t *VAR_6)
{
  subcommand_baton_t *VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7));
  VAR_7->config = VAR_1->config;
  VAR_7->source_callbacks.open_tmp_file = VAR_0;
  VAR_7->source_callbacks.auth_baton = VAR_1->source_auth_baton;
  VAR_7->sync_callbacks.open_tmp_file = VAR_0;
  VAR_7->sync_callbacks.auth_baton = VAR_1->sync_auth_baton;
  VAR_7->quiet = VAR_1->quiet;
  VAR_7->skip_unchanged = VAR_1->skip_unchanged;
  VAR_7->allow_non_empty = VAR_1->allow_non_empty;
  VAR_7->to_url = VAR_2;
  VAR_7->source_prop_encoding = VAR_1->source_prop_encoding;
  VAR_7->from_url = VAR_3;
  VAR_7->start_rev = VAR_4;
  VAR_7->end_rev = VAR_5;
  return VAR_7;
}
