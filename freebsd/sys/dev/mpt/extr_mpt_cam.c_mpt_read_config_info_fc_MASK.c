
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_10__ {int wwnn; int wwpn; int portid; } ;
struct TYPE_11__ {TYPE_3__ fc; } ;
struct TYPE_9__ {int Low; scalar_t__ High; } ;
struct TYPE_8__ {int Low; scalar_t__ High; } ;
struct TYPE_12__ {char* PageVersion; int PageType; int PageNumber; int PageLength; } ;
struct TYPE_13__ {int CurrentSpeed; int Flags; int PortIdentifier; TYPE_2__ WWPN; TYPE_1__ WWNN; TYPE_5__ Header; } ;
struct mpt_softc {int mpt_fcport_speed; TYPE_4__ scinfo; int dev; TYPE_7__ mpt_fcport_page0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mpt_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_6 ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (struct mpt_softc*,int ,char*,char*,int ,int ,int) ;
 int FUNC_8 (struct mpt_softc*,char*) ;
 int FUNC_9 (struct mpt_softc*,int ,int ,int ,TYPE_5__*,int ,int) ;
 int FUNC_10 (struct mpt_softc*,int ,TYPE_5__*,int,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct mpt_softc *VAR_7)
{
 struct sysctl_ctx_list *VAR_8;
 struct sysctl_oid *VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_11 = FUNC_9(VAR_7, VAR_2, 0,
     0, &VAR_7->mpt_fcport_page0.Header, VAR_1, 5000);
 if (VAR_11) {
  return (-1);
 }
 FUNC_7(VAR_7, VAR_4, "FC Port Page 0 Header: %x %x %x %x\n",
   VAR_7->mpt_fcport_page0.Header.PageVersion,
   VAR_7->mpt_fcport_page0.Header.PageLength,
   VAR_7->mpt_fcport_page0.Header.PageNumber,
   VAR_7->mpt_fcport_page0.Header.PageType);


 VAR_11 = FUNC_10(VAR_7, 0, &VAR_7->mpt_fcport_page0.Header,
     sizeof(VAR_7->mpt_fcport_page0), VAR_1, 5000);
 if (VAR_11) {
  FUNC_8(VAR_7, "failed to read FC Port Page 0\n");
  return (-1);
 }
 FUNC_6(&VAR_7->mpt_fcport_page0);

 switch (VAR_7->mpt_fcport_page0.CurrentSpeed) {
 case 135:
  VAR_7->mpt_fcport_speed = 1;
  break;
 case 134:
  VAR_7->mpt_fcport_speed = 2;
  break;
 case 136:
  VAR_7->mpt_fcport_speed = 10;
  break;
 case 133:
  VAR_7->mpt_fcport_speed = 4;
  break;
 default:
  VAR_7->mpt_fcport_speed = 0;
  break;
 }

 switch (VAR_7->mpt_fcport_page0.Flags &
     VAR_3) {
 case 131:
  VAR_7->mpt_fcport_speed = 0;
  VAR_10 = "<NO LOOP>";
  break;
 case 130:
  VAR_10 = "N-Port";
  break;
 case 129:
  VAR_10 = "NL-Port";
  break;
 case 132:
  VAR_10 = "F-Port";
  break;
 case 128:
  VAR_10 = "FL-Port";
  break;
 default:
  VAR_7->mpt_fcport_speed = 0;
  VAR_10 = "?";
  break;
 }

 VAR_7->scinfo.fc.wwnn = ((uint64_t)VAR_7->mpt_fcport_page0.WWNN.High << 32)
     | VAR_7->mpt_fcport_page0.WWNN.Low;
 VAR_7->scinfo.fc.wwpn = ((uint64_t)VAR_7->mpt_fcport_page0.WWPN.High << 32)
     | VAR_7->mpt_fcport_page0.WWPN.Low;
 VAR_7->scinfo.fc.portid = VAR_7->mpt_fcport_page0.PortIdentifier;

 FUNC_7(VAR_7, VAR_5,
     "FC Port Page 0: Topology <%s> WWNN 0x%16jx WWPN 0x%16jx "
     "Speed %u-Gbit\n", VAR_10,
     (uintmax_t)VAR_7->scinfo.fc.wwnn, (uintmax_t)VAR_7->scinfo.fc.wwpn,
     VAR_7->mpt_fcport_speed);
 FUNC_1(VAR_7);
 VAR_8 = FUNC_4(VAR_7->dev);
 VAR_9 = FUNC_5(VAR_7->dev);

 FUNC_2(VAR_8, FUNC_3(VAR_9), VAR_6,
     "wwnn", VAR_0, &VAR_7->scinfo.fc.wwnn,
     "World Wide Node Name");

 FUNC_2(VAR_8, FUNC_3(VAR_9), VAR_6,
      "wwpn", VAR_0, &VAR_7->scinfo.fc.wwpn,
      "World Wide Port Name");

 FUNC_0(VAR_7);
 return (0);
}
