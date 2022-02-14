
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct etm_softc {int res; } ;
struct endpoint {int dummy; } ;
struct coresight_event {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct etm_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct coresight_event*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, struct endpoint *VAR_5,
    struct coresight_event *VAR_6)
{
 struct etm_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_2(VAR_4);

 FUNC_3(VAR_4, VAR_6);


 FUNC_1(VAR_7->res, VAR_0, VAR_1);


 do {
  VAR_8 = FUNC_0(VAR_7->res, VAR_2);
 } while ((VAR_8 & VAR_3) == 1);

 if ((FUNC_0(VAR_7->res, VAR_0) & VAR_1) == 0)
  FUNC_4("etm is not enabled\n");

 return (0);
}
