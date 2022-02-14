
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** _keys; } ;
typedef TYPE_1__ ldns_key_list ;
typedef int ldns_key ;


 size_t FUNC_0 (TYPE_1__ const*) ;

ldns_key *
FUNC_1(const ldns_key_list *VAR_0, size_t VAR_1)
{
 if (VAR_1 < FUNC_0(VAR_0)) {
  return VAR_0->_keys[VAR_1];
 } else {
  return ((void*)0);
 }
}
