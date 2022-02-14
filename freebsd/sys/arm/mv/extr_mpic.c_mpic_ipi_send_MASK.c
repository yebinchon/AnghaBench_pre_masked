
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
typedef int cpuset_t ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;

void
FUNC_2(device_t VAR_3, struct intr_irqsrc *VAR_4, cpuset_t VAR_5, u_int VAR_6)
{
 uint32_t VAR_7, VAR_8;

 VAR_7 = 0x00000000;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  if (FUNC_0(VAR_8, &VAR_5))
   VAR_7 |= (1 << (8 + VAR_8));
 VAR_7 |= VAR_6;
 FUNC_1(VAR_2, VAR_1, VAR_7);
}
