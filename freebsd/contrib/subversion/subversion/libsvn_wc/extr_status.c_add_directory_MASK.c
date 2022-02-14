
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
struct dir_baton {void* text_changed; void* added; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (void**,char const*,struct edit_baton*,struct dir_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_2,
              void *VAR_3,
              const char *VAR_4,
              svn_revnum_t VAR_5,
              apr_pool_t *VAR_6,
              void **VAR_7)
{
  struct dir_baton *VAR_8 = VAR_3;
  struct edit_baton *VAR_9 = VAR_8->edit_baton;
  struct dir_baton *VAR_10;

  FUNC_0(FUNC_1(VAR_7, VAR_2, VAR_9, VAR_8, VAR_6));


  VAR_10 = *VAR_7;
  VAR_10->added = VAR_1;


  VAR_8->text_changed = VAR_1;

  return VAR_0;
}
