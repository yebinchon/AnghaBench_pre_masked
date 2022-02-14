
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct periph_driver {scalar_t__ generation; } ;
struct TYPE_3__ {int * periph; struct periph_driver** pdrv; } ;
struct TYPE_4__ {int position_type; scalar_t__* generations; TYPE_1__ cookie; } ;
struct ccb_dev_match {TYPE_2__ pos; int status; } ;
struct cam_periph {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct periph_driver**,struct cam_periph*,int ,void*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct periph_driver **VAR_5, void *VAR_6)
{
 struct cam_periph *VAR_7;
 struct ccb_dev_match *VAR_8;

 VAR_8 = (struct ccb_dev_match *)VAR_6;

 FUNC_0();
 if ((VAR_8->pos.position_type & VAR_1)
  && (VAR_8->pos.cookie.pdrv == VAR_5)
  && (VAR_8->pos.position_type & VAR_2)
  && (VAR_8->pos.cookie.periph != ((void*)0))) {
  if (VAR_8->pos.generations[VAR_3] !=
      (*VAR_5)->generation) {
   FUNC_1();
   VAR_8->status = VAR_0;
   return(0);
  }
  VAR_7 = (struct cam_periph *)VAR_8->pos.cookie.periph;
  VAR_7->refcount++;
 } else
  VAR_7 = ((void*)0);
 FUNC_1();

 return (FUNC_2(VAR_5, VAR_7, VAR_4, VAR_6));
}
