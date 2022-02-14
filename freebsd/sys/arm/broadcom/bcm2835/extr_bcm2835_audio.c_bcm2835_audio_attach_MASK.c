
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bcm2835_audio_info* ich_arg; int ich_func; } ;
struct bcm2835_audio_info {TYPE_1__ intr_hook; int vchi_handle; int worker_cv; int lock; int bufsz; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 struct bcm2835_audio_info* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8)
{
     struct bcm2835_audio_info *VAR_9;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2, VAR_3 | VAR_4);

 VAR_9->dev = VAR_8;
 VAR_9->bufsz = VAR_5;

 FUNC_4(&VAR_9->lock, FUNC_2(VAR_8),
     "bcm_audio_lock", VAR_1);
 FUNC_1(&VAR_9->worker_cv, "worker_cv");
 VAR_9->vchi_handle = VAR_6;





 VAR_9->intr_hook.ich_func = VAR_7;
 VAR_9->intr_hook.ich_arg = VAR_9;

 if (FUNC_0(&VAR_9->intr_hook) != 0)
  goto no;

     return 0;

no:
     return VAR_0;
}
