
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct funnel_softc {int res; } ;
struct endpoint {int reg; } ;
struct coresight_event {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct funnel_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1, struct endpoint *VAR_2,
    struct coresight_event *VAR_3)
{
 struct funnel_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_2(VAR_1);

 VAR_5 = FUNC_0(VAR_4->res, VAR_0);
 VAR_5 &= ~(1 << VAR_2->reg);
 FUNC_1(VAR_4->res, VAR_0, VAR_5);
}
