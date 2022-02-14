
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * bus; } ;
struct TYPE_5__ {int position_type; scalar_t__* generations; TYPE_1__ cookie; } ;
struct ccb_dev_match {int status; TYPE_2__ pos; scalar_t__ num_matches; } ;
struct cam_eb {int refcount; } ;
struct TYPE_6__ {scalar_t__ bus_generation; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct cam_eb*,int ,struct ccb_dev_match*) ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct ccb_dev_match *VAR_6)
{
 struct cam_eb *VAR_7;
 int VAR_8;

 VAR_6->num_matches = 0;





 FUNC_0();
 if ((VAR_6->pos.position_type & VAR_3)
  && (VAR_6->pos.cookie.bus != ((void*)0))) {
  if (VAR_6->pos.generations[VAR_0] !=
      VAR_5.bus_generation) {
   FUNC_1();
   VAR_6->status = VAR_2;
   return(0);
  }
  VAR_7 = (struct cam_eb *)VAR_6->pos.cookie.bus;
  VAR_7->refcount++;
 } else
  VAR_7 = ((void*)0);
 FUNC_1();

 VAR_8 = FUNC_2(VAR_7, VAR_4, VAR_6);







 if (VAR_8 == 1)
  VAR_6->status = VAR_1;

 return(VAR_8);
}
