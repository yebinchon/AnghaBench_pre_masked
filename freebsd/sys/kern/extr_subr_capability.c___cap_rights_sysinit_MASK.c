
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cap_rights_init_args {int cria_value4; int cria_value3; int cria_value2; int cria_value1; int * cria_rights; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,unsigned long long) ;

void
FUNC_1(void *VAR_1)
{
 struct cap_rights_init_args *VAR_2 = VAR_1;
 cap_rights_t *VAR_3 = VAR_2->cria_rights;

 FUNC_0(VAR_0, VAR_3, VAR_2->cria_value1,
       VAR_2->cria_value2, VAR_2->cria_value3, VAR_2->cria_value4, 0ULL);
}
