
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ addr ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_1, char *VAR_2)
{
  int VAR_3, VAR_4;
  unsigned char *VAR_5, VAR_6[VAR_0];

  VAR_5 = VAR_6;
  *VAR_5++ = 17;
  *VAR_5++ = 0;
  *VAR_5++ = (int) (VAR_1 >> 24) & 0xff;
  *VAR_5++ = (int) (VAR_1 >> 16) & 0xff;
  *VAR_5++ = (int) (VAR_1 >> 8) & 0xff;
  *VAR_5++ = (int) (VAR_1) & 0xff;
  for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
    *VAR_5++ = VAR_2[VAR_3];

  VAR_4 = FUNC_0 (VAR_6, VAR_5 - VAR_6);

  return 0;
}
