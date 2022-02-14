
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_video_output {int* vo_levels; int vo_numlevels; int vo_fullpower; int vo_economy; int handle; } ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,struct acpi_video_output*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_5 (struct acpi_video_output*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int**) ;

__attribute__((used)) static void
FUNC_7(struct acpi_video_output *VAR_5, ACPI_HANDLE VAR_6)
{

 FUNC_0(VAR_4);
 if (VAR_5->vo_levels != ((void*)0)) {
  FUNC_4(VAR_5->handle, VAR_0,
      VAR_3);
  FUNC_3(VAR_5->vo_levels);
  VAR_5->vo_levels = ((void*)0);
 }
 VAR_5->handle = VAR_6;
 VAR_5->vo_numlevels = FUNC_6(VAR_6, &VAR_5->vo_levels);
 if (VAR_5->vo_numlevels >= 2) {
  if (VAR_5->vo_fullpower == -1 ||
      FUNC_5(VAR_5, VAR_5->vo_fullpower) != 0) {

   VAR_5->vo_fullpower = VAR_5->vo_levels[VAR_2];
  }
  if (VAR_5->vo_economy == -1 ||
      FUNC_5(VAR_5, VAR_5->vo_economy) != 0) {

   VAR_5->vo_economy = VAR_5->vo_levels[VAR_1];
  }
  FUNC_2(VAR_6, VAR_0,
      VAR_3, VAR_5);
 }
 FUNC_1(VAR_4);
}
