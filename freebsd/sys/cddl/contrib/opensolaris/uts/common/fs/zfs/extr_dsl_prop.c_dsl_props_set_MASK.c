
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int nvlist_t ;
struct TYPE_3__ {char const* dpsa_dsname; int dpsa_source; int * dpsa_props; } ;
typedef TYPE_1__ dsl_props_set_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(const char *VAR_4, zprop_source_t VAR_5, nvlist_t *VAR_6)
{
 dsl_props_set_arg_t VAR_7;
 int VAR_8 = 0;

 VAR_7.dpsa_dsname = VAR_4;
 VAR_7.dpsa_source = VAR_5;
 VAR_7.dpsa_props = VAR_6;





 if ((VAR_5 & VAR_1) == 0)
  VAR_8 = 2 * FUNC_1(VAR_6);

 return (FUNC_0(VAR_4, VAR_2, VAR_3,
     &VAR_7, VAR_8, VAR_0));
}
