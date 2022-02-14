
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_3__ {int name; int id; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef scalar_t__ apr_uint32_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void const* const*,int) ;

__attribute__((used)) static void
FUNC_6(svn_temp_serializer__context_t *VAR_0,
                    svn_fs_dirent_t **VAR_1,
                    apr_uint32_t *VAR_2)
{
  svn_fs_dirent_t *VAR_3 = *VAR_1;
  apr_size_t VAR_4 = FUNC_3(VAR_0);

  FUNC_5(VAR_0,
                            (const void * const *)VAR_1,
                            sizeof(**VAR_1));

  FUNC_1(VAR_0, &VAR_3->id);
  FUNC_2(VAR_0, &VAR_3->name);

  *VAR_2 = (apr_uint32_t)( FUNC_3(VAR_0)
                           - FUNC_0(VAR_4));

  FUNC_4(VAR_0);
}
