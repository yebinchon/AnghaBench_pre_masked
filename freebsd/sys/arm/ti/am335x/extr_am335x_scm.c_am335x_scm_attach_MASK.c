
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct am335x_scm_softc {int sc_temp_oid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (int ) ;
 int VAR_8 ;
 struct am335x_scm_softc* FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9)
{
 struct am335x_scm_softc *VAR_10;
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid_list *VAR_12;
 uint32_t VAR_13;


 FUNC_7(VAR_6, 0);
 FUNC_6(VAR_6, &VAR_13);
 FUNC_0(500);

 FUNC_7(VAR_6, VAR_5);
 FUNC_6(VAR_6, &VAR_13);
 FUNC_0(500);

 VAR_13 = VAR_4 | VAR_5 | VAR_7;
 FUNC_7(VAR_6, VAR_13);


 VAR_10 = FUNC_3(VAR_9);
        VAR_11 = FUNC_4(VAR_9);
 VAR_12 = FUNC_2(FUNC_5(VAR_9));
 VAR_10->sc_temp_oid = FUNC_1(VAR_11, VAR_12, VAR_3,
     "temperature", VAR_2 | VAR_1 | VAR_0,
     VAR_9, 0, VAR_8, "IK", "Current temperature");

 return (0);
}
