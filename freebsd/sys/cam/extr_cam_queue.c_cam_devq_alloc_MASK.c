
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_devq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cam_devq*,int,int) ;
 int FUNC_1 (struct cam_devq*,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;

struct cam_devq *
FUNC_4(int VAR_2, int VAR_3)
{
 struct cam_devq *VAR_4;

 VAR_4 = (struct cam_devq *)FUNC_2(sizeof(*VAR_4), VAR_0, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_3("cam_devq_alloc: - cannot malloc!\n");
  return (((void*)0));
 }
 if (FUNC_0(VAR_4, VAR_2, VAR_3) != 0) {
  FUNC_1(VAR_4, VAR_0);
  return (((void*)0));
 }
 return (VAR_4);
}
