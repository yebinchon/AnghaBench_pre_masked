
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ nic_rule_match ;
typedef int nic_rule_action ;
struct TYPE_4__ {int prefixlen; int addr; int if_name; int action; scalar_t__ match_type; } ;
typedef TYPE_1__ nic_rule ;
typedef int isc_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(
 nic_rule_match VAR_5,
 const char * VAR_6,
 int VAR_7,
 nic_rule_action VAR_8
 )
{
 nic_rule * VAR_9;
 isc_boolean_t VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_9));
 VAR_9->match_type = VAR_5;
 VAR_9->prefixlen = VAR_7;
 VAR_9->action = VAR_8;

 if (VAR_2 == VAR_5) {
  FUNC_1(((void*)0) != VAR_6);
  VAR_9->if_name = FUNC_3(VAR_6);
 } else if (VAR_1 == VAR_5) {
  FUNC_1(((void*)0) != VAR_6);

  VAR_10 = FUNC_4(VAR_6, VAR_0, &VAR_9->addr);
  FUNC_1(VAR_10);
 } else
  FUNC_1(((void*)0) == VAR_6);

 FUNC_0(VAR_4, VAR_9, VAR_3);
}
