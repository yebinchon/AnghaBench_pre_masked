
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,scalar_t__*,int *) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, u_long VAR_2, u_long VAR_3)
{
 rman_res_t VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0;; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_6, &VAR_4, ((void*)0));
  if (VAR_5 != 0 || (VAR_2 <= VAR_4 && VAR_4 <= VAR_3))
   return (VAR_6);
 }
}
