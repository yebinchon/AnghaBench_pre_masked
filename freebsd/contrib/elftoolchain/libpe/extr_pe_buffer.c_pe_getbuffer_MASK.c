
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pe_flags; } ;
struct TYPE_7__ {int ps_flags; int ps_b; TYPE_2__* ps_pe; } ;
typedef int PE_SecBuf ;
typedef TYPE_1__ PE_Scn ;
typedef int PE_Buffer ;
typedef TYPE_2__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int VAR_6 ;

PE_Buffer *
FUNC_4(PE_Scn *VAR_7, PE_Buffer *VAR_8)
{
 PE *VAR_9;
 PE_SecBuf *VAR_10;

 if (VAR_7 == ((void*)0)) {
  VAR_5 = VAR_1;
  return (((void*)0));
 }

 VAR_9 = VAR_7->ps_pe;

 if ((VAR_7->ps_flags & VAR_3) == 0) {
  if (VAR_9->pe_flags & VAR_2) {
   VAR_5 = VAR_0;
   return (((void*)0));
  }
  if (VAR_9->pe_flags & VAR_4) {
   if (FUNC_2(VAR_9) < 0)
    return (((void*)0));
  } else {
   if (FUNC_3(VAR_9, VAR_7) < 0)
    return (((void*)0));
  }
 }

 VAR_10 = (PE_SecBuf *) VAR_8;

 if (VAR_10 == ((void*)0))
  VAR_10 = FUNC_0(&VAR_7->ps_b);
 else
  VAR_10 = FUNC_1(VAR_10, VAR_6);

 return ((PE_Buffer *) VAR_10);
}
