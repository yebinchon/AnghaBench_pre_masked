
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct ev2_dir_baton {scalar_t__ base_revision; int eb; } ;
struct change_node {scalar_t__ action; scalar_t__ deleting; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 struct change_node* FUNC_2 (int ,char const*) ;
 char* FUNC_3 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_3,
                 svn_revnum_t VAR_4,
                 void *VAR_5,
                 apr_pool_t *VAR_6)
{
  struct ev2_dir_baton *VAR_7 = VAR_5;
  svn_revnum_t VAR_8;
  const char *VAR_9 = FUNC_3(VAR_7->eb, VAR_3, VAR_6);
  struct change_node *VAR_10 = FUNC_2(VAR_7->eb, VAR_9);

  if (FUNC_1(VAR_4))
    VAR_8 = VAR_4;
  else
    VAR_8 = VAR_7->base_revision;

  FUNC_0(VAR_10->action == VAR_1);
  VAR_10->action = VAR_0;

  FUNC_0(!FUNC_1(VAR_10->deleting)
                 || VAR_10->deleting == VAR_8);
  VAR_10->deleting = VAR_8;

  return VAR_2;
}
