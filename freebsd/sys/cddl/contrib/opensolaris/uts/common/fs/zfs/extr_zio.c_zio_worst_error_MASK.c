
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_error_rank ;






int
FUNC_0(int VAR_0, int VAR_1)
{
 static int VAR_2[] = { 0, 128, 130, 129 };
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < sizeof (VAR_2) / sizeof (int); VAR_3++)
  if (VAR_0 == VAR_2[VAR_3])
   break;

 for (VAR_4 = 0; VAR_4 < sizeof (VAR_2) / sizeof (int); VAR_4++)
  if (VAR_1 == VAR_2[VAR_4])
   break;

 return (VAR_3 > VAR_4 ? VAR_0 : VAR_1);
}
