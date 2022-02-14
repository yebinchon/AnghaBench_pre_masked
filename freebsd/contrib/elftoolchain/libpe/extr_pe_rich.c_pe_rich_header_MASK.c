
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pe_stub_ex; int pe_flags; int * pe_rh; } ;
typedef int PE_RichHdr ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;

PE_RichHdr *
FUNC_2(PE *VAR_5)
{

 if (VAR_5 == ((void*)0)) {
  VAR_4 = VAR_0;
  return (((void*)0));
 }

 if (VAR_5->pe_rh == ((void*)0) && VAR_5->pe_stub_ex > 0 &&
     (VAR_5->pe_flags & VAR_2) == 0) {
  FUNC_0((VAR_5->pe_flags & VAR_3) == 0);
  (void) FUNC_1(VAR_5);
 }

 if (VAR_5->pe_rh == ((void*)0)) {
  VAR_4 = VAR_1;
  return (((void*)0));
 }

 return (VAR_5->pe_rh);
}
