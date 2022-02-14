
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct revision_baton {scalar_t__ rev; int pool; int revprop_table; struct parse_baton* pb; scalar_t__ rev_offset; int * db; } ;
struct parse_baton {scalar_t__ oldest_dumpstream_rev; int * commit_edit_baton; int * commit_editor; int session; } ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int32_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 struct revision_baton* FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void **VAR_2,
                    apr_hash_t *VAR_3,
                    void *VAR_4,
                    apr_pool_t *VAR_5)
{
  struct revision_baton *VAR_6;
  struct parse_baton *VAR_7;
  const char *VAR_8;
  svn_revnum_t VAR_9;

  VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6));
  VAR_7 = VAR_4;
  VAR_6->pool = FUNC_6(VAR_5);
  VAR_6->pb = VAR_7;
  VAR_6->db = ((void*)0);

  VAR_8 = FUNC_5(VAR_3, VAR_1);
  if (VAR_8)
    VAR_6->rev = FUNC_2(VAR_8);

  FUNC_0(FUNC_7(VAR_7->session, &VAR_9, VAR_5));





  VAR_6->rev_offset = (apr_int32_t) ((VAR_6->rev) - (VAR_9 + 1));


  if ((VAR_6->rev > 0) && (!FUNC_1(VAR_7->oldest_dumpstream_rev)))
    VAR_7->oldest_dumpstream_rev = VAR_6->rev;



  VAR_6->pb->commit_editor = ((void*)0);
  VAR_6->pb->commit_edit_baton = ((void*)0);
  VAR_6->revprop_table = FUNC_3(VAR_6->pool);

  *VAR_2 = VAR_6;
  return VAR_0;
}
