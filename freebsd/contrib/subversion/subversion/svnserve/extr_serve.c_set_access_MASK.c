
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_config_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {void* anon_access; void* auth_access; } ;
typedef TYPE_1__ repository_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_1(repository_t *VAR_2,
           svn_config_t *VAR_3,
           svn_boolean_t VAR_4)
{
  VAR_2->auth_access = FUNC_0(VAR_3, VAR_1,
                                       "write", VAR_4);
  VAR_2->anon_access = FUNC_0(VAR_3, VAR_0,
                                       "read", VAR_4);
}
