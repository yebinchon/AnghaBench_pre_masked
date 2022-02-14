
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tmc_softc {scalar_t__ dev_type; int res; struct coresight_event* event; } ;
struct endpoint {int dummy; } ;
struct TYPE_2__ {scalar_t__ low; scalar_t__ offset; int cycle; } ;
struct coresight_event {TYPE_1__ etr; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct tmc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, struct endpoint *VAR_5,
    struct coresight_event *VAR_6)
{
 struct tmc_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_1(VAR_4);

 if (VAR_7->dev_type == VAR_0)
  return (0);





 if (VAR_7->event != VAR_6)
  return (0);

 if (FUNC_0(VAR_7->res, VAR_3) & VAR_1) {
  VAR_6->etr.offset = 0;
  VAR_6->etr.cycle++;
  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
 } else {
  VAR_8 = FUNC_0(VAR_7->res, VAR_2);
  VAR_6->etr.offset = (VAR_8 - VAR_6->etr.low);
 }

 return (0);
}
