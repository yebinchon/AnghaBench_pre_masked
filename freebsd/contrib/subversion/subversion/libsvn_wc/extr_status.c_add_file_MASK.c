
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {void* added; } ;
struct dir_baton {void* text_changed; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 void* VAR_1 ;
 struct file_baton* FUNC_0 (struct dir_baton*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_2,
         void *VAR_3,
         const char *VAR_4,
         svn_revnum_t VAR_5,
         apr_pool_t *VAR_6,
         void **VAR_7)
{
  struct dir_baton *VAR_8 = VAR_3;
  struct file_baton *VAR_9 = FUNC_0(VAR_8, VAR_2, VAR_6);


  VAR_8->text_changed = VAR_1;


  VAR_9->added = VAR_1;

  *VAR_7 = VAR_9;
  return VAR_0;
}
