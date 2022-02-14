
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,int const*,int ) ;
 int * FUNC_2 (TYPE_1__*,int const*) ;
 int * FUNC_3 (TYPE_1__*,int const*,int*) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
             const uint32_t *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_1 = FUNC_3(VAR_0, VAR_1, &VAR_3);
 if (VAR_1 == ((void*)0))
  return(0);
 if (VAR_3)
  return(1);
 if (VAR_2 && !(VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_0->ndo_vflag)))
  return (0);
 FUNC_0((VAR_0, " "));
 return (FUNC_2(VAR_0, VAR_1) != ((void*)0));
}
