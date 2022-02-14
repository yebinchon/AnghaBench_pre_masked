
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sunrpc_msg {int dummy; } ;
struct TYPE_19__ {int ndo_vflag; int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__ const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_3 (TYPE_1__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_4 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__ const*,int,int) ;
 int * FUNC_6 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__ const*) ;
 scalar_t__* FUNC_8 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__ const*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_11 (TYPE_1__*,scalar_t__ const*) ;
 int FUNC_12 (TYPE_1__*,scalar_t__ const*) ;
 scalar_t__* FUNC_13 (TYPE_1__*,struct sunrpc_msg const*,int) ;
 int FUNC_14 (TYPE_1__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_15 (TYPE_1__*,scalar_t__ const*,int*) ;
 int FUNC_16 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_17 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_18 (int ,char*,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_19(netdissect_options *VAR_7,
             const struct sunrpc_msg *VAR_8, uint32_t VAR_9, uint32_t VAR_10, int VAR_11)
{
 register const uint32_t *VAR_12;
 register int VAR_13;
 int VAR_14;

 VAR_13 = (VAR_10 == VAR_1);

 if (!VAR_13 && VAR_9 < VAR_0)
  VAR_9 = VAR_4[VAR_9];

 FUNC_1((VAR_7, " %s", FUNC_18(VAR_3, "proc-%u", VAR_9)));
 switch (VAR_9) {

 case 143:
  VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11);
  if (VAR_12 != ((void*)0) && FUNC_5(VAR_7, VAR_12, !VAR_7->ndo_qflag, VAR_13) != 0)
   return;
  break;

 case 130:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   return;
  if (VAR_13) {
   if (FUNC_17(VAR_7, VAR_12, VAR_7->ndo_vflag))
    return;
  } else {
   if (FUNC_5(VAR_7, VAR_12, !VAR_7->ndo_qflag, 0) != 0)
    return;
  }
  break;

 case 141:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (!(VAR_12 = FUNC_15(VAR_7, VAR_12, &VAR_14)))
    break;
   if (VAR_14) {
    if (VAR_7->ndo_vflag > 1) {
     FUNC_1((VAR_7, " post dattr:"));
     VAR_12 = FUNC_3(VAR_7, VAR_12, VAR_7->ndo_vflag);
    }
   } else {
    if (!(VAR_12 = FUNC_8(VAR_7, VAR_12, VAR_13)))
     break;
    if ((VAR_12 = FUNC_3(VAR_7, VAR_12, VAR_7->ndo_vflag)) &&
        VAR_7->ndo_vflag > 1) {
     FUNC_1((VAR_7, " post dattr:"));
     VAR_12 = FUNC_3(VAR_7, VAR_12, VAR_7->ndo_vflag);
    }
   }
   if (VAR_12)
    return;
  } else {
   if (FUNC_7(VAR_7, VAR_12) != 0)
    return;
  }
  break;

 case 148:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (!(VAR_12 = FUNC_15(VAR_7, VAR_12, &VAR_14)))
   break;
  if (VAR_7->ndo_vflag)
   FUNC_1((VAR_7, " attr:"));
  if (!(VAR_12 = FUNC_3(VAR_7, VAR_12, VAR_7->ndo_vflag)))
   break;
  if (!VAR_14) {
   FUNC_2(VAR_12[0]);
   FUNC_1((VAR_7, " c %04x", FUNC_0(&VAR_12[0])));
  }
  return;

 case 134:
  VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11);
  if (VAR_12 != ((void*)0) && FUNC_10(VAR_7, VAR_12, VAR_13) != 0)
   return;
  break;

 case 137:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (!(VAR_12 = FUNC_15(VAR_7, VAR_12, &VAR_14)))
    break;
   if (!(VAR_12 = FUNC_3(VAR_7, VAR_12, VAR_7->ndo_vflag)))
    break;
   if (VAR_14)
    return;
   if (VAR_7->ndo_vflag) {
    FUNC_2(VAR_12[1]);
    FUNC_1((VAR_7, " %u bytes", FUNC_0(&VAR_12[0])));
    if (FUNC_0(&VAR_12[1]))
     FUNC_1((VAR_7, " EOF"));
   }
   return;
  } else {
   if (FUNC_5(VAR_7, VAR_12, VAR_7->ndo_vflag, 0) != 0)
    return;
  }
  break;

 case 128:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (!(VAR_12 = FUNC_15(VAR_7, VAR_12, &VAR_14)))
    break;
   if (!(VAR_12 = FUNC_4(VAR_7, VAR_12, VAR_7->ndo_vflag)))
    break;
   if (VAR_14)
    return;
   if (VAR_7->ndo_vflag) {
    FUNC_2(VAR_12[0]);
    FUNC_1((VAR_7, " %u bytes", FUNC_0(&VAR_12[0])));
    if (VAR_7->ndo_vflag > 1) {
     FUNC_2(VAR_12[1]);
     FUNC_1((VAR_7, " <%s>",
      FUNC_18(VAR_5,
       ((void*)0), FUNC_0(&VAR_12[1]))));
    }
    return;
   }
  } else {
   if (FUNC_5(VAR_7, VAR_12, VAR_7->ndo_vflag, VAR_13) != 0)
    return;
  }
  break;

 case 146:
 case 140:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (FUNC_6(VAR_7, VAR_12, VAR_7->ndo_vflag) != ((void*)0))
    return;
  } else {
   if (FUNC_7(VAR_7, VAR_12) != 0)
    return;
  }
  break;

 case 129:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (FUNC_6(VAR_7, VAR_12, VAR_7->ndo_vflag) != ((void*)0))
    return;
  } else {
   if (FUNC_15(VAR_7, VAR_12, &VAR_14) != ((void*)0))
    return;
  }
  break;

 case 139:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (FUNC_6(VAR_7, VAR_12, VAR_7->ndo_vflag) != ((void*)0))
   return;
  break;

 case 133:
 case 131:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (FUNC_17(VAR_7, VAR_12, VAR_7->ndo_vflag))
    return;
  } else {
   if (FUNC_15(VAR_7, VAR_12, &VAR_14) != ((void*)0))
    return;
  }
  break;

 case 132:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (!(VAR_12 = FUNC_15(VAR_7, VAR_12, &VAR_14)))
    break;
   if (VAR_7->ndo_vflag) {
    FUNC_1((VAR_7, " from:"));
    if (!(VAR_12 = FUNC_4(VAR_7, VAR_12, VAR_7->ndo_vflag)))
     break;
    FUNC_1((VAR_7, " to:"));
    if (!(VAR_12 = FUNC_4(VAR_7, VAR_12, VAR_7->ndo_vflag)))
     break;
   }
   return;
  } else {
   if (FUNC_15(VAR_7, VAR_12, &VAR_14) != ((void*)0))
    return;
  }
  break;

 case 142:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (!(VAR_12 = FUNC_15(VAR_7, VAR_12, &VAR_14)))
    break;
   if (VAR_7->ndo_vflag) {
    FUNC_1((VAR_7, " file POST:"));
    if (!(VAR_12 = FUNC_3(VAR_7, VAR_12, VAR_7->ndo_vflag)))
     break;
    FUNC_1((VAR_7, " dir:"));
    if (!(VAR_12 = FUNC_4(VAR_7, VAR_12, VAR_7->ndo_vflag)))
     break;
    return;
   }
  } else {
   if (FUNC_15(VAR_7, VAR_12, &VAR_14) != ((void*)0))
    return;
  }
  break;

 case 136:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (VAR_13) {
   if (FUNC_16(VAR_7, VAR_12, VAR_7->ndo_vflag))
    return;
  } else {
   if (FUNC_12(VAR_7, VAR_12) != 0)
    return;
  }
  break;

 case 135:
  if (!(VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11)))
   break;
  if (FUNC_16(VAR_7, VAR_12, VAR_7->ndo_vflag))
   return;
  break;

 case 144:
  VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11);
  if (VAR_12 != ((void*)0) && FUNC_14(VAR_7, VAR_12, VAR_13) != 0)
   return;
  break;

 case 145:
  VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11);
  if (VAR_12 != ((void*)0) && FUNC_9(VAR_7, VAR_12) != 0)
   return;
  break;

 case 138:
  VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11);
  if (VAR_12 != ((void*)0) && FUNC_11(VAR_7, VAR_12) != 0)
   return;
  break;

 case 147:
  VAR_12 = FUNC_13(VAR_7, VAR_8, VAR_11);
  if (VAR_12 != ((void*)0) && FUNC_17(VAR_7, VAR_12, VAR_7->ndo_vflag) != 0)
   return;
  break;

 default:
  return;
 }
trunc:
 if (!VAR_2)
  FUNC_1((VAR_7, "%s", VAR_6));
}
