
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_sim {char* sim_name; int unit_number; int max_dev_openings; int max_tagged_dev_openings; } ;


 int FUNC_0 (char*,char*,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct cam_sim *VAR_0)
{

 FUNC_0("%s%d: max dev openings: %d, max tagged dev openings: %d\n",
     VAR_0->sim_name, VAR_0->unit_number, VAR_0->max_dev_openings,
     VAR_0->max_tagged_dev_openings);
}
