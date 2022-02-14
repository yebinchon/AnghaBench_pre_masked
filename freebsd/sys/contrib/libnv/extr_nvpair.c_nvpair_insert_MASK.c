
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct nvl_head {int dummy; } ;
struct TYPE_6__ {int * nvp_list; } ;
typedef TYPE_1__ nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nvl_head*,TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(struct nvl_head *VAR_2, nvpair_t *VAR_3, nvlist_t *VAR_4)
{

 FUNC_0(VAR_3);
 FUNC_1(VAR_3->nvp_list == ((void*)0));
 FUNC_1((FUNC_4(VAR_4) & VAR_0) != 0 ||
     !FUNC_3(VAR_4, FUNC_5(VAR_3)));

 FUNC_2(VAR_2, VAR_3, VAR_1);
 VAR_3->nvp_list = VAR_4;
}
