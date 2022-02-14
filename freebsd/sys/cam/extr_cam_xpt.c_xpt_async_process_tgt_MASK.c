
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ async_code; } ;
struct TYPE_3__ {struct cam_path* path; } ;
union ccb {TYPE_2__ casync; TYPE_1__ ccb_h; } ;
struct cam_path {struct cam_et* target; } ;
struct cam_et {scalar_t__ target_id; int last_reset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct cam_et*,int *,int ,union ccb*) ;

__attribute__((used)) static int
FUNC_2(struct cam_et *VAR_3, void *VAR_4)
{
 union ccb *VAR_5 = VAR_4;
 struct cam_path *VAR_6 = VAR_5->ccb_h.path;

 if (VAR_6->target != VAR_3
  && VAR_6->target->target_id != VAR_1
  && VAR_3->target_id != VAR_1)
  return (1);

 if (VAR_5->casync.async_code == VAR_0) {

  FUNC_0(&VAR_3->last_reset);
 }

 return (FUNC_1(VAR_3, ((void*)0), VAR_2, VAR_5));
}
