
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, char * VAR_1, int VAR_2, int *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = 0;
 while (VAR_2) {

  *VAR_1++ = (char)FUNC_0(VAR_0, (VAR_2 == 1) ? VAR_4 : 0, VAR_5);

  VAR_6 ++;
  VAR_2 --;
 }

 *VAR_3 = VAR_6;
 return (0);
}
