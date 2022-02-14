
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;



 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_6, const u_char *VAR_7, u_int VAR_8)
{
 u_int VAR_9 = VAR_8;
 uint16_t VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_7);
 VAR_9 -= 2;
 VAR_7 += 2;

 if (VAR_6->ndo_vflag)
            FUNC_2((VAR_6, ", Flags [%s]",
                   FUNC_4(VAR_4,"none",VAR_10)));

 FUNC_3(*VAR_7, 2);
 if (VAR_9 < 2)
  goto trunc;
 VAR_11 = FUNC_0(VAR_7);
 VAR_9 -= 2;
 VAR_7 += 2;


 if (VAR_10 & VAR_1) {
  uint32_t VAR_12;

  FUNC_3(*VAR_7, 4);
  if (VAR_9 < 4)
   goto trunc;
  VAR_12 = FUNC_1(VAR_7);
  FUNC_2((VAR_6, ", call %d", VAR_12 & 0xffff));
  VAR_9 -= 4;
  VAR_7 += 4;
 }

 if (VAR_10 & VAR_2) {
  FUNC_3(*VAR_7, 4);
  if (VAR_9 < 4)
   goto trunc;
  FUNC_2((VAR_6, ", seq %u", FUNC_1(VAR_7)));
  VAR_7 += 4;
  VAR_9 -= 4;
 }

 if (VAR_10 & VAR_0) {
  FUNC_3(*VAR_7, 4);
  if (VAR_9 < 4)
   goto trunc;
  FUNC_2((VAR_6, ", ack %u", FUNC_1(VAR_7)));
  VAR_7 += 4;
  VAR_9 -= 4;
 }

 if ((VAR_10 & VAR_2) == 0)
  FUNC_2((VAR_6, ", no-payload"));

        if (VAR_6->ndo_eflag)
            FUNC_2((VAR_6, ", proto %s (0x%04x)",
                   FUNC_6(VAR_3,"unknown",VAR_11),
                   VAR_11));

        FUNC_2((VAR_6, ", length %u",VAR_8));

        if ((VAR_10 & VAR_2) == 0)
            return;

        if (VAR_6->ndo_vflag < 1)
            FUNC_2((VAR_6, ": "));
        else
            FUNC_2((VAR_6, "\n\t"));

 switch (VAR_11) {
 case 128:
  FUNC_5(VAR_6, VAR_7, VAR_9);
  break;
 default:
  FUNC_2((VAR_6, "gre-proto-0x%x", VAR_11));
  break;
 }
 return;

trunc:
 FUNC_2((VAR_6, "%s", VAR_5));
}
