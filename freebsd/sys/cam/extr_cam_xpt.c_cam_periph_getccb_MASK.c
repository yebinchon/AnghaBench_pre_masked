
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef scalar_t__ u_int32_t ;
struct TYPE_3__ {scalar_t__ priority; } ;
struct ccb_hdr {TYPE_1__ pinfo; } ;
struct cam_periph {scalar_t__ immediate_priority; int ccb_list; int path; } ;
struct TYPE_4__ {int sle; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ccb_hdr* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct cam_periph*,int ) ;
 int FUNC_4 (struct cam_periph*,int *,int ,char*,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (struct cam_periph*,int ) ;

union ccb *
FUNC_6(struct cam_periph *VAR_4, u_int32_t VAR_5)
{
 struct ccb_hdr *VAR_6;

 FUNC_0(VAR_4->path, VAR_0, ("cam_periph_getccb\n"));
 FUNC_3(VAR_4, VAR_1);
 while ((VAR_6 = FUNC_1(&VAR_4->ccb_list)) == ((void*)0) ||
     VAR_6->pinfo.priority != VAR_5) {
  if (VAR_5 < VAR_4->immediate_priority) {
   VAR_4->immediate_priority = VAR_5;
   FUNC_5(VAR_4, 0);
  } else
   FUNC_4(VAR_4, &VAR_4->ccb_list, VAR_2,
       "cgticb", 0);
 }
 FUNC_2(&VAR_4->ccb_list, VAR_3.sle);
 return ((union ccb *)VAR_6);
}
