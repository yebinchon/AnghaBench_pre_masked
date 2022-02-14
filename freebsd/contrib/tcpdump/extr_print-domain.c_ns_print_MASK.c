
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_18__ {int ndo_vflag; int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
struct TYPE_19__ {int const id; int const qdcount; int const arcount; int const nscount; int const ancount; } ;
typedef TYPE_2__ HEADER ;


 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 size_t FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 size_t FUNC_6 (TYPE_2__ const*) ;
 scalar_t__ FUNC_7 (TYPE_2__ const*) ;
 scalar_t__ FUNC_8 (TYPE_2__ const*) ;
 int FUNC_9 (int const*) ;
 size_t VAR_0 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_2__ const) ;
 int * FUNC_12 (TYPE_1__*,int const*) ;
 int * VAR_1 ;
 int * FUNC_13 (TYPE_1__*,int const*,int const*,int) ;
 int * VAR_2 ;
 int * FUNC_14 (TYPE_1__*,int const*,int const*,int) ;

void
FUNC_15(netdissect_options *VAR_3,
         register const u_char *VAR_4, u_int VAR_5, int VAR_6)
{
 register const HEADER *VAR_7;
 register int VAR_8, VAR_9, VAR_10, VAR_11;
 register const u_char *VAR_12;
 uint16_t VAR_13;

 VAR_7 = (const HEADER *)VAR_4;
 FUNC_11(*VAR_7);

 VAR_8 = FUNC_9(&VAR_7->qdcount);
 VAR_9 = FUNC_9(&VAR_7->ancount);
 VAR_10 = FUNC_9(&VAR_7->nscount);
 VAR_11 = FUNC_9(&VAR_7->arcount);

 if (FUNC_4(VAR_7)) {

  FUNC_10((VAR_3, "%d%s%s%s%s%s%s",
   FUNC_9(&VAR_7->id),
   VAR_1[FUNC_3(VAR_7)],
   VAR_2[FUNC_6(VAR_7)],
   FUNC_0(VAR_7)? "*" : "",
   FUNC_5(VAR_7)? "" : "-",
   FUNC_8(VAR_7)? "|" : "",
   FUNC_1(VAR_7)? "$" : ""));

  if (VAR_8 != 1)
   FUNC_10((VAR_3, " [%dq]", VAR_8));

  VAR_12 = (const u_char *)(VAR_7 + 1);
  while (VAR_8--) {
   if (VAR_8 < FUNC_9(&VAR_7->qdcount) - 1)
    FUNC_10((VAR_3, ","));
   if (VAR_3->ndo_vflag > 1) {
    FUNC_10((VAR_3, " q:"));
    if ((VAR_12 = FUNC_13(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
     goto trunc;
   } else {
    if ((VAR_12 = FUNC_12(VAR_3, VAR_12)) == ((void*)0))
     goto trunc;
    VAR_12 += 4;
   }
  }
  FUNC_10((VAR_3, " %d/%d/%d", VAR_9, VAR_10, VAR_11));
  if (VAR_9--) {
   if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
    goto trunc;
   while (VAR_12 < VAR_3->ndo_snapend && VAR_9--) {
    FUNC_10((VAR_3, ","));
    if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
     goto trunc;
   }
  }
  if (VAR_9 > 0)
   goto trunc;

  if (VAR_3->ndo_vflag > 1) {
   if (VAR_12 < VAR_3->ndo_snapend && VAR_10--) {
    FUNC_10((VAR_3, " ns:"));
    if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
     goto trunc;
    while (VAR_12 < VAR_3->ndo_snapend && VAR_10--) {
     FUNC_10((VAR_3, ","));
     if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
      goto trunc;
    }
   }
   if (VAR_10 > 0)
    goto trunc;
   if (VAR_12 < VAR_3->ndo_snapend && VAR_11--) {
    FUNC_10((VAR_3, " ar:"));
    if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
     goto trunc;
    while (VAR_12 < VAR_3->ndo_snapend && VAR_11--) {
     FUNC_10((VAR_3, ","));
     if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
      goto trunc;
    }
   }
   if (VAR_11 > 0)
    goto trunc;
  }
 }
 else {

  FUNC_10((VAR_3, "%d%s%s%s", FUNC_9(&VAR_7->id), VAR_1[FUNC_3(VAR_7)],
      FUNC_7(VAR_7) ? "+" : "",
      FUNC_2(VAR_7) ? "%" : ""));


  VAR_13 = FUNC_9(((const u_short *)VAR_7)+1);
  if (VAR_13 & 0x6cf)
   FUNC_10((VAR_3, " [b2&3=0x%x]", VAR_13));

  if (FUNC_3(VAR_7) == VAR_0) {
   if (VAR_8)
    FUNC_10((VAR_3, " [%dq]", VAR_8));
   if (VAR_9 != 1)
    FUNC_10((VAR_3, " [%da]", VAR_9));
  }
  else {
   if (VAR_9)
    FUNC_10((VAR_3, " [%da]", VAR_9));
   if (VAR_8 != 1)
    FUNC_10((VAR_3, " [%dq]", VAR_8));
  }
  if (VAR_10)
   FUNC_10((VAR_3, " [%dn]", VAR_10));
  if (VAR_11)
   FUNC_10((VAR_3, " [%dau]", VAR_11));

  VAR_12 = (const u_char *)(VAR_7 + 1);
  if (VAR_8--) {
   VAR_12 = FUNC_13(VAR_3, VAR_12, (const u_char *)VAR_7, VAR_6);
   if (!VAR_12)
    goto trunc;
   while (VAR_12 < VAR_3->ndo_snapend && VAR_8--) {
    VAR_12 = FUNC_13(VAR_3, (const u_char *)VAR_12,
            (const u_char *)VAR_7,
            VAR_6);
    if (!VAR_12)
     goto trunc;
   }
  }
  if (VAR_8 > 0)
   goto trunc;


  if (VAR_3->ndo_vflag > 1) {
   if (VAR_9--) {
    if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
     goto trunc;
    while (VAR_12 < VAR_3->ndo_snapend && VAR_9--) {
     FUNC_10((VAR_3, ","));
     if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
      goto trunc;
    }
   }
   if (VAR_9 > 0)
    goto trunc;
   if (VAR_12 < VAR_3->ndo_snapend && VAR_10--) {
    FUNC_10((VAR_3, " ns:"));
    if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
     goto trunc;
    while (VAR_10-- && VAR_12 < VAR_3->ndo_snapend) {
     FUNC_10((VAR_3, ","));
     if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
      goto trunc;
    }
   }
   if (VAR_10 > 0)
    goto trunc;
   if (VAR_12 < VAR_3->ndo_snapend && VAR_11--) {
    FUNC_10((VAR_3, " ar:"));
    if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
     goto trunc;
    while (VAR_12 < VAR_3->ndo_snapend && VAR_11--) {
     FUNC_10((VAR_3, ","));
     if ((VAR_12 = FUNC_14(VAR_3, VAR_12, VAR_4, VAR_6)) == ((void*)0))
      goto trunc;
    }
   }
   if (VAR_11 > 0)
    goto trunc;
  }
 }
 FUNC_10((VAR_3, " (%d)", VAR_5));
 return;

  trunc:
 FUNC_10((VAR_3, "[|domain]"));
}
