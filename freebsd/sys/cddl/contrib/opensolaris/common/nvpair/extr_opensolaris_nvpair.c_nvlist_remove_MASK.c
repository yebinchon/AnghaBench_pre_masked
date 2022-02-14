
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_5__ {scalar_t__ nvl_priv; } ;
typedef TYPE_1__ nvlist_t ;
typedef int data_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (TYPE_1__*,char const*,int ) ;

int
FUNC_2(nvlist_t *VAR_2, const char *VAR_3, data_type_t VAR_4)
{
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2->nvl_priv == 0)
  return (VAR_0);

 nvpair_t *VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 return (FUNC_0(VAR_2, VAR_5));
}
