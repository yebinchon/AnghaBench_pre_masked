
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dot_clock; scalar_t__ hdisplay; scalar_t__ vdisplay; int vtotal; int htotal; } ;
struct edid_info {int edid_nmodes; struct videomode* edid_modes; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static struct videomode *
FUNC_1(struct edid_info *VAR_0, const struct videomode *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(FUNC_0(VAR_1->dot_clock * 1000,
     VAR_1->htotal), VAR_1->vtotal);
 for (VAR_3 = 0; VAR_3 < VAR_0->edid_nmodes; VAR_3++) {
  if (VAR_1->hdisplay == VAR_0->edid_modes[VAR_3].hdisplay &&
      VAR_1->vdisplay == VAR_0->edid_modes[VAR_3].vdisplay &&
      VAR_2 == FUNC_0(FUNC_0(
      VAR_0->edid_modes[VAR_3].dot_clock * 1000,
      VAR_0->edid_modes[VAR_3].htotal), VAR_0->edid_modes[VAR_3].vtotal)) {
   return &VAR_0->edid_modes[VAR_3];
  }
 }
 return ((void*)0);
}
