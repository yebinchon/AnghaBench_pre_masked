
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
struct sg_softc {int device_stats; } ;
struct cam_periph {struct sg_softc* softc; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (union ccb*) ;

__attribute__((used)) static int
FUNC_2(struct cam_periph *VAR_0, union ccb *VAR_1)
{
 struct sg_softc *VAR_2;

 VAR_2 = VAR_0->softc;
 FUNC_0(VAR_2->device_stats, ((void*)0));
 FUNC_1(VAR_1);
 return (0);
}
