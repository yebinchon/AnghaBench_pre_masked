
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct periph_driver {int dummy; } ;
struct TYPE_4__ {int * pdrv; } ;
struct TYPE_3__ {int position_type; TYPE_2__ cookie; } ;
struct ccb_dev_match {int status; TYPE_1__ pos; scalar_t__ num_matches; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct periph_driver**,int ,struct ccb_dev_match*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct ccb_dev_match *VAR_3)
{
 int VAR_4;

 VAR_3->num_matches = 0;
 if ((VAR_3->pos.position_type & VAR_1)
  && (VAR_3->pos.cookie.pdrv != ((void*)0)))
  VAR_4 = FUNC_0(
    (struct periph_driver **)VAR_3->pos.cookie.pdrv,
    VAR_2, VAR_3);
 else
  VAR_4 = FUNC_0(((void*)0), VAR_2, VAR_3);
 if (VAR_4 == 1)
  VAR_3->status = VAR_0;

 return(VAR_4);
}
