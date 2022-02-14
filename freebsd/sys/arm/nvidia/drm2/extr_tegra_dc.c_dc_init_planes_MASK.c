
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_plane {int index; int drm_plane; } ;
struct tegra_drm {int drm_dev; } ;
struct TYPE_2__ {int nvidia_head; } ;
struct dc_softc {TYPE_1__ tegra_crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int,int *,int ,int ,int) ;
 int FUNC_1 (struct tegra_plane*,int ) ;
 struct tegra_plane* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct dc_softc *VAR_6, struct tegra_drm *VAR_7)
{
 int VAR_8, VAR_9;
 struct tegra_plane *VAR_10;

 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1, VAR_2 | VAR_3);
  VAR_10->index = VAR_8 + 1;
  VAR_9 = FUNC_0(&VAR_7->drm_dev, &VAR_10->drm_plane,
      1 << VAR_6->tegra_crtc.nvidia_head, &VAR_5,
      VAR_4, FUNC_3(VAR_4), 0);
  if (VAR_9 != 0) {
   FUNC_1(VAR_10, VAR_1);
   return (VAR_9);
  }
 }
 return 0;
}
