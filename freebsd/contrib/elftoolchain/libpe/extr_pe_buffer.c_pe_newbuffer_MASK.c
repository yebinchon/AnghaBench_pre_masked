
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pe_flags; } ;
struct TYPE_10__ {int ps_flags; TYPE_3__* ps_pe; } ;
struct TYPE_9__ {int sb_flags; } ;
typedef TYPE_1__ PE_SecBuf ;
typedef TYPE_2__ PE_Scn ;
typedef int PE_Buffer ;
typedef TYPE_3__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*) ;

PE_Buffer *
FUNC_2(PE_Scn *VAR_6)
{
 PE *VAR_7;
 PE_SecBuf *VAR_8;

 if (VAR_6 == ((void*)0)) {
  VAR_5 = VAR_1;
  return (((void*)0));
 }

 VAR_7 = VAR_6->ps_pe;

 if (VAR_7->pe_flags & VAR_2) {
  VAR_5 = VAR_0;
  return (((void*)0));
 }

 if ((VAR_6->ps_flags & VAR_3) == 0) {
  if (FUNC_1(VAR_7, VAR_6) < 0)
   return (((void*)0));
 }

 if ((VAR_8 = FUNC_0(VAR_6, 0)) == ((void*)0))
  return (((void*)0));

 VAR_8->sb_flags |= VAR_4;
 VAR_6->ps_flags |= VAR_4;

 return ((PE_Buffer *) VAR_8);
}
