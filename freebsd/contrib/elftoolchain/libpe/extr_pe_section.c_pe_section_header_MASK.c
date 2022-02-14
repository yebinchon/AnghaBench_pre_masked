
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ps_sh; } ;
typedef int PE_SecHdr ;
typedef TYPE_1__ PE_Scn ;


 int VAR_0 ;
 int VAR_1 ;

PE_SecHdr *
FUNC_0(PE_Scn *VAR_2)
{

 if (VAR_2 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }

 return (&VAR_2->ps_sh);
}
