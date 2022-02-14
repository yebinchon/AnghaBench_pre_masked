
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int portControl; } ;
typedef int PortControl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct eapol_sm*) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(struct eapol_sm *VAR_1, PortControl VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;
 FUNC_2(VAR_0, "EAPOL: External notification - "
     "portControl=%s", FUNC_0(VAR_2));
 VAR_1->portControl = VAR_2;
 FUNC_1(VAR_1);
}
