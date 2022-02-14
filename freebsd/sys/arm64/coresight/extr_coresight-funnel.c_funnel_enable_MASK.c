
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct funnel_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, struct endpoint *VAR_4,
    struct coresight_event *VAR_5)
{
 struct funnel_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_3);

 VAR_7 = FUNC_0(VAR_6->res, VAR_2);
 VAR_7 &= ~(VAR_0);
 VAR_7 |= (7 << VAR_1);
 VAR_7 |= (1 << VAR_4->reg);
 FUNC_1(VAR_6->res, VAR_2, VAR_7);

 return (0);
}
