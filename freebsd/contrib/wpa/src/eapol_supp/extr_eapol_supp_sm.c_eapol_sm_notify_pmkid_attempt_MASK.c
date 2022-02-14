
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int cached_pmk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(struct eapol_sm *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_0, "RSN: Trying to use cached PMKSA");
 VAR_2->cached_pmk = VAR_1;
}
