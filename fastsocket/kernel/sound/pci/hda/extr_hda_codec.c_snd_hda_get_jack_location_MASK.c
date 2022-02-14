
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;

const char *FUNC_1(u32 VAR_2)
{
 static char *VAR_3[7] = {
  "N/A", "Rear", "Front", "Left", "Right", "Top", "Bottom",
 };
 static unsigned char VAR_4[] = {
  0x07, 0x08,
  0x17, 0x18, 0x19,
  0x37, 0x38
 };
 static char *VAR_5[] = {
  "Rear Panel", "Drive Bar",
  "Riser", "HDMI", "ATAPI",
  "Mobile-In", "Mobile-Out"
 };
 int VAR_6;
 VAR_2 = (VAR_2 & VAR_0) >> VAR_1;
 if ((VAR_2 & 0x0f) < 7)
  return VAR_3[VAR_2 & 0x0f];
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  if (VAR_2 == VAR_4[VAR_6])
   return VAR_5[VAR_6];
 }
 return "UNKNOWN";
}
