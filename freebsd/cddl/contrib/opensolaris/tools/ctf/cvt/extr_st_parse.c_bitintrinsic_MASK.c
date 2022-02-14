
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* t_intr; int t_size; int t_type; scalar_t__ t_id; int t_name; } ;
typedef TYPE_1__ tdesc_t ;
typedef int intr_t ;
struct TYPE_9__ {int intr_nbits; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static tdesc_t *
FUNC_4(tdesc_t *VAR_2, int VAR_3)
{
 tdesc_t *VAR_4 = FUNC_1(sizeof (tdesc_t));

 VAR_4->t_name = FUNC_3(VAR_2->t_name);
 VAR_4->t_id = VAR_1++;
 VAR_4->t_type = VAR_0;
 VAR_4->t_size = VAR_2->t_size;
 VAR_4->t_intr = FUNC_2(sizeof (intr_t));
 FUNC_0(VAR_2->t_intr, VAR_4->t_intr, sizeof (intr_t));
 VAR_4->t_intr->intr_nbits = VAR_3;

 return (VAR_4);
}
