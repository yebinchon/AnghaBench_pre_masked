
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;
typedef int CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int* VAR_1 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2,
     unsigned VAR_3,
     int VAR_4,
     CORE_ADDR VAR_5)
{
  int VAR_6;
  if (VAR_3 < sizeof (CONTEXT))
    {
      FUNC_0 ("Core file register section too small (%u bytes).", VAR_3);
      return;
    }
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    FUNC_1 (VAR_6, VAR_2 + VAR_1[VAR_6]);
}
