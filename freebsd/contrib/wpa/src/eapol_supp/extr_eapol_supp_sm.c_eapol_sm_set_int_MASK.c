
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {unsigned int idleWhile; } ;
typedef enum eapol_int_var { ____Placeholder_eapol_int_var } eapol_int_var ;



 int FUNC_0 (struct eapol_sm*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, enum eapol_int_var VAR_1,
        unsigned int VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_0;
 if (VAR_3 == ((void*)0))
  return;
 switch (VAR_1) {
 case 128:
  VAR_3->idleWhile = VAR_2;
  if (VAR_3->idleWhile > 0)
   FUNC_0(VAR_3);
  break;
 }
}
