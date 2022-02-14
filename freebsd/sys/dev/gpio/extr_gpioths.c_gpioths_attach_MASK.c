
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct gpioths_softc {void* fails_oid; void* hum_oid; void* temp_oid; int callout; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct gpioths_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,int ) ;
 struct gpioths_softc* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_9)
{
 struct gpioths_softc *VAR_10;
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid *VAR_12;

 VAR_10 = FUNC_4(VAR_9);
 VAR_11 = FUNC_5(VAR_9);
 VAR_12 = FUNC_6(VAR_9);

 VAR_10->dev = VAR_9;

 FUNC_2(&VAR_10->callout, 1);
 FUNC_3(&VAR_10->callout, VAR_2 * VAR_8, VAR_6, VAR_9);

 VAR_10->temp_oid = FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_3,
     "temperature", VAR_1 | VAR_0, VAR_10, 0,
     VAR_7, "I", "temperature(C)");

 VAR_10->hum_oid = FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_3,
     "humidity", VAR_1 | VAR_0, VAR_10, 0,
     VAR_5, "I", "humidity(%)");

 VAR_10->fails_oid = FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_3,
     "fails", VAR_1 | VAR_0, VAR_10, 0,
     VAR_4, "I", "fails since last successful read");

 return (0);
}
