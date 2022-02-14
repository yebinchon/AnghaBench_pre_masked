
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ t_type; } ;
typedef TYPE_1__ tdesc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(tdesc_t *VAR_4, tdesc_t *VAR_5)
{
 tdesc_t *VAR_6 = (VAR_4->t_type == VAR_1 ? VAR_5 : VAR_4);

 return (VAR_6->t_type == VAR_2 || VAR_6->t_type == VAR_3 ||
     VAR_6->t_type == VAR_0);
}
