
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pe_cmd; int pe_flags; } ;
typedef int PE_Cmd ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(PE *VAR_5, PE_Cmd VAR_6)
{

 if (VAR_5 == ((void*)0)) {
  VAR_4 = VAR_1;
  return (-1);
 }

 switch (VAR_6) {
 case 129:
  VAR_5->pe_flags |= VAR_2;
  break;

 case 128:
  if (VAR_5->pe_cmd == VAR_3) {
   VAR_4 = VAR_0;
   return (-1);
  }
  if (FUNC_0(VAR_5) < 0)
   return (-1);
  break;

 default:
  VAR_4 = VAR_1;
  return (-1);
 }

 return (0);
}
