
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {int action; int is_copy; int copyfrom_rev; int pool; int copyfrom_path; } ;
struct dir_baton {int deleted_entries; int eb; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 struct file_baton* FUNC_3 (char const*,struct dir_baton*,int *) ;
 void* FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char *VAR_4,
         void *VAR_5,
         const char *VAR_6,
         svn_revnum_t VAR_7,
         apr_pool_t *VAR_8,
         void **VAR_9)
{
  struct dir_baton *VAR_10 = VAR_5;
  struct file_baton *VAR_11;
  void *VAR_12;

  FUNC_1(FUNC_2(VAR_10->eb, VAR_8));


  VAR_11 = FUNC_3(VAR_4, VAR_10, VAR_8);


  VAR_12 = FUNC_4(VAR_10->deleted_entries, VAR_4);


  if (FUNC_0(VAR_6, VAR_7))
    {
      VAR_11->copyfrom_path = FUNC_6(VAR_6, VAR_11->pool);
      VAR_11->copyfrom_rev = VAR_7;
      VAR_11->is_copy = VAR_1;
    }
  VAR_11->action = VAR_12 ? VAR_3 : VAR_2;


  if (VAR_12)
    FUNC_5(VAR_10->deleted_entries, VAR_4, ((void*)0));

  *VAR_9 = VAR_11;
  return VAR_0;
}
