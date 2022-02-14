
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int var_map ;
struct partition_pair_d {int dummy; } ;
struct coalesce_list_d {int dummy; } ;
typedef int partition_pair_p ;
typedef TYPE_1__* coalesce_list_p ;
struct TYPE_3__ {int add_mode; int * list; int map; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;

coalesce_list_p
FUNC_3 (var_map VAR_0)
{
  coalesce_list_p VAR_1;

  VAR_1 = (coalesce_list_p) FUNC_2 (sizeof (struct coalesce_list_d));

  VAR_1->map = VAR_0;
  VAR_1->add_mode = 1;
  VAR_1->list = (partition_pair_p *) FUNC_1 (FUNC_0 (VAR_0),
          sizeof (struct partition_pair_d));
  return VAR_1;
}
