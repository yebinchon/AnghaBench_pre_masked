
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {unsigned int idleWhile; } ;
typedef enum eapol_int_var { ____Placeholder_eapol_int_var } eapol_int_var ;




__attribute__((used)) static unsigned int FUNC_0(void *VAR_0, enum eapol_int_var VAR_1)
{
 struct eapol_sm *VAR_2 = VAR_0;
 if (VAR_2 == ((void*)0))
  return 0;
 switch (VAR_1) {
 case 128:
  return VAR_2->idleWhile;
 }
 return 0;
}
