
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {int txn_root; int base_path; } ;
struct dir_baton {int was_copied; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (struct edit_baton*,struct dir_baton*,char const*,int ,int ,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int FUNC_4 (scalar_t__*,int ,char const*,int *) ;
 char* FUNC_5 (int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char *VAR_3,
               void *VAR_4,
               svn_revnum_t VAR_5,
               apr_pool_t *VAR_6,
               void **VAR_7)
{
  struct dir_baton *VAR_8 = VAR_4;
  struct edit_baton *VAR_9 = VAR_8->edit_baton;
  svn_node_kind_t VAR_10;
  const char *VAR_11;

  VAR_11 = FUNC_5(VAR_9->base_path,
                               FUNC_6(VAR_3, VAR_6), VAR_6);



  FUNC_0(FUNC_4(&VAR_10, VAR_9->txn_root, VAR_11, VAR_6));
  if (VAR_10 == VAR_2)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Path '%s' not present"),
                             VAR_3);


  *VAR_7 = FUNC_2(VAR_9, VAR_8, VAR_11, VAR_8->was_copied,
                                VAR_5, VAR_6);
  return VAR_1;
}
