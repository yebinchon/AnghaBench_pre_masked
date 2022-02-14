
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {scalar_t__ SUPP_PAE_state; scalar_t__ suppPortStatus; int eap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* FUNC_0 (int ) ;

const char * FUNC_1(struct eapol_sm *VAR_2)
{
 if (VAR_2->SUPP_PAE_state != VAR_1 ||
     VAR_2->suppPortStatus != VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_2->eap);
}
