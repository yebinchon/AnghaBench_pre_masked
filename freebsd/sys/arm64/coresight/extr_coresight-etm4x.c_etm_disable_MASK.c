
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct etm_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_3, struct endpoint *VAR_4,
    struct coresight_event *VAR_5)
{
 struct etm_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_3);


 FUNC_1(VAR_6->res, VAR_0, 0);


 do {
  VAR_7 = FUNC_0(VAR_6->res, VAR_1);
 } while ((VAR_7 & VAR_2) == 0);
}
