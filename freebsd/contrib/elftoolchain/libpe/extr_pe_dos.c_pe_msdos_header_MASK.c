
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pe_dh; } ;
typedef int PE_DosHdr ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

PE_DosHdr *
FUNC_0(PE *VAR_3)
{

 if (VAR_3 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 if (VAR_3->pe_dh == ((void*)0)) {
  VAR_2 = VAR_1;
  return (((void*)0));
 }

 return (VAR_3->pe_dh);
}
