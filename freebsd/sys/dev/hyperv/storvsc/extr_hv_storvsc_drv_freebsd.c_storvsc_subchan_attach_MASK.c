
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmstor_chan_props {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct storvsc_softc {TYPE_1__* hs_drv_props; } ;
typedef int props ;
struct TYPE_2__ {int drv_ringbuffer_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmstor_chan_props*,int ,int) ;
 int FUNC_1 (struct vmbus_channel*) ;
 int FUNC_2 (struct vmbus_channel*,int ,int ,void*,int,int ,struct storvsc_softc*) ;

__attribute__((used)) static void
FUNC_3(struct storvsc_softc *VAR_1,
    struct vmbus_channel *VAR_2)
{
 struct vmstor_chan_props VAR_3;
 int VAR_4 = 0;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_2,
     VAR_1->hs_drv_props->drv_ringbuffer_size,
       VAR_1->hs_drv_props->drv_ringbuffer_size,
     (void *)&VAR_3,
     sizeof(struct vmstor_chan_props),
     VAR_0, VAR_1);
}
