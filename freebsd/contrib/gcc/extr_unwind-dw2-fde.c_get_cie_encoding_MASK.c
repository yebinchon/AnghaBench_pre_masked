
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_cie {unsigned char* augmentation; int version; } ;
typedef int _Unwind_Word ;
typedef int _Unwind_Sword ;
typedef int _Unwind_Ptr ;


 int VAR_0 ;
 unsigned char* FUNC_0 (unsigned char const,int ,unsigned char const*,int *) ;
 unsigned char* FUNC_1 (unsigned char const*,int *) ;
 unsigned char* FUNC_2 (unsigned char const*,int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4 (const struct dwarf_cie *VAR_1)
{
  const unsigned char *VAR_2, *VAR_3;
  _Unwind_Ptr VAR_4;
  _Unwind_Word VAR_5;
  _Unwind_Sword VAR_6;

  VAR_2 = VAR_1->augmentation;
  if (VAR_2[0] != 'z')
    return VAR_0;

  VAR_3 = VAR_2 + FUNC_3 ((const char *)VAR_2) + 1;
  VAR_3 = FUNC_2 (VAR_3, &VAR_5);
  VAR_3 = FUNC_1 (VAR_3, &VAR_6);
  if (VAR_1->version == 1)
    VAR_3++;
  else
    VAR_3 = FUNC_2 (VAR_3, &VAR_5);

  VAR_2++;
  VAR_3 = FUNC_2 (VAR_3, &VAR_5);
  while (1)
    {

      if (*VAR_2 == 'R')
 return *VAR_3;

      else if (*VAR_2 == 'P')
 {



   VAR_3 = FUNC_0 (*VAR_3 & 0x7F, 0, VAR_3 + 1, &VAR_4);
 }

      else if (*VAR_2 == 'L')
 VAR_3++;

      else
 return VAR_0;
      VAR_2++;
    }
}
