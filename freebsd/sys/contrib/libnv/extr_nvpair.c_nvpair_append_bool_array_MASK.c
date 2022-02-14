
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int value ;
struct TYPE_5__ {scalar_t__ nvp_type; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int const*,int,int) ;

int
FUNC_3(nvpair_t *VAR_1, const bool VAR_2)
{

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_type == VAR_0);
 return (FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2), sizeof(VAR_2)));
}
