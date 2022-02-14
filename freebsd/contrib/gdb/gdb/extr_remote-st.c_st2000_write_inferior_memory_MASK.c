
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,unsigned char) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_0, unsigned char *VAR_1, int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      FUNC_1 ("PM.B %x %x\r", VAR_0 + VAR_3, VAR_1[VAR_3]);
      FUNC_0 (1);
    }
  return VAR_2;
}
