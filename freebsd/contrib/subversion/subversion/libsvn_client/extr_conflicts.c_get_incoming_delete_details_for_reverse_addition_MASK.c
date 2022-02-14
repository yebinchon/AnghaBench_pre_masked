
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct find_added_rev_baton {char const* victim_abspath; int * repos_relpath; void* added_rev; int * pool; int * parent_repos_relpath; int * ctx; int member_0; } ;
struct conflict_tree_incoming_delete_details {scalar_t__ replacing_node_kind; void* added_rev; void* rev_author; void* repos_relpath; void* deleted_rev; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (char*) ;
 struct conflict_tree_incoming_delete_details* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int *) ;
 int VAR_4 ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int **,char const**,char const*,int *,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 char* FUNC_6 (char const*,char const*,int *) ;
 int FUNC_7 (int *,char*,void*,scalar_t__*,int *) ;
 int FUNC_8 (int *,char*,int ,int ,int ,int ,struct find_added_rev_baton*,int *) ;
 int FUNC_9 (int *,void*,int ,TYPE_1__**,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(
  struct conflict_tree_incoming_delete_details **VAR_6,
  const char *VAR_7,
  const char *VAR_8,
  svn_revnum_t VAR_9,
  svn_revnum_t VAR_10,
  svn_client_ctx_t *VAR_11,
  const char *VAR_12,
  apr_pool_t *VAR_13,
  apr_pool_t *VAR_14)
{
  svn_ra_session_t *VAR_15;
  const char *VAR_16;
  const char *VAR_17;
  svn_string_t *VAR_18;
  struct find_added_rev_baton VAR_19 = { 0 };

  VAR_16 = FUNC_6(VAR_7, VAR_8,
                                    VAR_14);
  FUNC_0(FUNC_5(&VAR_15,
                                               &VAR_17,
                                               VAR_16, ((void*)0), ((void*)0),
                                               VAR_0,
                                               VAR_0,
                                               VAR_11,
                                               VAR_14,
                                               VAR_14));

  *VAR_6 = FUNC_2(VAR_13, sizeof(**VAR_6));
  VAR_19.ctx = VAR_11;
  VAR_19.victim_abspath = VAR_12;
  VAR_19.added_rev = VAR_1;
  VAR_19.repos_relpath = ((void*)0);
  VAR_19.parent_repos_relpath = ((void*)0);
  VAR_19.pool = VAR_14;


  FUNC_0(FUNC_8(VAR_15, "", VAR_9,
                                       VAR_9, VAR_10,
                                       VAR_4, &VAR_19,
                                       VAR_14));

  FUNC_0(FUNC_9(VAR_15, VAR_19.added_rev,
                          VAR_3,
                          &VAR_18, VAR_14));
  (*VAR_6)->deleted_rev = VAR_1;
  (*VAR_6)->added_rev = VAR_19.added_rev;
  (*VAR_6)->repos_relpath = FUNC_3(VAR_13, VAR_19.repos_relpath);
  if (VAR_18)
    (*VAR_6)->rev_author = FUNC_3(VAR_13, VAR_18->data);
  else
    (*VAR_6)->rev_author = FUNC_1("unknown author");


  (*VAR_6)->replacing_node_kind = VAR_5;
  if ((*VAR_6)->added_rev > 0)
    {
      svn_node_kind_t VAR_20;

      FUNC_0(FUNC_7(VAR_15, "",
                                FUNC_4((*VAR_6)->added_rev),
                                &VAR_20, VAR_14));
      if (VAR_20 != VAR_5)
        FUNC_0(FUNC_7(VAR_15, "", (*VAR_6)->added_rev,
                                  &(*VAR_6)->replacing_node_kind,
                                  VAR_14));
    }

  return VAR_2;
}
