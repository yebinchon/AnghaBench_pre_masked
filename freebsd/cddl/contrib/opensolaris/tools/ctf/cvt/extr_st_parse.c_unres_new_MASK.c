
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_id; int t_type; } ;
typedef TYPE_1__ tdesc_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static tdesc_t *
FUNC_1(int VAR_1)
{
 tdesc_t *VAR_2;

 VAR_2 = FUNC_0(sizeof (*VAR_2));
 VAR_2->t_type = VAR_0;
 VAR_2->t_id = VAR_1;

 return (VAR_2);
}
