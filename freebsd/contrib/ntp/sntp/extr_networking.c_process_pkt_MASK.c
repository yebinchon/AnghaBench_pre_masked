
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int u_int ;
struct pkt {scalar_t__ stratum; int xmt; int org; int li_vn_mode; int refid; int exten; } ;
struct key {int dummy; } ;
typedef int sockaddr_u ;
typedef int l_fp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int,char*) ;
 int VAR_15 ;
 int FUNC_7 (struct pkt*,int,int,struct key*) ;
 int FUNC_8 (int,struct key**) ;
 int FUNC_9 (int ,char*,char const*,...) ;
 int FUNC_10 (int ) ;
 char const* FUNC_11 (int *) ;
 int FUNC_12 (char*,int,...) ;
 int * FUNC_13 (int ,int *) ;
 char const* FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;

int
FUNC_16 (
 struct pkt *VAR_16,
 sockaddr_u *VAR_17,
 int VAR_18,
 int VAR_19,
 struct pkt *VAR_20,
 const char * VAR_21
 )
{
 u_int VAR_22;
 struct key * VAR_23;
 int VAR_24;
 int VAR_25;
 u_int VAR_26;
 u_int32 * VAR_27;
 u_int32 * VAR_28;
 l_fp VAR_29;
 l_fp VAR_30;


 VAR_23 = ((void*)0);
 VAR_24 = (FUNC_0(VAR_0)) ? 0 : -1;
 if (VAR_18 < (int)VAR_5 || (VAR_18 & 3) != 0) {
  FUNC_9(VAR_6,
   "%s: Incredible packet length: %d.  Discarding.",
   VAR_21, VAR_18);
  return VAR_11;
 }



 VAR_28 = (void*)((char*)VAR_16 + VAR_18);
 VAR_27 = FUNC_13(VAR_16->exten, VAR_28);
 if (((void*)0) == VAR_27) {
  FUNC_9(VAR_6,
   "%s: Missing extension field.  Discarding.",
   VAR_21);
  return VAR_11;
 }


 VAR_26 = (u_int)(VAR_28 - VAR_27);


 switch (VAR_26) {

 case 0:
  break;

 case 1:

  VAR_22 = FUNC_10(*VAR_27);
  FUNC_12("Crypto NAK = 0x%08x from %s\n", VAR_22, FUNC_14(VAR_17));
  break;

 case 3:
  FUNC_9(VAR_6,
   "%s: Key ID + 3DES MAC is unsupported.  Discarding.",
   VAR_21);
  return VAR_11;

 case 5:
 case 6:





  VAR_22 = FUNC_10(*VAR_27);
  FUNC_8(VAR_22, &VAR_23);
  if (!VAR_23) {
   FUNC_12("unrecognized key ID = 0x%08x\n", VAR_22);
   break;
  }






  VAR_25 = VAR_26 << 2;
  if (!FUNC_7(VAR_16, VAR_18 - VAR_25,
         VAR_25 - 4, VAR_23)) {
   VAR_24 = VAR_1;
   break;
  }

  VAR_24 = VAR_15;
  FUNC_6(1, ("sntp %s: packet from %s authenticated using key id %d.\n",
     VAR_21, FUNC_14(VAR_17), VAR_22));
  break;

 default:
  FUNC_9(VAR_6,
   "%s: Unexpected extension length: %d.  Discarding.",
   VAR_21, VAR_26);
  return VAR_11;
 }

 switch (VAR_24) {

 case -1:
  break;

 case 0:
  return VAR_12;
  break;

 case 1:
  break;

 default:
  break;
 }


 if (FUNC_5(VAR_16->li_vn_mode) < VAR_9 ||
  FUNC_5(VAR_16->li_vn_mode) > VAR_10) {
  FUNC_9(VAR_6,
   "%s: Packet shows wrong version (%d)",
   VAR_21, FUNC_5(VAR_16->li_vn_mode));
  return VAR_13;
 }

 if (FUNC_4(VAR_16->li_vn_mode) != VAR_19 &&
     FUNC_4(VAR_16->li_vn_mode) != VAR_8) {
  FUNC_9(VAR_6,
   "%s: mode %d stratum %d", VAR_21,
   FUNC_4(VAR_16->li_vn_mode), VAR_16->stratum);
  return VAR_13;
 }

 if (VAR_14 == VAR_16->stratum) {
  char *VAR_31;

  FUNC_6(1, ("%s: Stratum unspecified, going to check for KOD (stratum: %d)\n",
     VAR_21, VAR_16->stratum));
  VAR_31 = (char *) &VAR_16->refid;
  FUNC_6(1, ("%s: Packet refid: %c%c%c%c\n", VAR_21,
     VAR_31[0], VAR_31[1], VAR_31[2], VAR_31[3]));

  if (VAR_31[0] != 'X') {
   if (FUNC_15(VAR_31, "DENY", 4) == 0)
    return VAR_2;
   if (FUNC_15(VAR_31, "RSTR", 4) == 0)
    return VAR_2;
   if (FUNC_15(VAR_31, "RATE", 4) == 0)
    return VAR_3;




  }
 }

 if (VAR_4 == FUNC_3(VAR_16->li_vn_mode)) {
  FUNC_9(VAR_6,
   "%s: %s not in sync, skipping this server",
   VAR_21, FUNC_14(VAR_17));
  return VAR_13;
 }





 if (VAR_7 == VAR_19)
  return VAR_18;

 if (!FUNC_1(&VAR_16->org, &VAR_20->xmt)) {
  FUNC_2(&VAR_16->org, &VAR_30);
  FUNC_2(&VAR_20->xmt, &VAR_29);
  FUNC_9(VAR_6,
   "%s response org expected to match sent xmt",
   FUNC_14(VAR_17));
  FUNC_9(VAR_6, "resp org: %s", FUNC_11(&VAR_30));
  FUNC_9(VAR_6, "sent xmt: %s", FUNC_11(&VAR_29));
  return VAR_11;
 }

 return VAR_18;
}
