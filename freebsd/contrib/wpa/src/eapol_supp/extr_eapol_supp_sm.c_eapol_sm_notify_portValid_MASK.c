
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int portValid; } ;
typedef int Boolean ;


 int VAR_0 ;
 int FUNC_0 (struct eapol_sm*) ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(struct eapol_sm *VAR_1, Boolean VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;
 FUNC_1(VAR_0, "EAPOL: External notification - "
     "portValid=%d", VAR_2);
 VAR_1->portValid = VAR_2;
 FUNC_0(VAR_1);
}
