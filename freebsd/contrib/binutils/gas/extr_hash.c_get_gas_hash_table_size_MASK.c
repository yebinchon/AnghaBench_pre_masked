
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long const*) ;
 unsigned long const VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_1 (void)
{

  static const unsigned long VAR_1[] =
    {
      1021, 4051, 8599, 16699, 65537
    };
  unsigned int VAR_2;




  for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_1) - 1; ++VAR_2)
    if (VAR_0 <= VAR_1[VAR_2])
      break;

  return VAR_1[VAR_2];
}
