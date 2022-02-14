
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,unsigned char*,int) ;

unsigned long
FUNC_1 (CORE_ADDR VAR_0)
{
  unsigned char VAR_1[4];
  unsigned long VAR_2;
  int VAR_3;


  if (FUNC_0 (VAR_0, VAR_1, sizeof (VAR_1)))
    return 0;

  VAR_2 = 0;
  for (VAR_3 = 0; VAR_3 < sizeof (VAR_1); VAR_3++)
    VAR_2 = (VAR_2 << 8) | VAR_1[VAR_3];
  return VAR_2;
}
