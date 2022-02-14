
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timeval {scalar_t__ tv_sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct timeval*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint8_t *VAR_3)
{
 struct timeval VAR_4, VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5);
 VAR_5.tv_sec += 3;
 do {
  FUNC_1(&VAR_4);
  if (VAR_4.tv_sec > VAR_5.tv_sec)
   VAR_6 = VAR_0;
  else
   VAR_6 = FUNC_0(VAR_2, VAR_3);
 } while (VAR_6 == 0 && !(*VAR_3 & VAR_1));
 return (VAR_6);
}
