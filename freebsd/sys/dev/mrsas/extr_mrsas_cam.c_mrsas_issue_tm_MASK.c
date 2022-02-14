
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mrsas_softc {int mrsas_dev; int sim_lock; int ocr_chan; } ;
struct TYPE_5__ {int high; int low; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ addr; } ;
typedef TYPE_3__ MRSAS_REQUEST_DESCRIPTOR_UNION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct mrsas_softc*,int ,int ) ;
 int FUNC_2 (int *,int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct mrsas_softc *VAR_5,
 MRSAS_REQUEST_DESCRIPTOR_UNION *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_5, VAR_6->addr.u.low, VAR_6->addr.u.high);
 VAR_7 = FUNC_2(&VAR_5->ocr_chan, &VAR_5->sim_lock, VAR_2, "tm_sleep", 50*VAR_4);

 if (VAR_7 == VAR_0) {
  FUNC_0(VAR_5->mrsas_dev, "tm cmd TIMEDOUT\n");
  return VAR_1;
 }

 return VAR_3;
}
