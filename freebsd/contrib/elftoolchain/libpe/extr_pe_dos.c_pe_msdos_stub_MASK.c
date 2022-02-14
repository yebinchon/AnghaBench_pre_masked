
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pe_stub_ex; int pe_flags; char* pe_stub; } ;
typedef int PE_DosHdr ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

char *
FUNC_2(PE *VAR_4, size_t *VAR_5)
{

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  VAR_3 = VAR_0;
  return (((void*)0));
 }

 if (VAR_4->pe_stub_ex > 0 &&
     (VAR_4->pe_flags & VAR_1) == 0) {
  FUNC_0((VAR_4->pe_flags & VAR_2) == 0);
  (void) FUNC_1(VAR_4);
 }

 *VAR_5 = sizeof(PE_DosHdr) + VAR_4->pe_stub_ex;

 return (VAR_4->pe_stub);
}
