
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct isl_softc {int isl_sx; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct isl_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 struct isl_softc* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_12 ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_13)
{
 struct isl_softc *VAR_14;
 struct sysctl_ctx_list *VAR_15;
 struct sysctl_oid *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_14 = FUNC_2(VAR_13);
 VAR_14->dev = VAR_13;

 if (FUNC_5(VAR_13, 0) != 0)
  return (VAR_5);

 FUNC_7(&VAR_14->isl_sx, "ISL read lock");

 VAR_15 = FUNC_3(VAR_13);
 VAR_16 = FUNC_4(VAR_13);

 VAR_17 = FUNC_6(VAR_13, VAR_0) >= 0;
 VAR_18 = FUNC_6(VAR_13, VAR_1) >= 0;
 VAR_19 = FUNC_6(VAR_13, VAR_2) >= 0;

 if (VAR_17) {
  FUNC_0(VAR_15,
   FUNC_1(VAR_16), VAR_11,
       "als", VAR_4 | VAR_3,
       VAR_14, VAR_6, VAR_12, "I",
       "Current ALS sensor read-out");
 }

 if (VAR_18) {
  FUNC_0(VAR_15,
   FUNC_1(VAR_16), VAR_11,
       "ir", VAR_4 | VAR_3,
       VAR_14, VAR_7, VAR_12, "I",
       "Current IR sensor read-out");
 }

 if (VAR_19) {
  FUNC_0(VAR_15,
   FUNC_1(VAR_16), VAR_11,
       "prox", VAR_4 | VAR_3,
       VAR_14, VAR_8, VAR_12, "I",
       "Current proximity sensor read-out");
 }

 FUNC_0(VAR_15,
  FUNC_1(VAR_16), VAR_11,
      "resolution", VAR_4 | VAR_3,
      VAR_14, VAR_10, VAR_12, "I",
      "Current proximity sensor resolution");

 FUNC_0(VAR_15,
 FUNC_1(VAR_16), VAR_11,
     "range", VAR_4 | VAR_3,
     VAR_14, VAR_9, VAR_12, "I",
     "Current proximity sensor range");

 return (0);
}
