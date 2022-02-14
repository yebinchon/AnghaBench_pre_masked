
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bcm2835_audio_info {int vchi_handle; int vchi_instance; int vchi_connection; } ;
struct TYPE_3__ {int member_7; int member_8; int member_9; struct bcm2835_audio_info* member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ SERVICE_CREATION_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_5(struct bcm2835_audio_info *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_3(&VAR_5->vchi_instance);
 if (VAR_6 != 0) {
  FUNC_1("vchi_initialise failed: %d\n", VAR_6);
  return;
 }

 VAR_6 = FUNC_2(((void*)0), 0, VAR_5->vchi_instance);
 if (VAR_6 != 0) {
  FUNC_1("vchi_connect failed: %d\n", VAR_6);
  return;
 }

 SERVICE_CREATION_T VAR_7 = {
     FUNC_0(VAR_2, VAR_1),
     VAR_3,
     VAR_5->vchi_connection,
     0,
     0,
     VAR_4,
     VAR_5,
     1,
     1,
     0
 };

 VAR_6 = FUNC_4(VAR_5->vchi_instance, &VAR_7,
     &VAR_5->vchi_handle);

 if (VAR_6 != 0)
  VAR_5->vchi_handle = VAR_0;
}
