
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * (* close_directory ) (void*,int *) ;int (* change_dir_prop ) (void*,char const*,int const*,int *) ;int (* close_file ) (void*,int *,int *) ;int (* change_file_prop ) (void*,char const*,int const*,int *) ;int (* open_file ) (char const*,void*,int const,int *,void**) ;int (* open_root ) (void*,int const,int *,void**) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int const,int *,void**) ;
 int FUNC_2 (char const*,void*,int const,int *,void**) ;
 int FUNC_3 (void*,char const*,int const*,int *) ;
 int FUNC_4 (void*,int *,int *) ;
 int FUNC_5 (void*,char const*,int const*,int *) ;
 int * FUNC_6 (void*,int *) ;
 scalar_t__ const VAR_0 ;
 char* FUNC_7 (char const*,int *) ;

__attribute__((used)) static
svn_error_t *
FUNC_8(const char *VAR_1,
               const char *VAR_2,
               const svn_string_t *VAR_3,
               const svn_node_kind_t VAR_4,
               const svn_revnum_t VAR_5,
               const svn_delta_editor_t *VAR_6,
               void *VAR_7,
               apr_pool_t *VAR_8)
{
  void *VAR_9;

  FUNC_0(VAR_6->open_root(VAR_7, VAR_5, VAR_8,
                            &VAR_9));

  if (VAR_4 == VAR_0)
    {
      void *VAR_10;
      const char *VAR_11 = FUNC_7(VAR_1, VAR_8);

      FUNC_0(VAR_6->open_file(VAR_11, VAR_9,
                                VAR_5, VAR_8, &VAR_10));
      FUNC_0(VAR_6->change_file_prop(VAR_10, VAR_2, VAR_3, VAR_8));
      FUNC_0(VAR_6->close_file(VAR_10, ((void*)0), VAR_8));
    }
  else
    {
      FUNC_0(VAR_6->change_dir_prop(VAR_9, VAR_2, VAR_3, VAR_8));
    }

  return VAR_6->close_directory(VAR_9, VAR_8);
}
