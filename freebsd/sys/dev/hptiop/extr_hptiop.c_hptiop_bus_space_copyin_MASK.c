
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct hpt_iop_hba {int bar0h; int bar0t; } ;


 int FUNC_0 (int ,int ,scalar_t__,unsigned char) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct hpt_iop_hba *VAR_0, u_int32_t VAR_1,
         void *VAR_2, int VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 for (VAR_5=0; VAR_5<VAR_3; VAR_5++) {
  if (FUNC_1((u_int8_t *)VAR_2 + VAR_5, &VAR_4, 1))
   return -1;
  FUNC_0(VAR_0->bar0t, VAR_0->bar0h, VAR_1 + VAR_5, VAR_4);
 }

 return 0;
}
