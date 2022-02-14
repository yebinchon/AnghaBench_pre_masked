
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;

void
FUNC_1 (bfd_size_type VAR_1)
{

  static const bfd_size_type VAR_2[] =
    {
      251, 509, 1021, 2039, 4051, 8599, 16699, 32749
    };
  size_t VAR_3;


  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_2) - 1; ++VAR_3)
    if (VAR_1 <= VAR_2[VAR_3])
      break;

  VAR_0 = VAR_2[VAR_3];
}
