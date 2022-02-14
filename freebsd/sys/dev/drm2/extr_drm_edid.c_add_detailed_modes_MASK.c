
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct edid {int features; } ;
struct drm_connector {int dummy; } ;
struct detailed_mode_closure {int member_2; int preferred; int modes; int member_4; int member_3; struct edid* member_1; struct drm_connector* member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct detailed_mode_closure*) ;
 int FUNC_1 (struct edid*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct drm_connector *VAR_2, struct edid *VAR_3,
     u32 VAR_4)
{
 struct detailed_mode_closure VAR_5 = {
  VAR_2,
  VAR_3,
  1,
  VAR_4,
  0
 };

 if (VAR_5.preferred && !FUNC_1(VAR_3, 1, 3))
  VAR_5.preferred =
      (VAR_3->features & VAR_0);

 FUNC_0((u8 *)VAR_3, VAR_1, &VAR_5);

 return VAR_5.modes;
}
