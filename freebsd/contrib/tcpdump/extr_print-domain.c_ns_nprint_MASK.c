
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
struct TYPE_7__ {scalar_t__ const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__ const,int) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__ const*,scalar_t__,scalar_t__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__ const*) ;

const u_char *
FUNC_5(netdissect_options *VAR_2,
          register const u_char *VAR_3, register const u_char *VAR_4)
{
 register u_int VAR_5, VAR_6;
 register const u_char *VAR_7 = ((void*)0);
 register int VAR_8 = 0;
 int VAR_9;
 u_int VAR_10, VAR_11;

 if ((VAR_6 = FUNC_4(VAR_2, VAR_3)) == (u_int)-1)
  return(((void*)0));
 if (!FUNC_1(*VAR_3, 1))
  return(((void*)0));
 VAR_11 = (u_int)(VAR_3 - VAR_4);
 if (((VAR_5 = *VAR_3++) & VAR_1) != VAR_1) {
  VAR_8 = 0;
  VAR_7 = VAR_3 + VAR_6;
 }

 if (VAR_5 != 0)
  while (VAR_5 && VAR_3 < VAR_2->ndo_snapend) {
   if ((VAR_5 & VAR_1) == VAR_1) {
    if (!VAR_8) {
     VAR_7 = VAR_3 + 1;
     VAR_8 = 1;
    }
    if (!FUNC_1(*VAR_3, 1))
     return(((void*)0));
    VAR_10 = (((VAR_5 << 8) | *VAR_3) & 0x3fff);
    if (VAR_10 >= VAR_11) {
     FUNC_0((VAR_2, "<BAD PTR>"));
     return(((void*)0));
    }
    VAR_11 = VAR_10;
    VAR_3 = VAR_4 + VAR_10;
    if ((VAR_6 = FUNC_4(VAR_2, VAR_3)) == (u_int)-1)
     return(((void*)0));
    if (!FUNC_1(*VAR_3, 1))
     return(((void*)0));
    VAR_5 = *VAR_3++;
    continue;
   }
   if ((VAR_5 & VAR_1) == VAR_0) {
    VAR_9 = (VAR_5 & ~VAR_1);
    switch(VAR_9) {
    case 128:
     if (FUNC_2(VAR_2, VAR_3) == ((void*)0))
      return (((void*)0));
     break;
    default:

     FUNC_0((VAR_2, "<ELT %d>", VAR_9));
     return(((void*)0));
    }
   } else {
    if (FUNC_3(VAR_2, VAR_3, VAR_6, VAR_2->ndo_snapend))
     return(((void*)0));
   }

   VAR_3 += VAR_6;
   FUNC_0((VAR_2, "."));
   if ((VAR_6 = FUNC_4(VAR_2, VAR_3)) == (u_int)-1)
    return(((void*)0));
   if (!FUNC_1(*VAR_3, 1))
    return(((void*)0));
   VAR_5 = *VAR_3++;
   if (!VAR_8)
    VAR_7 += VAR_6 + 1;
  }
 else
  FUNC_0((VAR_2, "."));
 return (VAR_7);
}
