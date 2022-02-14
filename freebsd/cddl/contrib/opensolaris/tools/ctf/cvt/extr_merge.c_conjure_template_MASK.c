
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_id; int t_flags; int t_size; int t_type; int * t_name; } ;
typedef TYPE_1__ tdesc_t ;


 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static tdesc_t *
FUNC_2(tdesc_t *VAR_0, int VAR_1)
{
 tdesc_t *VAR_2 = FUNC_0(sizeof (tdesc_t));

 VAR_2->t_name = VAR_0->t_name ? FUNC_1(VAR_0->t_name) : ((void*)0);
 VAR_2->t_type = VAR_0->t_type;
 VAR_2->t_size = VAR_0->t_size;
 VAR_2->t_id = VAR_1;
 VAR_2->t_flags = VAR_0->t_flags;

 return (VAR_2);
}
