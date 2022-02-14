
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* doca_clone; char const* doca_origin; int doca_cred; } ;
typedef TYPE_1__ dmu_objset_clone_arg_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ,int ,TYPE_1__*,int,int ) ;

int
FUNC_2(const char *VAR_3, const char *VAR_4)
{
 dmu_objset_clone_arg_t VAR_5;

 VAR_5.doca_clone = VAR_3;
 VAR_5.doca_origin = VAR_4;
 VAR_5.doca_cred = FUNC_0();

 return (FUNC_1(VAR_3,
     VAR_1, VAR_2, &VAR_5,
     5, VAR_0));
}
