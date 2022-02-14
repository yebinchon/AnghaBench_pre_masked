
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int nvpair_t ;
struct TYPE_4__ {scalar_t__ nvl_priv; int nvl_nvflag; } ;
typedef TYPE_1__ nvlist_t ;
typedef int data_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *,void*) ;
 int * FUNC_1 (TYPE_1__*,char const*,int ) ;

__attribute__((used)) static int
FUNC_2(nvlist_t *VAR_5, const char *VAR_6, data_type_t VAR_7,
    uint_t *VAR_8, void *VAR_9)
{
 if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0) || VAR_5->nvl_priv == 0)
  return (VAR_0);

 if (!(VAR_5->nvl_nvflag & (VAR_3 | VAR_4)))
  return (VAR_2);

 nvpair_t *VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 return (FUNC_0(VAR_10, VAR_7, VAR_8, VAR_9));
}
