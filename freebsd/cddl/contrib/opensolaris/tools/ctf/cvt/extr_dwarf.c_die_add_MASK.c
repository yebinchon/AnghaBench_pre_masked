
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_id; } ;
typedef TYPE_1__ tdesc_t ;
typedef int dwarf_t ;
typedef int Dwarf_Off ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static tdesc_t *
FUNC_2(dwarf_t *VAR_0, Dwarf_Off VAR_1)
{
 tdesc_t *VAR_2 = FUNC_1(sizeof (tdesc_t));

 VAR_2->t_id = VAR_1;

 FUNC_0(VAR_0, VAR_2);

 return (VAR_2);
}
