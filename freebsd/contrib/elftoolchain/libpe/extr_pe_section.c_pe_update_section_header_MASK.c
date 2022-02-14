
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pe_cmd; int pe_flags; } ;
struct TYPE_4__ {int ps_sh; TYPE_2__* ps_pe; } ;
typedef int PE_SecHdr ;
typedef TYPE_1__ PE_Scn ;
typedef TYPE_2__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

int
FUNC_0(PE_Scn *VAR_6, PE_SecHdr *VAR_7)
{
 PE *VAR_8;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  VAR_5 = VAR_1;
  return (-1);
 }

 VAR_8 = VAR_6->ps_pe;

 if (VAR_8->pe_cmd == VAR_4 || VAR_8->pe_flags & VAR_3) {
  VAR_5 = VAR_0;
  return (-1);
 }

 VAR_6->ps_sh = *VAR_7;
 VAR_8->pe_flags |= VAR_2;

 return (0);
}
