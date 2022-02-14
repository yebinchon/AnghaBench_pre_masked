
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_info {int worker_cv; int flags_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm2835_audio_info*) ;
 int FUNC_1 (struct bcm2835_audio_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bcm2835_audio_info *VAR_2)
{
 FUNC_0(VAR_2);
 VAR_2->flags_pending &= ~(VAR_1);
 VAR_2->flags_pending |= VAR_0;
 FUNC_2(&VAR_2->worker_cv);
 FUNC_1(VAR_2);
}
