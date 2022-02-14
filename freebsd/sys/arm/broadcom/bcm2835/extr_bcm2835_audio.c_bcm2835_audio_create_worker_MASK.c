
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct bcm2835_audio_info {int worker_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,struct proc**,int ,int ,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct bcm2835_audio_info *VAR_2)
{
 struct proc *VAR_3;

 VAR_2->worker_state = VAR_0;
 if (FUNC_0(VAR_1, (void*)VAR_2, &VAR_3, 0, 0,
     "bcm2835_audio_worker") != 0) {
  FUNC_1("failed to create bcm2835_audio_worker\n");
 }
}
