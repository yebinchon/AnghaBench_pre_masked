
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_id; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_6__ {int md_tdtba; int md_ta; } ;
typedef TYPE_2__ merge_cb_data_t ;


 int FUNC_0 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_0, void *VAR_1)
{
 tdesc_t *VAR_2 = VAR_0;
 merge_cb_data_t *VAR_3 = VAR_1;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3->md_ta, VAR_2->t_id);
 FUNC_1(VAR_4 != -1);

 if ((VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3)))
  FUNC_3(VAR_3->md_tdtba, (void *)VAR_2);

 return (VAR_5);
}
