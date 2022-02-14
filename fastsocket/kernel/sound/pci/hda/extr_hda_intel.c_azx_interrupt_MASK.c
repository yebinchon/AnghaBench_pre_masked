
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct azx_dev {int sd_int_sta_mask; int irq_pending; int substream; int running; } ;
struct azx {int num_streams; int driver_caps; int reg_lock; int irq_pending_work; TYPE_4__* bus; struct azx_dev* azx_dev; scalar_t__ disabled; TYPE_3__* pci; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {scalar_t__ workq; } ;
struct TYPE_5__ {scalar_t__ runtime_status; } ;
struct TYPE_6__ {TYPE_1__ power; } ;
struct TYPE_7__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct azx*,struct azx_dev*) ;
 int FUNC_1 (struct azx*,int ) ;
 int FUNC_2 (struct azx*,int ) ;
 int FUNC_3 (struct azx_dev*,int ) ;
 int FUNC_4 (struct azx_dev*,int ,int ) ;
 int FUNC_5 (struct azx*) ;
 int FUNC_6 (struct azx*,int ,int) ;
 int FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_12, void *VAR_13)
{
 struct azx *VAR_14 = VAR_13;
 struct azx_dev *VAR_15;
 u32 VAR_16;
 u8 VAR_17;
 int VAR_18, VAR_19;






 FUNC_9(&VAR_14->reg_lock);

 if (VAR_14->disabled) {
  FUNC_10(&VAR_14->reg_lock);
  return VAR_3;
 }

 VAR_16 = FUNC_2(VAR_14, VAR_1);
 if (VAR_16 == 0) {
  FUNC_10(&VAR_14->reg_lock);
  return VAR_3;
 }

 for (VAR_18 = 0; VAR_18 < VAR_14->num_streams; VAR_18++) {
  VAR_15 = &VAR_14->azx_dev[VAR_18];
  if (VAR_16 & VAR_15->sd_int_sta_mask) {
   VAR_17 = FUNC_3(VAR_15, VAR_10);
   FUNC_4(VAR_15, VAR_10, VAR_9);
   if (!VAR_15->substream || !VAR_15->running ||
       !(VAR_17 & VAR_8))
    continue;

   VAR_19 = FUNC_0(VAR_14, VAR_15);
   if (VAR_19 == 1) {
    VAR_15->irq_pending = 0;
    FUNC_10(&VAR_14->reg_lock);
    FUNC_8(VAR_15->substream);
    FUNC_9(&VAR_14->reg_lock);
   } else if (VAR_19 == 0 && VAR_14->bus && VAR_14->bus->workq) {

    VAR_15->irq_pending = 1;
    FUNC_7(VAR_14->bus->workq,
        &VAR_14->irq_pending_work);
   }
  }
 }


 VAR_16 = FUNC_1(VAR_14, VAR_4);
 if (VAR_16 & VAR_5) {
  if (VAR_16 & VAR_6) {
   if (VAR_14->driver_caps & VAR_0)
    FUNC_11(80);
   FUNC_5(VAR_14);
  }
  FUNC_6(VAR_14, VAR_4, VAR_5);
 }






 FUNC_10(&VAR_14->reg_lock);

 return VAR_2;
}
