
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;

int
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;
 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5));
}
