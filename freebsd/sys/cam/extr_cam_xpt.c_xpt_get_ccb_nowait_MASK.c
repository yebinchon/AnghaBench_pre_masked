
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct cam_periph {TYPE_2__* path; int periph_allocated; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int ccbq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 union ccb* FUNC_1 (int,int ,int) ;

__attribute__((used)) static union ccb *
FUNC_2(struct cam_periph *VAR_3)
{
 union ccb *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0, VAR_2|VAR_1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_3->periph_allocated++;
 FUNC_0(&VAR_3->path->device->ccbq);
 return (VAR_4);
}
