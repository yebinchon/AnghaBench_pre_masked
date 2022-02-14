
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * nvp_list; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,int ) ;
 int VAR_0 ;

nvpair_t *
FUNC_3(const nvpair_t *VAR_1)
{

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_list != ((void*)0));

 return (FUNC_2(VAR_1, VAR_0));
}
