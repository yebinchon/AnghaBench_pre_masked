
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_video_output {scalar_t__ handle; int vo_numlevels; int* vo_levels; int vo_brightness; } ;
typedef int UINT32 ;
typedef scalar_t__ ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,char*) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(ACPI_HANDLE VAR_1, UINT32 VAR_2, void *VAR_3)
{
 struct acpi_video_output *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_3;
 FUNC_0(VAR_0);
 if (VAR_4->handle != VAR_1)
  goto out;

 switch (VAR_2) {
 case 131:
  if (VAR_4->vo_numlevels <= 3)
   goto out;

 case 129:
 case 130:
 case 128:
  if (VAR_4->vo_levels == ((void*)0))
   goto out;
  VAR_7 = FUNC_4(VAR_1);
  if (VAR_7 < 0)
   goto out;
  break;
 default:
  FUNC_3("unknown notify event 0x%x from %s\n",
      VAR_2, FUNC_2(VAR_1));
  goto out;
 }

 VAR_8 = VAR_7;
 switch (VAR_2) {
 case 131:
  for (VAR_5 = 2; VAR_5 < VAR_4->vo_numlevels; VAR_5++)
   if (VAR_4->vo_levels[VAR_5] == VAR_7) {
    VAR_8 = VAR_4->vo_numlevels > VAR_5 + 1 ?
         VAR_4->vo_levels[VAR_5 + 1] : VAR_4->vo_levels[2];
    break;
   }
  break;
 case 129:
 case 130:
  for (VAR_5 = 0; VAR_5 < VAR_4->vo_numlevels; VAR_5++) {
   VAR_6 = VAR_4->vo_levels[VAR_5];
   if (VAR_2 == 129) {
    if (VAR_6 > VAR_7 &&
        (VAR_6 < VAR_8 || VAR_7 == VAR_8))
     VAR_8 = VAR_6;
   } else {
    if (VAR_6 < VAR_7 &&
        (VAR_6 > VAR_8 || VAR_7 == VAR_8))
     VAR_8 = VAR_6;
   }
  }
  break;
 case 128:
  for (VAR_5 = 0; VAR_5 < VAR_4->vo_numlevels; VAR_5++)
   if (VAR_4->vo_levels[VAR_5] == 0) {
    VAR_8 = 0;
    break;
   }
  break;
 }
 if (VAR_8 != VAR_7) {
  FUNC_5(VAR_1, VAR_8);
  VAR_4->vo_brightness = VAR_8;
 }

out:
 FUNC_1(VAR_0);
}
