
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_ctx_list {int dummy; } ;
struct mvts_softc {int sc_res; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct mvts_softc* FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct mvts_softc *VAR_7;
 struct sysctl_ctx_list *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_6);
 VAR_7->sc_dev = VAR_6;
 VAR_9 = FUNC_2(VAR_6, VAR_4, VAR_7->sc_res);
 if (VAR_9) {
  FUNC_6(VAR_6, "could not allocate resources\n");
  return (VAR_2);
 }
 VAR_8 = FUNC_4(VAR_6);
 FUNC_0(VAR_8, FUNC_1(FUNC_5(VAR_6)),
     VAR_3, "temperature", VAR_1 | VAR_0, VAR_6,
     0, VAR_5, "IK", "Current Temperature");

 return (0);
}
