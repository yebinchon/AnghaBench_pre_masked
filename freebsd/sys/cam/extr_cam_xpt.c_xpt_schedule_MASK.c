
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct cam_periph {scalar_t__ scheduled_priority; int path; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*,int ) ;

void
FUNC_3(struct cam_periph *VAR_2, u_int32_t VAR_3)
{

 FUNC_0(VAR_2->path, VAR_0, ("xpt_schedule\n"));
 FUNC_1(VAR_2, VAR_1);
 if (VAR_3 < VAR_2->scheduled_priority) {
  VAR_2->scheduled_priority = VAR_3;
  FUNC_2(VAR_2, 0);
 }
}
