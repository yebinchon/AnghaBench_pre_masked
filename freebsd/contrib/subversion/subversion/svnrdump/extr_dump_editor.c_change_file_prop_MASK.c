
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
struct file_baton {int dump_props; int pool; int deleted_props; int props; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_3,
                 const char *VAR_4,
                 const svn_string_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  struct file_baton *VAR_7 = VAR_3;

  if (FUNC_2(VAR_4) != VAR_2)
    return VAR_0;

  if (VAR_5)
    FUNC_1(VAR_7->props,
                  FUNC_0(VAR_7->pool, VAR_4),
                  FUNC_3(VAR_5, VAR_7->pool));
  else
    FUNC_1(VAR_7->deleted_props, FUNC_0(VAR_7->pool, VAR_4), "");




  VAR_7->dump_props = VAR_1;

  return VAR_0;
}
