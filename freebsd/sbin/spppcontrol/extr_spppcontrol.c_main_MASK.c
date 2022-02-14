
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long timeout; } ;
struct TYPE_7__ {int flags; int secret; int name; void* proto; } ;
struct TYPE_6__ {int secret; int name; void* proto; } ;
struct TYPE_8__ {int enable_vj; int enable_ipv6; TYPE_1__ lcp; TYPE_3__ hisauth; TYPE_2__ myauth; } ;
struct spppreq {uintptr_t cmd; TYPE_4__ defs; } ;
struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int,int ,struct ifreq*) ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (char const*,struct spppreq*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,char const*,int) ;
 long FUNC_9 (char const*,char**,int) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_16, char **VAR_17)
{
 int VAR_18, VAR_19;
 int VAR_20 = 0, VAR_21 = 0;
 size_t VAR_22;
 long VAR_23;
 char *VAR_24;
 const char *VAR_25, *VAR_26;
 struct ifreq VAR_27;
 struct spppreq VAR_28;

 while ((VAR_19 = FUNC_2(VAR_16, VAR_17, "v")) != -1)
  switch (VAR_19) {
  case 'v':
   VAR_21++;
   break;

  default:
   VAR_20++;
   break;
  }
 VAR_17 += VAR_15;
 VAR_16 -= VAR_15;

 if (VAR_20 || VAR_16 < 1)
  FUNC_10();

 VAR_25 = VAR_17[0];
 FUNC_8(VAR_27.ifr_name, VAR_25, sizeof VAR_27.ifr_name);


 if ((VAR_18 = FUNC_5(VAR_0, VAR_12, 0)) < 0)
  FUNC_0(VAR_7, "ifconfig: socket");

 VAR_16--;
 VAR_17++;

 VAR_28.cmd = (uintptr_t) VAR_13;
 VAR_27.ifr_data = (caddr_t)&VAR_28;

 if (FUNC_3(VAR_18, VAR_10, &VAR_27) == -1)
  FUNC_0(VAR_6, "SIOCGIFGENERIC(SPPPIOGDEFS)");

 if (VAR_16 == 0) {

  FUNC_4(VAR_25, &VAR_28);
  return 0;
 }



 while (VAR_16 > 0) {
  if (strncmp(VAR_17[0], "authproto=", (VAR_22 = strlen("authproto="))) == 0) {
   VAR_26 = VAR_17[0] + VAR_22;
   if (FUNC_7(VAR_26, "pap") == 0)
    VAR_28.defs.myauth.proto =
     VAR_28.defs.hisauth.proto = VAR_9;
   else if (FUNC_7(VAR_26, "chap") == 0)
    VAR_28.defs.myauth.proto =
     VAR_28.defs.hisauth.proto = VAR_8;
   else if (FUNC_7(VAR_26, "none") == 0)
    VAR_28.defs.myauth.proto =
     VAR_28.defs.hisauth.proto = 0;
   else
    FUNC_1(VAR_5, "bad auth proto: %s", VAR_26);
  } else if (FUNC_0(VAR_17[0], "myauthproto=", (VAR_22 = FUNC_0("myauthproto="))) == 0) {
   VAR_26 = VAR_17[0] + VAR_22;
   if (FUNC_7(VAR_26, "pap") == 0)
    VAR_28.defs.myauth.proto = VAR_9;
   else if (FUNC_7(VAR_26, "chap") == 0)
    VAR_28.defs.myauth.proto = VAR_8;
   else if (FUNC_7(VAR_26, "none") == 0)
    VAR_28.defs.myauth.proto = 0;
   else
    FUNC_1(VAR_5, "bad auth proto: %s", VAR_26);
  } else if (FUNC_0(VAR_17[0], "myauthname=", (VAR_22 = FUNC_0("myauthname="))) == 0)
   FUNC_8(VAR_28.defs.myauth.name, VAR_17[0] + VAR_22,
    VAR_4);
  else if (FUNC_0(VAR_17[0], "myauthsecret=", (VAR_22 = FUNC_0("myauthsecret="))) == 0 ||
    FUNC_0(VAR_17[0], "myauthkey=", (VAR_22 = FUNC_0("myauthkey="))) == 0)
   FUNC_8(VAR_28.defs.myauth.secret, VAR_17[0] + VAR_22,
    VAR_3);
  else if (FUNC_0(VAR_17[0], "hisauthproto=", (VAR_22 = FUNC_0("hisauthproto="))) == 0) {
   VAR_26 = VAR_17[0] + VAR_22;
   if (FUNC_7(VAR_26, "pap") == 0)
    VAR_28.defs.hisauth.proto = VAR_9;
   else if (FUNC_7(VAR_26, "chap") == 0)
    VAR_28.defs.hisauth.proto = VAR_8;
   else if (FUNC_7(VAR_26, "none") == 0)
    VAR_28.defs.hisauth.proto = 0;
   else
    FUNC_1(VAR_5, "bad auth proto: %s", VAR_26);
  } else if (FUNC_0(VAR_17[0], "hisauthname=", (VAR_22 = FUNC_0("hisauthname="))) == 0)
   FUNC_8(VAR_28.defs.hisauth.name, VAR_17[0] + VAR_22,
    VAR_4);
  else if (FUNC_0(VAR_17[0], "hisauthsecret=", (VAR_22 = FUNC_0("hisauthsecret="))) == 0 ||
    FUNC_0(VAR_17[0], "hisauthkey=", (VAR_22 = FUNC_0("hisauthkey="))) == 0)
   FUNC_8(VAR_28.defs.hisauth.secret, VAR_17[0] + VAR_22,
    VAR_3);
  else if (FUNC_7(VAR_17[0], "callin") == 0)
   VAR_28.defs.hisauth.flags |= VAR_1;
  else if (FUNC_7(VAR_17[0], "always") == 0)
   VAR_28.defs.hisauth.flags &= ~VAR_1;
  else if (FUNC_7(VAR_17[0], "norechallenge") == 0)
   VAR_28.defs.hisauth.flags |= VAR_2;
  else if (FUNC_7(VAR_17[0], "rechallenge") == 0)
   VAR_28.defs.hisauth.flags &= ~VAR_2;
  else if (FUNC_0(VAR_17[0], "lcp-timeout=", (VAR_22 = FUNC_0("lcp-timeout="))) == 0) {
   VAR_26 = VAR_17[0] + VAR_22;
   VAR_23 = FUNC_9(VAR_26, &VAR_24, 10);
   if (*VAR_26 == '\0' || *VAR_24 != '\0' ||





       VAR_23 < 10 || VAR_23 > 20000)
    FUNC_1(VAR_5, "bad lcp timeout value: %s",
         VAR_26);
   VAR_28.defs.lcp.timeout = VAR_23;
  } else if (FUNC_7(VAR_17[0], "enable-vj") == 0)
   VAR_28.defs.enable_vj = 1;
  else if (FUNC_7(VAR_17[0], "disable-vj") == 0)
   VAR_28.defs.enable_vj = 0;
  else if (FUNC_7(VAR_17[0], "enable-ipv6") == 0)
   VAR_28.defs.enable_ipv6 = 1;
  else if (FUNC_7(VAR_17[0], "disable-ipv6") == 0)
   VAR_28.defs.enable_ipv6 = 0;
  else
   FUNC_1(VAR_5, "bad parameter: \"%s\"", VAR_17[0]);

  VAR_17++;
  VAR_16--;
 }

 VAR_28.cmd = (uintptr_t)VAR_14;

 if (FUNC_3(VAR_18, VAR_11, &VAR_27) == -1)
  FUNC_0(VAR_6, "SIOCSIFGENERIC(SPPPIOSDEFS)");

 if (VAR_21)
  FUNC_4(VAR_25, &VAR_28);

 return 0;
}
