
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sda_tx; int sda_sublist_idx; int sda_list; } ;
typedef TYPE_1__ sync_dnodes_arg_t ;
typedef int multilist_sublist_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 sync_dnodes_arg_t *VAR_1 = VAR_0;

 multilist_sublist_t *VAR_2 =
     FUNC_2(VAR_1->sda_list, VAR_1->sda_sublist_idx);

 FUNC_0(VAR_2, VAR_1->sda_tx);

 FUNC_3(VAR_2);

 FUNC_1(VAR_1, sizeof (*VAR_1));
}
