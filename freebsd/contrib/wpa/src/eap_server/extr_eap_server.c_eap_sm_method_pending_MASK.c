
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ method_pending; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct eap_sm *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 0;
 return VAR_1->method_pending == VAR_0;
}
