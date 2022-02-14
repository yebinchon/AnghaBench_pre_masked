
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;

int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_2 += FUNC_3(" at channel %d",
     (int)(intptr_t)FUNC_2(VAR_1));
 VAR_2 += FUNC_0(VAR_0, VAR_1);

 return (VAR_2);
}
