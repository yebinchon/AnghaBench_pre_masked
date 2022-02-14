
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * device; struct cam_et* target; struct cam_eb* bus; } ;
struct TYPE_4__ {int position_type; scalar_t__* generations; TYPE_1__ cookie; } ;
struct ccb_dev_match {TYPE_2__ pos; int status; } ;
struct cam_et {scalar_t__ generation; struct cam_eb* bus; } ;
struct cam_ed {int refcount; } ;
struct cam_eb {int eb_mtx; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cam_et*,struct cam_ed*,int ,void*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct cam_et *VAR_6, void *VAR_7)
{
 struct ccb_dev_match *VAR_8;
 struct cam_eb *VAR_9;
 struct cam_ed *VAR_10;

 VAR_8 = (struct ccb_dev_match *)VAR_7;
 VAR_9 = VAR_6->bus;





 FUNC_0(&VAR_9->eb_mtx);
 if ((VAR_8->pos.position_type & VAR_2)
  && (VAR_8->pos.cookie.bus == VAR_9)
  && (VAR_8->pos.position_type & VAR_4)
  && (VAR_8->pos.cookie.target == VAR_6)
  && (VAR_8->pos.position_type & VAR_3)
  && (VAR_8->pos.cookie.device != ((void*)0))) {
  if (VAR_8->pos.generations[VAR_0] !=
      VAR_6->generation) {
   FUNC_1(&VAR_9->eb_mtx);
   VAR_8->status = VAR_1;
   return(0);
  }
  VAR_10 = (struct cam_ed *)VAR_8->pos.cookie.device;
  VAR_10->refcount++;
 } else
  VAR_10 = ((void*)0);
 FUNC_1(&VAR_9->eb_mtx);

 return (FUNC_2(VAR_6, VAR_10, VAR_5, VAR_7));
}
