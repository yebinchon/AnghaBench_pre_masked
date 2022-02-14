
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_video_output {int* vo_levels; int vo_numlevels; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct acpi_video_output *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2);
 if (VAR_3->vo_levels == ((void*)0))
  return (VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_3->vo_numlevels; VAR_5++)
  if (VAR_3->vo_levels[VAR_5] == VAR_4)
   return (0);
 return (VAR_0);
}
