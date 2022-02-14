
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tmc_softc {scalar_t__ dev_type; struct coresight_event* event; int nev; } ;
struct endpoint {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct coresight_event {TYPE_1__ etr; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 struct tmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct endpoint*,struct coresight_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, struct endpoint *VAR_4,
    struct coresight_event *VAR_5)
{
 struct tmc_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_3);

 if (VAR_6->dev_type == VAR_0)
  return (0);

 FUNC_0(VAR_6->dev_type == VAR_1,
     ("Wrong dev_type"));






 if (VAR_5->etr.flags & VAR_2) {
  VAR_5->etr.flags &= ~VAR_2;
  VAR_7 = FUNC_1(&VAR_6->nev, 1);
  if (VAR_7 == 0) {
   VAR_6->event = VAR_5;
   FUNC_5(VAR_3);
   FUNC_3(VAR_3, VAR_4, VAR_5);
   FUNC_4(VAR_3);
  }
 }

 return (0);
}
