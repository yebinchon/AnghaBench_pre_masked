
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {char const* path; struct edit_baton* edit_baton; } ;
struct edit_baton {int txn_root; int base_path; } ;
struct dir_baton {struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 struct file_baton* FUNC_2 (int *,int) ;
 int FUNC_3 (struct edit_baton*,char const*,int ,int ,int *) ;
 int FUNC_4 (struct edit_baton*,char const*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ,char const*,int *) ;
 char* FUNC_6 (int ,int ,int *) ;
 int VAR_2 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_3,
          void *VAR_4,
          svn_revnum_t VAR_5,
          apr_pool_t *VAR_6,
          void **VAR_7)
{
  struct file_baton *VAR_8;
  struct dir_baton *VAR_9 = VAR_4;
  struct edit_baton *VAR_10 = VAR_9->edit_baton;
  svn_revnum_t VAR_11;
  apr_pool_t *VAR_12 = FUNC_7(VAR_6);
  const char *VAR_13;

  VAR_13 = FUNC_6(VAR_10->base_path,
                               FUNC_9(VAR_3, VAR_6), VAR_6);


  FUNC_0(FUNC_3(VAR_10, VAR_13, VAR_10->txn_root,
                      VAR_1, VAR_12));


  FUNC_0(FUNC_5(&VAR_11, VAR_10->txn_root, VAR_13,
                                  VAR_12));



  if (FUNC_1(VAR_5))
    FUNC_0(FUNC_4(VAR_10, VAR_13, VAR_2,
                              VAR_5, VAR_11));


  VAR_8 = FUNC_2(VAR_6, sizeof(*VAR_8));
  VAR_8->edit_baton = VAR_10;
  VAR_8->path = VAR_13;

  *VAR_7 = VAR_8;


  FUNC_8(VAR_12);

  return VAR_0;
}
