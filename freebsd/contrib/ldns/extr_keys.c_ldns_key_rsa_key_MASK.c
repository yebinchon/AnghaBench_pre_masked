
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ key; } ;
struct TYPE_5__ {TYPE_1__ _key; } ;
typedef TYPE_2__ ldns_key ;
typedef int RSA ;


 int * FUNC_0 (scalar_t__) ;

RSA *
FUNC_1(const ldns_key *VAR_0)
{
 if (VAR_0->_key.key) {
  return FUNC_0(VAR_0->_key.key);
 } else {
  return ((void*)0);
 }
}
