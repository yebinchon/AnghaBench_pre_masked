
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(int VAR_0)
{
 static struct {
  int model_code;
  char *model_name;
 } VAR_1[] = {
  { 133, "NetScroll" },
  { 134, "NetMouse/NetScroll Optical" },
  { 137, "GlidePoint" },
  { 131, "ThinkingMouse" },
  { 136, "IntelliMouse" },
  { 135, "MouseMan+" },
  { 128, "VersaPad" },
  { 139, "IntelliMouse Explorer" },
  { 142, "4D Mouse" },
  { 141, "4D+ Mouse" },
  { 132, "Synaptics Touchpad" },
  { 130, "IBM/Lenovo TrackPoint" },
  { 140, "Elantech Touchpad" },
  { 138, "Generic PS/2 mouse" },
  { 129, "Unknown" },
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].model_code != 129; ++VAR_2)
  if (VAR_1[VAR_2].model_code == VAR_0)
   break;
 return (VAR_1[VAR_2].model_name);
}
