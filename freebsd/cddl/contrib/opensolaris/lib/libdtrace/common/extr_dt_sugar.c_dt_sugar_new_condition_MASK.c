
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dtsp_num_conditions; } ;
typedef TYPE_1__ dt_sugar_parse_t ;
typedef int dt_node_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static int
FUNC_2(dt_sugar_parse_t *VAR_0, dt_node_t *VAR_1, int VAR_2)
{
 VAR_0->dtsp_num_conditions++;
 FUNC_0(VAR_0, FUNC_1(VAR_0,
     VAR_1, VAR_2, VAR_0->dtsp_num_conditions));
 return (VAR_0->dtsp_num_conditions);
}
