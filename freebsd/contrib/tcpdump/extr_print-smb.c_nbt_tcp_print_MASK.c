
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_6__ {int const* ndo_snapend; int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int const*) ;
 int* FUNC_4 (TYPE_1__*,int const*,char*,int const*,int ) ;
 int const* VAR_0 ;
 int VAR_1 ;

void
FUNC_5(netdissect_options *VAR_2,
              const u_char *VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    u_int VAR_7;
    const u_char *VAR_8;

    if (VAR_4 < 4)
 goto trunc;
    if (VAR_2->ndo_snapend < VAR_3)
 goto trunc;
    VAR_5 = VAR_2->ndo_snapend - VAR_3;
    if (VAR_5 < 4)
 goto trunc;
    VAR_8 = VAR_3 + VAR_5;
    VAR_6 = VAR_3[0];
    VAR_7 = FUNC_0(VAR_3 + 2);
    VAR_4 -= 4;
    VAR_5 -= 4;

    VAR_0 = VAR_3;

    if (VAR_2->ndo_vflag < 2) {
 FUNC_1((VAR_2, " NBT Session Packet: "));
 switch (VAR_6) {
 case 0x00:
     FUNC_1((VAR_2, "Session Message"));
     break;

 case 0x81:
     FUNC_1((VAR_2, "Session Request"));
     break;

 case 0x82:
     FUNC_1((VAR_2, "Session Granted"));
     break;

 case 0x83:
   {
     int VAR_9;

     if (VAR_7 < 4)
  goto trunc;
     if (VAR_4 < 4)
  goto trunc;
     if (VAR_5 < 4)
  goto trunc;
     VAR_9 = VAR_3[4];

     FUNC_1((VAR_2, "Session Reject, "));
     switch (VAR_9) {
     case 0x80:
  FUNC_1((VAR_2, "Not listening on called name"));
  break;
     case 0x81:
  FUNC_1((VAR_2, "Not listening for calling name"));
  break;
     case 0x82:
  FUNC_1((VAR_2, "Called name not present"));
  break;
     case 0x83:
  FUNC_1((VAR_2, "Called name present, but insufficient resources"));
  break;
     default:
  FUNC_1((VAR_2, "Unspecified error 0x%X", VAR_9));
  break;
     }
   }
     break;

 case 0x85:
     FUNC_1((VAR_2, "Session Keepalive"));
     break;

 default:
     VAR_3 = FUNC_4(VAR_2, VAR_3, "Unknown packet type [rB]", VAR_8, 0);
     break;
 }
    } else {
 FUNC_1((VAR_2, "\n>>> NBT Session Packet\n"));
 switch (VAR_6) {
 case 0x00:
     VAR_3 = FUNC_4(VAR_2, VAR_3, "[P1]NBT Session Message\nFlags=[B]\nLength=[rd]\n",
  VAR_3 + 4, 0);
     if (VAR_3 == ((void*)0))
  break;
     if (VAR_7 >= 4 && VAR_5 >= 4 && FUNC_2(VAR_3,"\377SMB",4) == 0) {
  if ((int)VAR_7 > VAR_5) {
      if ((int)VAR_7 > VAR_4)
   FUNC_1((VAR_2, "WARNING: Packet is continued in later TCP segments\n"));
      else
   FUNC_1((VAR_2, "WARNING: Short packet. Try increasing the snap length by %d\n",
       VAR_7 - VAR_5));
  }
  FUNC_3(VAR_2, VAR_3, VAR_8 > VAR_3 + VAR_7 ? VAR_3 + VAR_7 : VAR_8);
     } else
  FUNC_1((VAR_2, "Session packet:(raw data or continuation?)\n"));
     break;

 case 0x81:
     VAR_3 = FUNC_4(VAR_2, VAR_3,
  "[P1]NBT Session Request\nFlags=[B]\nLength=[rd]\nDestination=[n1]\nSource=[n1]\n",
  VAR_8, 0);
     break;

 case 0x82:
     VAR_3 = FUNC_4(VAR_2, VAR_3, "[P1]NBT Session Granted\nFlags=[B]\nLength=[rd]\n", VAR_8, 0);
     break;

 case 0x83:
   {
     const u_char *VAR_10;
     int VAR_11;

     VAR_10 = VAR_3;
     VAR_3 = FUNC_4(VAR_2, VAR_3, "[P1]NBT SessionReject\nFlags=[B]\nLength=[rd]\nReason=[B]\n",
  VAR_8, 0);
     if (VAR_3 == ((void*)0))
  break;
     if (VAR_7 >= 1 && VAR_5 >= 1) {
  VAR_11 = VAR_10[4];
  switch (VAR_11) {
  case 0x80:
      FUNC_1((VAR_2, "Not listening on called name\n"));
      break;
  case 0x81:
      FUNC_1((VAR_2, "Not listening for calling name\n"));
      break;
  case 0x82:
      FUNC_1((VAR_2, "Called name not present\n"));
      break;
  case 0x83:
      FUNC_1((VAR_2, "Called name present, but insufficient resources\n"));
      break;
  default:
      FUNC_1((VAR_2, "Unspecified error 0x%X\n", VAR_11));
      break;
  }
     }
   }
     break;

 case 0x85:
     VAR_3 = FUNC_4(VAR_2, VAR_3, "[P1]NBT Session Keepalive\nFlags=[B]\nLength=[rd]\n", VAR_8, 0);
     break;

 default:
     VAR_3 = FUNC_4(VAR_2, VAR_3, "NBT - Unknown packet type\nType=[B]\n", VAR_8, 0);
     break;
 }
 FUNC_1((VAR_2, "\n"));
    }
    return;
trunc:
    FUNC_1((VAR_2, "%s", VAR_1));
}
