
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_ccbq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cam_ccbq*,int) ;
 int FUNC_1 (struct cam_ccbq*,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;

struct cam_ccbq *
FUNC_4(int VAR_2)
{
 struct cam_ccbq *VAR_3;

 VAR_3 = (struct cam_ccbq *)FUNC_2(sizeof(*VAR_3), VAR_0, VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_3("cam_ccbq_alloc: - cannot malloc!\n");
  return (((void*)0));
 }
 if (FUNC_0(VAR_3, VAR_2) != 0) {
  FUNC_1(VAR_3, VAR_0);
  return (((void*)0));
 }

 return (VAR_3);
}
