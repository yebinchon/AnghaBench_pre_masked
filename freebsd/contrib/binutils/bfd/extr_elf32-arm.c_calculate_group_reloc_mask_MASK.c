
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;



__attribute__((used)) static bfd_vma
FUNC_0 (bfd_vma VAR_0, int VAR_1, bfd_vma *VAR_2)
{
  int VAR_3;
  bfd_vma VAR_4;
  bfd_vma VAR_5 = 0;
  bfd_vma VAR_6 = VAR_0;

  for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++)
    {
      int VAR_7;


      if (VAR_6 == 0)
        VAR_7 = 0;
      else
        {
          int VAR_8;



          for (VAR_8 = 30; VAR_8 >= 0; VAR_8 -= 2)
            if (VAR_6 & (3 << VAR_8))
              break;



          VAR_7 = VAR_8 - 6;
          if (VAR_7 < 0)
            VAR_7 = 0;
        }


      VAR_4 = VAR_6 & (0xff << VAR_7);
      VAR_5 = (VAR_4 >> VAR_7)
                    | ((VAR_4 <= 0xff ? 0 : (32 - VAR_7) / 2) << 8);


      VAR_6 &= ~VAR_4;
    }

  *VAR_2 = VAR_6;

  return VAR_5;
}
