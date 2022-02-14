
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hast_resource {int hr_ggateunit; int hr_provname; int hr_ggatefd; } ;
struct g_gate_ctl_destroy {int gctl_unit; int gctl_force; int gctl_version; } ;
typedef int ggiod ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_gate_ctl_destroy*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct g_gate_ctl_destroy*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct hast_resource *VAR_4)
{
 int VAR_5;


 VAR_5 = VAR_3;


 if (VAR_4->hr_ggateunit >= 0) {
  struct g_gate_ctl_destroy VAR_6;

  FUNC_0(&VAR_6, sizeof(VAR_6));
  VAR_6.gctl_version = VAR_1;
  VAR_6.gctl_unit = VAR_4->hr_ggateunit;
  VAR_6.gctl_force = 1;
  if (FUNC_1(VAR_4->hr_ggatefd, VAR_0, &VAR_6) == -1) {
   FUNC_2(VAR_2,
       "Unable to destroy hast/%s device",
       VAR_4->hr_provname);
  }
  VAR_4->hr_ggateunit = -1;
 }


 VAR_3 = VAR_5;
}
