
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_9__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 int VAR_6 ;
 int VAR_7 ;
 void FUNC_4 (TYPE_1__*,int const*,int const) ;
 void FUNC_5 (TYPE_1__*,int const*,int const) ;
 void FUNC_6 (TYPE_1__*,int const*,int const) ;
 void FUNC_7 (TYPE_1__*,int const*,int const) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,char*,int const) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_10(netdissect_options *VAR_11,
            const u_char *VAR_12, const u_int VAR_13)
{
 const u_char *VAR_14 = VAR_12 + VAR_13;
 uint8_t VAR_15, VAR_16;
 void (*VAR_17)(netdissect_options *, const u_char *, const u_int);

 if (VAR_13 < VAR_4)
  goto invalid;

 VAR_15 = *VAR_12 & 0x0F;
 FUNC_2((VAR_11, ", Flags: [%s]", FUNC_8(VAR_7, "none", VAR_15)));
 VAR_12 += 1;
 if (! VAR_11->ndo_vflag)
  return;

 FUNC_3(*VAR_12, 1);
 if (VAR_15 & VAR_5)
  FUNC_2((VAR_11, "\n\tError: %s", FUNC_9(VAR_6, "Invalid (%u)", *VAR_12)));
 VAR_12 += 1;

 FUNC_3(*VAR_12, 2);
 FUNC_2((VAR_11, "\n\tMajor: 0x%04x", FUNC_0(VAR_12)));
 VAR_12 += 2;

 FUNC_3(*VAR_12, 1);
 FUNC_2((VAR_11, ", Minor: 0x%02x", *VAR_12));
 VAR_12 += 1;

 FUNC_3(*VAR_12, 1);
 VAR_16 = *VAR_12;
 VAR_12 += 1;
 FUNC_2((VAR_11, ", Command: %s", FUNC_9(VAR_8, "Unknown (0x%02x)", VAR_16)));

 FUNC_3(*VAR_12, 4);
 FUNC_2((VAR_11, ", Tag: 0x%08x", FUNC_1(VAR_12)));
 VAR_12 += 4;

 VAR_17 =
  VAR_16 == VAR_0 ? FUNC_4 :
  VAR_16 == VAR_2 ? FUNC_6 :
  VAR_16 == VAR_1 ? FUNC_5 :
  VAR_16 == VAR_3 ? FUNC_7 :
  ((void*)0);
 if (VAR_17 != ((void*)0))
  VAR_17(VAR_11, VAR_12, VAR_13 - VAR_4);
 return;

invalid:
 FUNC_2((VAR_11, "%s", VAR_9));
 FUNC_3(*VAR_12, VAR_14 - VAR_12);
 return;
trunc:
 FUNC_2((VAR_11, "%s", VAR_10));
}
