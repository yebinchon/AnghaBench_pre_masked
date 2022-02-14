
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct file_baton_t {int pool; int properties; int local_abspath; int digest; struct dir_baton_t* pb; struct edit_baton_t* eb; } ;
struct edit_baton_t {int notify_baton; int notify_func; int wc_ctx; } ;
struct dir_baton_t {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dir_baton_t*,int ) ;
 int FUNC_3 (struct dir_baton_t*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *,int ,int ,int ) ;
 int FUNC_7 (int **,int ,char const*,int ) ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_12(void *VAR_3,
           const char *VAR_4,
           apr_pool_t *VAR_5)
{
  struct file_baton_t *VAR_6 = VAR_3;
  struct edit_baton_t *VAR_7 = VAR_6->eb;
  struct dir_baton_t *VAR_8 = VAR_6->pb;

  FUNC_0(FUNC_2(VAR_8, VAR_6->pool));

  if (VAR_4)
    {
      svn_checksum_t *VAR_9;
      svn_checksum_t *VAR_10;

      FUNC_0(FUNC_7(&VAR_9, VAR_2,
                                     VAR_4, VAR_6->pool));
      VAR_10 = FUNC_4(VAR_6->digest, VAR_6->pool);

      if (! FUNC_5(VAR_9, VAR_10))
        return FUNC_9(
                    FUNC_6(VAR_9,
                                              VAR_10,
                                              VAR_6->pool,
                                         FUNC_1("Checksum mismatch for '%s'"),
                                              FUNC_8(
                                                    VAR_6->local_abspath,
                                                    VAR_6->pool)));
    }

  FUNC_0(FUNC_11(VAR_7->wc_ctx, VAR_6->local_abspath, VAR_6->properties,
                                VAR_1 ,
                                VAR_7->notify_func, VAR_7->notify_baton,
                                VAR_6->pool));

  FUNC_10(VAR_6->pool);
  FUNC_0(FUNC_3(VAR_8));

  return VAR_0;
}
