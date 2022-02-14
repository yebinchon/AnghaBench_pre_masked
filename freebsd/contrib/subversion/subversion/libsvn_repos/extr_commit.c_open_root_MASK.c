
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int base_path; int pool; int txn; int txn_root; int txn_name; int revprop_table; int repos; scalar_t__ txn_owner; int fs; } ;
struct dir_baton {scalar_t__ base_rev; int path; int was_copied; int * pool; int * parent; void* edit_baton; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 struct dir_baton* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (scalar_t__*,int ,int ) ;
 int * FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int ,scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_3,
          svn_revnum_t VAR_4,
          apr_pool_t *VAR_5,
          void **VAR_6)
{
  struct dir_baton *VAR_7;
  struct edit_baton *VAR_8 = VAR_3;
  svn_revnum_t VAR_9;




  FUNC_0(FUNC_7(&VAR_9, VAR_8->fs, VAR_8->pool));

  if (VAR_4 > VAR_9)
    return FUNC_4(VAR_1, ((void*)0),
                             FUNC_1("No such revision %ld (HEAD is %ld)"),
                             VAR_4, VAR_9);



  if (VAR_8->txn_owner)
    {
      FUNC_0(FUNC_9(&(VAR_8->txn),
                                                 VAR_8->repos,
                                                 VAR_9,
                                                 VAR_8->revprop_table,
                                                 VAR_8->pool));
    }
  else

    {
      apr_array_header_t *VAR_10 = FUNC_8(VAR_8->revprop_table,
                                                         VAR_5);
      FUNC_0(FUNC_10(VAR_8->txn, VAR_10, VAR_5));
    }
  FUNC_0(FUNC_5(&(VAR_8->txn_name), VAR_8->txn, VAR_8->pool));
  FUNC_0(FUNC_6(&(VAR_8->txn_root), VAR_8->txn, VAR_8->pool));




  VAR_7 = FUNC_2(VAR_5, sizeof(*VAR_7));
  VAR_7->edit_baton = VAR_3;
  VAR_7->parent = ((void*)0);
  VAR_7->pool = VAR_5;
  VAR_7->was_copied = VAR_0;
  VAR_7->path = FUNC_3(VAR_5, VAR_8->base_path);
  VAR_7->base_rev = VAR_4;

  *VAR_6 = VAR_7;
  return VAR_2;
}
