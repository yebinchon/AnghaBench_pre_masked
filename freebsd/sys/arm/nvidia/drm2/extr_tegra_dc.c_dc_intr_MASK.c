
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int nvidia_head; TYPE_1__ drm_crtc; } ;
struct dc_softc {TYPE_2__ tegra_crtc; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int FUNC_2 (struct dc_softc*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct dc_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_2;


 VAR_4 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_0, VAR_4);
 if (VAR_4 & VAR_1) {
  FUNC_3(VAR_3->tegra_crtc.drm_crtc.dev,
      VAR_3->tegra_crtc.nvidia_head);
  FUNC_2(VAR_3);
 }
}
