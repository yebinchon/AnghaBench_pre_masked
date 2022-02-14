
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct TYPE_6__ {TYPE_1__* editor; } ;
typedef TYPE_2__ report_context_t ;
struct TYPE_7__ {int dir_baton; TYPE_2__* ctx; } ;
typedef TYPE_3__ dir_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* change_dir_prop ) (int ,char const*,int const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,char const*,int const*,int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
             const char *VAR_2,
             const char *VAR_3,
             const char *VAR_4,
             const svn_string_t *VAR_5,
             apr_pool_t *VAR_6)
{
  dir_baton_t *VAR_7 = VAR_1;
  report_context_t *VAR_8 = VAR_7->ctx;
  const char *VAR_9;

  VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_6);
  if (VAR_9 == ((void*)0))
    return VAR_0;

  FUNC_0(FUNC_1(VAR_7, VAR_6));

  FUNC_0(VAR_8->editor->change_dir_prop(VAR_7->dir_baton,
                                       VAR_9, VAR_5,
                                       VAR_6));
  return VAR_0;
}
