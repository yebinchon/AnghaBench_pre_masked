
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct alpm_softc {int * smbus; int lock; int * res; int smbsh; int smbst; } ;
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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_14 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 struct alpm_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_15)
{
 int VAR_16;
 u_int32_t VAR_17;
 struct alpm_softc *VAR_18;

 VAR_18 = FUNC_5(VAR_15);


 VAR_17 = FUNC_8(VAR_15, VAR_0, 1);
 FUNC_9(VAR_15, VAR_0, VAR_17 & ~VAR_1, 1);
 if (VAR_14 || VAR_13) {
  VAR_17 = FUNC_8(VAR_15, VAR_9, 1);
  FUNC_6(VAR_15, "%s/%s",
   (VAR_17 & VAR_10) ? "host":"nohost",
   (VAR_17 & VAR_11) ? "slave":"noslave");

  VAR_17 = FUNC_8(VAR_15, VAR_7, 1);
  switch (VAR_17 & VAR_8) {
  case 132:
   FUNC_10(" 149K");
   break;
  case 128:
   FUNC_10(" 74K");
   break;
  case 130:
   FUNC_10(" 37K");
   break;
  case 131:
   FUNC_10(" 223K");
   break;
  case 133:
   FUNC_10(" 111K");
   break;
  case 129:
   FUNC_10(" 55K");
   break;
  default:
   FUNC_10("unknown");
   break;
  }
  FUNC_10("\n");
 }

 VAR_16 = VAR_6;
 VAR_18->res = FUNC_1(VAR_15, VAR_12, &VAR_16,
     VAR_5);

 if (VAR_18->res == ((void*)0)) {
  FUNC_6(VAR_15,"Could not allocate Bus space\n");
  return (VAR_3);
 }
 VAR_18->smbst = FUNC_12(VAR_18->res);
 VAR_18->smbsh = FUNC_11(VAR_18->res);
 FUNC_7(&VAR_18->lock, FUNC_4(VAR_15), "alpm", VAR_4);


 VAR_18->smbus = FUNC_3(VAR_15, "smbus", -1);
 if (VAR_18->smbus == ((void*)0)) {
  FUNC_0(VAR_15);
  return (VAR_2);
 }
 FUNC_2(VAR_15);

 return (0);
}
