
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(void *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 uint8_t *VAR_4 = VAR_1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (FUNC_0(VAR_4 + VAR_5 *
      VAR_0, VAR_2 + VAR_5) < 0) {
   FUNC_1("SD Card: block read %u failed\n", VAR_5);
   return (-1);
  }
 }
 return (0);
}
