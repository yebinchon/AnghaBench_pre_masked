
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct get_dir_baton_t {scalar_t__ is_directory; int result_pool; int ret_props; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,char const*,int ) ;
 char* FUNC_4 (char const*,char const*,int ) ;
 int FUNC_5 (TYPE_1__ const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_3,
                 const char *VAR_4,
                 const char *VAR_5,
                 const char *VAR_6,
                 const svn_string_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  struct get_dir_baton_t *VAR_9 = VAR_3;
  const char *VAR_10;

  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_9->result_pool);
  if (VAR_10)
    {
      FUNC_3(VAR_9->ret_props, VAR_10,
                    FUNC_5(VAR_7, VAR_9->result_pool));
      return VAR_1;
    }

  if (!VAR_9->is_directory)
    {
      if (FUNC_1(VAR_5, "DAV:") == 0 && FUNC_1(VAR_6, "resourcetype") == 0)
        {
          if (FUNC_1(VAR_7->data, "collection") != 0)
            {

              return FUNC_2(VAR_0, ((void*)0),
                                      FUNC_0("Can't get properties of non-directory"));
            }
          else
            VAR_9->is_directory = VAR_2;
        }
    }

  return VAR_1;
}
