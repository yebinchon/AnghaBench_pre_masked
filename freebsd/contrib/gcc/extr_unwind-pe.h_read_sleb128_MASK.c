
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int result ;
typedef int _Unwind_Word ;
typedef scalar_t__ _Unwind_Sword ;



__attribute__((used)) static const unsigned char *
FUNC_0 (const unsigned char *VAR_0, _Unwind_Sword *VAR_1)
{
  unsigned int VAR_2 = 0;
  unsigned char VAR_3;
  _Unwind_Word VAR_4;

  VAR_4 = 0;
  do
    {
      VAR_3 = *VAR_0++;
      VAR_4 |= ((_Unwind_Word)VAR_3 & 0x7f) << VAR_2;
      VAR_2 += 7;
    }
  while (VAR_3 & 0x80);


  if (VAR_2 < 8 * sizeof(VAR_4) && (VAR_3 & 0x40) != 0)
    VAR_4 |= -(((_Unwind_Word)1L) << VAR_2);

  *VAR_1 = (_Unwind_Sword) VAR_4;
  return VAR_0;
}
