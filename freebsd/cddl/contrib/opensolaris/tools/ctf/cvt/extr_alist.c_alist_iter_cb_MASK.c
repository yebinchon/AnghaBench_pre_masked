
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* aid_func ) (int ,int ,int ) ;int aid_priv; } ;
typedef TYPE_1__ alist_iter_data_t ;
struct TYPE_4__ {int ale_value; int ale_name; } ;
typedef TYPE_2__ alist_el_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1)
{
 alist_el_t *VAR_2 = VAR_0;
 alist_iter_data_t *VAR_3 = VAR_1;
 return (VAR_3->aid_func(VAR_2->ale_name, VAR_2->ale_value, VAR_3->aid_priv));
}
