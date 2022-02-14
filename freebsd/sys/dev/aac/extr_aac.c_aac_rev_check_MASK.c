
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aac_softc {int dummy; } ;
struct TYPE_6__ {int dash; int type; int minor; int major; } ;
struct TYPE_7__ {TYPE_2__ comp; } ;
struct TYPE_8__ {int buildNumber; TYPE_3__ external; } ;
struct aac_rev_check_resp {int possiblyCompatible; TYPE_4__ adapterSWRevision; } ;
struct TYPE_5__ {int buildNumber; } ;
struct aac_rev_check {TYPE_1__ callingRevision; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct aac_softc*,char*,char*,...) ;

__attribute__((used)) static int
FUNC_3(struct aac_softc *VAR_7, caddr_t VAR_8)
{
 struct aac_rev_check VAR_9;
 struct aac_rev_check_resp VAR_10;
 int VAR_11 = 0;

 FUNC_2(VAR_7, VAR_5, "");




 if ((VAR_11 = FUNC_0(VAR_8, (caddr_t)&VAR_9,
   sizeof(struct aac_rev_check))) != 0) {
  return VAR_11;
 }

 FUNC_2(VAR_7, VAR_6, "Userland revision= %d\n",
       VAR_9.callingRevision.buildNumber);




 VAR_10.possiblyCompatible = 1;
 VAR_10.adapterSWRevision.external.comp.major =
     VAR_2;
 VAR_10.adapterSWRevision.external.comp.minor =
     VAR_3;
 VAR_10.adapterSWRevision.external.comp.type =
     VAR_4;
 VAR_10.adapterSWRevision.external.comp.dash =
     VAR_0;
 VAR_10.adapterSWRevision.buildNumber =
     VAR_1;

 return(FUNC_1((caddr_t)&VAR_10, VAR_8,
   sizeof(struct aac_rev_check_resp)));
}
