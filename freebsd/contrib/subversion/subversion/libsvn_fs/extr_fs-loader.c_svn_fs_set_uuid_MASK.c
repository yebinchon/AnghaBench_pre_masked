
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_uuid_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* set_uuid ) (TYPE_2__*,char const*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (int *) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_1, const char *VAR_2, apr_pool_t *VAR_3)
{
  if (! VAR_2)
    {
      VAR_2 = FUNC_5(VAR_3);
    }
  else
    {
      apr_uuid_t VAR_4;
      apr_status_t VAR_5 = FUNC_1(&VAR_4, VAR_2);
      if (VAR_5)
        return FUNC_3(VAR_0, ((void*)0),
                                 FUNC_0("Malformed UUID '%s'"), VAR_2);
    }
  return FUNC_4(VAR_1->vtable->set_uuid(VAR_1, VAR_2, VAR_3));
}
