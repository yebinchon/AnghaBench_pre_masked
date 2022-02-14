
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct drm_crtc {int gamma_size; int gamma_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;

int FUNC_1(struct drm_crtc *VAR_4,
      int VAR_5)
{
 VAR_4->gamma_size = VAR_5;

 VAR_4->gamma_store = FUNC_0(VAR_5 * sizeof(uint16_t) * 3,
     VAR_0, VAR_2 | VAR_3);
 if (!VAR_4->gamma_store) {
  VAR_4->gamma_size = 0;
  return -VAR_1;
 }

 return 0;
}
