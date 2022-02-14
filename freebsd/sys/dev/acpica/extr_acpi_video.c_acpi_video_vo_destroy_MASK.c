
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_video_output_queue {int dummy; } ;
struct acpi_video_output {int adr; int * vo_levels; int handle; int vo_sysctl_ctx; int * vo_sysctl_tree; } ;
struct TYPE_2__ {int next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;


 int VAR_1 ;


 int VAR_2 ;
 int FUNC_3 (struct acpi_video_output_queue*,struct acpi_video_output*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_video_output_queue VAR_5 ;
 struct acpi_video_output_queue VAR_6 ;
 int FUNC_4 (struct acpi_video_output*,int ) ;
 struct acpi_video_output_queue VAR_7 ;
 struct acpi_video_output_queue VAR_8 ;
 int FUNC_5 (int *) ;
 struct acpi_video_output_queue VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;

__attribute__((used)) static void
FUNC_6(struct acpi_video_output *VAR_12)
{
 struct acpi_video_output_queue *VAR_13;

 FUNC_0(VAR_10);
 if (VAR_12->vo_sysctl_tree != ((void*)0)) {
  VAR_12->vo_sysctl_tree = ((void*)0);
  FUNC_5(&VAR_12->vo_sysctl_ctx);
 }
 if (VAR_12->vo_levels != ((void*)0)) {
  FUNC_2(VAR_12->handle, VAR_0,
      VAR_4);
  FUNC_1(VAR_12->vo_levels);
 }

 switch (VAR_12->adr & VAR_1) {
 case 129:
  VAR_13 = &VAR_5;
  break;
 case 128:
  VAR_13 = &VAR_9;
  break;
 case 131:
  VAR_13 = &VAR_6;
  break;
 case 130:
  VAR_13 = &VAR_7;
  break;
 default:
  VAR_13 = &VAR_8;
 }
 FUNC_3(VAR_13, VAR_12, VAR_3, VAR_11.next);
 FUNC_4(VAR_12, VAR_2);
}
