
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pe_cmd; int pe_flags; int * pe_dd; } ;
typedef int PE_DataDir ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int) ;

int
FUNC_1(PE *VAR_7, PE_DataDir *VAR_8)
{

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  VAR_6 = VAR_1;
  return (-1);
 }

 if (VAR_7->pe_cmd == VAR_5 || VAR_7->pe_flags & VAR_4) {
  VAR_6 = VAR_0;
  return (-1);
 }

 if (VAR_7->pe_dd == ((void*)0)) {
  if ((VAR_7->pe_dd = FUNC_0(sizeof(PE_DataDir))) == ((void*)0)) {
   VAR_6 = VAR_2;
   return (-1);
  }
 }

 *VAR_7->pe_dd = *VAR_8;

 VAR_7->pe_flags |= VAR_3;

 return (0);
}
