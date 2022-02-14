
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct dir_baton {int dump_props; int pool; int deleted_props; int props; TYPE_1__* eb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {struct dir_baton* pending_db; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_3,
                const char *VAR_4,
                const svn_string_t *VAR_5,
                apr_pool_t *VAR_6)
{
  struct dir_baton *VAR_7 = VAR_3;
  svn_boolean_t VAR_8;



  VAR_8 = (VAR_7->eb->pending_db == VAR_7);
  if (! VAR_8)
    FUNC_0(FUNC_2(VAR_7->eb, VAR_6));

  if (FUNC_4(VAR_4) != VAR_2)
    return VAR_0;

  if (VAR_5)
    FUNC_3(VAR_7->props,
                  FUNC_1(VAR_7->pool, VAR_4),
                  FUNC_5(VAR_5, VAR_7->pool));
  else
    FUNC_3(VAR_7->deleted_props, FUNC_1(VAR_7->pool, VAR_4), "");


  VAR_7->dump_props = VAR_1;

  return VAR_0;
}
