
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_5;
 if (VAR_8 & VAR_0)
  VAR_9 |= VAR_4;
 if (VAR_8 & VAR_2)
  VAR_9 |= VAR_3;

 if (VAR_9 != 0 && VAR_6)
  FUNC_0(VAR_7, "error = %d, status = %#x\n", VAR_9, VAR_8);

 return (VAR_9);
}
