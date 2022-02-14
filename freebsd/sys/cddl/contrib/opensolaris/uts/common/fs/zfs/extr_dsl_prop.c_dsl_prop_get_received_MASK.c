
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os_dsl_dataset; } ;
typedef TYPE_1__ objset_t ;
typedef int nvlist_t ;
typedef int dsl_prop_getflags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int **,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

int
FUNC_4(const char *VAR_3, nvlist_t **VAR_4)
{
 objset_t *VAR_5;
 int VAR_6;






 dsl_prop_getflags_t VAR_7 = (FUNC_3(VAR_3) ?
     VAR_1 : VAR_0);

 VAR_6 = FUNC_0(VAR_3, VAR_2, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_2(VAR_5->os_dsl_dataset, VAR_4, VAR_7);
 FUNC_1(VAR_5, VAR_2);
 return (VAR_6);
}
