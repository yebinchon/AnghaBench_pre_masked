
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cam_periph*,int ) ;
 struct mtx* FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;

void
FUNC_5(struct cam_periph *VAR_1)
{
 struct mtx *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1, VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(VAR_2);
 FUNC_2(VAR_1);
 FUNC_4(VAR_2);
}
