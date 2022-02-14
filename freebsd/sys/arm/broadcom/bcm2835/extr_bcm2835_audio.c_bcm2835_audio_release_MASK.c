
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_info {scalar_t__ vchi_handle; int vchi_instance; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bcm2835_audio_info *VAR_1)
{
 int VAR_2;

 if (VAR_1->vchi_handle != VAR_0) {
  VAR_2 = FUNC_2(VAR_1->vchi_handle);
  if (VAR_2 != 0)
   FUNC_0("vchi_service_close failed: %d\n", VAR_2);
  FUNC_3(VAR_1->vchi_handle);
  VAR_1->vchi_handle = VAR_0;
 }

 FUNC_1(VAR_1->vchi_instance);
}
