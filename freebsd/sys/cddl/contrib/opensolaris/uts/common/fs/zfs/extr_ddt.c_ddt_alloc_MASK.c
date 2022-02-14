
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ddt_key_t ;
struct TYPE_4__ {int dde_key; int dde_cv; } ;
typedef TYPE_1__ ddt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 TYPE_1__* FUNC_1 (int,int ) ;

__attribute__((used)) static ddt_entry_t *
FUNC_2(const ddt_key_t *VAR_2)
{
 ddt_entry_t *VAR_3;

 VAR_3 = FUNC_1(sizeof (ddt_entry_t), VAR_1);
 FUNC_0(&VAR_3->dde_cv, ((void*)0), VAR_0, ((void*)0));

 VAR_3->dde_key = *VAR_2;

 return (VAR_3);
}
