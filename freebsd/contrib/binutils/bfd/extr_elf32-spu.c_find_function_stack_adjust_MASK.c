
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int reg ;
typedef scalar_t__ bfd_vma ;
struct TYPE_4__ {scalar_t__ size; int owner; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (int ,TYPE_1__*,unsigned char*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_3 (asection *VAR_0, bfd_vma VAR_1)
{
  int VAR_2;
  int VAR_3[128];

  FUNC_2 (VAR_3, 0, sizeof (VAR_3));
  for (VAR_2 = 0; VAR_1 + 4 <= VAR_0->size && VAR_2 < 32; VAR_1 += 4)
    {
      unsigned char VAR_4[4];
      int VAR_5, VAR_6;
      int VAR_7;


      if (!FUNC_0 (VAR_0->owner, VAR_0, VAR_4, VAR_1, 4))
 break;

      if (VAR_4[0] == 0x24 )
 continue;

      VAR_5 = VAR_4[3] & 0x7f;
      VAR_6 = ((VAR_4[2] & 0x3f) << 1) | (VAR_4[3] >> 7);

      VAR_7 = (VAR_4[1] << 9) | (VAR_4[2] << 1) | (VAR_4[3] >> 7);

      if (VAR_4[0] == 0x1c )
 {
   VAR_7 >>= 7;
   VAR_7 = (VAR_7 ^ 0x200) - 0x200;
   VAR_3[VAR_5] = VAR_3[VAR_6] + VAR_7;

   if (VAR_5 == 1 )
     {
       if (VAR_7 > 0)
  break;
       return VAR_3[VAR_5];
     }
 }
      else if (VAR_4[0] == 0x18 && (VAR_4[1] & 0xe0) == 0 )
 {
   int VAR_8 = ((VAR_4[1] & 0x1f) << 2) | ((VAR_4[2] & 0xc0) >> 6);

   VAR_3[VAR_5] = VAR_3[VAR_6] + VAR_3[VAR_8];
   if (VAR_5 == 1)
     return VAR_3[VAR_5];
 }
      else if ((VAR_4[0] & 0xfc) == 0x40 )
 {
   if (VAR_4[0] >= 0x42 )
     VAR_7 |= (VAR_4[0] & 1) << 17;
   else
     {
       VAR_7 &= 0xffff;

       if (VAR_4[0] == 0x40 )
  {
    if ((VAR_4[1] & 0x80) == 0)
      goto unknown_insn;
    VAR_7 = (VAR_7 ^ 0x8000) - 0x8000;
  }
       else if ((VAR_4[1] & 0x80) == 0 )
  VAR_7 <<= 16;
     }
   VAR_3[VAR_5] = VAR_7;
   continue;
 }
      else if (VAR_4[0] == 0x60 && (VAR_4[1] & 0x80) != 0 )
 {
   VAR_3[VAR_5] |= VAR_7 & 0xffff;
   continue;
 }
      else if (VAR_4[0] == 0x04 )
 {
   VAR_7 >>= 7;
   VAR_7 = (VAR_7 ^ 0x200) - 0x200;
   VAR_3[VAR_5] = VAR_3[VAR_6] | VAR_7;
   continue;
 }
      else if ((VAR_4[0] == 0x33 && VAR_7 == 1 )
        || (VAR_4[0] == 0x08 && (VAR_4[1] & 0xe0) == 0 ))
 {

   VAR_3[VAR_5] = 0;
   continue;
 }
      else if (FUNC_1 (VAR_4))

 break;
    unknown_insn:
      ++VAR_2;
    }

  return 0;
}
