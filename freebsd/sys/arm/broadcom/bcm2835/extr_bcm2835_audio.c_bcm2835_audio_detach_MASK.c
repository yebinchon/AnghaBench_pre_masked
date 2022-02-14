
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_info {scalar_t__ worker_state; int worker_cv; int lock; } ;
typedef int device_t ;


 int FUNC_0 (struct bcm2835_audio_info*) ;
 int FUNC_1 (struct bcm2835_audio_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct bcm2835_audio_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct bcm2835_audio_info*,int ) ;
 int FUNC_7 (int *) ;
 struct bcm2835_audio_info* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 int VAR_4;
 struct bcm2835_audio_info *VAR_5;
 VAR_5 = FUNC_8(VAR_3);


 FUNC_0(VAR_5);
 VAR_5->worker_state = VAR_2;
 FUNC_4(&VAR_5->worker_cv);

 while (VAR_5->worker_state != VAR_1)
  FUNC_5(&VAR_5->worker_cv, &VAR_5->lock);
 FUNC_1(VAR_5);

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_7(&VAR_5->lock);
 FUNC_3(&VAR_5->worker_cv);

 FUNC_2(VAR_5);

     FUNC_6(VAR_5, VAR_0);

 return 0;
}
