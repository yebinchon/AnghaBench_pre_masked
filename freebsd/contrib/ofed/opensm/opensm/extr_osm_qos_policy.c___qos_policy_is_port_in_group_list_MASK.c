
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int osm_qos_port_group_t ;
struct TYPE_3__ {int p_subn; } ;
typedef TYPE_1__ osm_qos_policy_t ;
typedef int osm_physp_t ;
typedef int cl_list_t ;
typedef scalar_t__ cl_list_iterator_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static boolean_t
FUNC_5(const osm_qos_policy_t * VAR_2,
       const osm_physp_t * VAR_3,
       cl_list_t * VAR_4)
{
 osm_qos_port_group_t *VAR_5;
 cl_list_iterator_t VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 while (VAR_6 != FUNC_1(VAR_4)) {
  VAR_5 =
      (osm_qos_port_group_t *) FUNC_4(VAR_6);
  if (VAR_5) {
   if (FUNC_0
       (VAR_2->p_subn, VAR_3, VAR_5))
    return VAR_1;
  }
  VAR_6 = FUNC_3(VAR_6);
 }
 return VAR_0;
}
