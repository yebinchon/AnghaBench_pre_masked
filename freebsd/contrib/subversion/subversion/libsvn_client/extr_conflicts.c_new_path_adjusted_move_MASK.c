
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
struct repos_move_info {int node_kind; int copyfrom_rev; int rev_author; int rev; void* moved_to_repos_relpath; void* moved_from_repos_relpath; } ;
typedef int apr_pool_t ;


 struct repos_move_info* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (void*,char const*,int *) ;

__attribute__((used)) static struct repos_move_info *
FUNC_3(struct repos_move_info *VAR_0,
                       const char *VAR_1,
                       svn_node_kind_t VAR_2,
                       apr_pool_t *VAR_3)
{
  struct repos_move_info *VAR_4;

  VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->moved_from_repos_relpath =
    FUNC_2(VAR_0->moved_from_repos_relpath, VAR_1,
                     VAR_3);
  VAR_4->moved_to_repos_relpath =
    FUNC_2(VAR_0->moved_to_repos_relpath, VAR_1,
                     VAR_3);
  VAR_4->rev = VAR_0->rev;
  VAR_4->rev_author = FUNC_1(VAR_3, VAR_0->rev_author);
  VAR_4->copyfrom_rev = VAR_0->copyfrom_rev;
  VAR_4->node_kind = VAR_2;


  return VAR_4;
}
