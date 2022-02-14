
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ oui; } ;
struct hdmi_vendor_infoframe {scalar_t__ vic; scalar_t__ s3d_struct; scalar_t__ s3d_ext_data; } ;
union hdmi_vendor_any_infoframe {TYPE_1__ any; struct hdmi_vendor_infoframe hdmi; } ;
struct hdmi_any_infoframe {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hdmi_any_infoframe*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(union hdmi_vendor_any_infoframe *VAR_3)
{
 struct hdmi_vendor_infoframe *VAR_4 = &VAR_3->hdmi;

 FUNC_1((struct hdmi_any_infoframe *)VAR_3);

 if (VAR_3->any.oui != VAR_2) {
  FUNC_2("    not a HDMI vendor infoframe\n");
  return;
 }
 if (VAR_4->vic == 0 && VAR_4->s3d_struct == VAR_0) {
  FUNC_2("    empty frame\n");
  return;
 }

 if (VAR_4->vic)
  FUNC_2("    HDMI VIC: %u\n", VAR_4->vic);
 if (VAR_4->s3d_struct != VAR_0) {
  FUNC_2("    3D structure: %s\n",
    FUNC_0(VAR_4->s3d_struct));
  if (VAR_4->s3d_struct >= VAR_1)
   FUNC_2("    3D extension data: %d\n",
     VAR_4->s3d_ext_data);
 }
}
