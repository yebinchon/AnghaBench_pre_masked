
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* t_tdesc; int t_id; } ;
typedef TYPE_1__ tdesc_t ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, void *VAR_1)
{
 tdesc_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 FUNC_0(3, "tdp %u: mapped forward %s to sou %u\n", VAR_2->t_id,
     FUNC_1(VAR_2), VAR_3->t_id);
 VAR_2->t_tdesc = VAR_3;

 return (0);
}
