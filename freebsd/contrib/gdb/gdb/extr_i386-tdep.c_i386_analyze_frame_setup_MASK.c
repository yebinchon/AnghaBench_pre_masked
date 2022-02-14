
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame_cache {int sp_offset; int locals; scalar_t__* saved_regs; } ;
typedef scalar_t__ CORE_ADDR ;


 size_t VAR_0 ;
 void* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1, CORE_ADDR VAR_2,
     struct i386_frame_cache *VAR_3)
{
  unsigned char VAR_4;
  int VAR_5 = 0;

  if (VAR_2 <= VAR_1)
    return VAR_2;

  VAR_4 = FUNC_1 (VAR_1, 1);

  if (VAR_4 == 0x55)
    {


      VAR_3->saved_regs[VAR_0] = 0;
      VAR_3->sp_offset += 4;


      if (VAR_2 <= VAR_1 + 1)
 return VAR_2;

      VAR_4 = FUNC_1 (VAR_1 + 1, 1);
      while (VAR_4 == 0x29 || VAR_4 == 0x2b || VAR_4 == 0x31 || VAR_4 == 0x33)
 {
   VAR_4 = FUNC_1 (VAR_1 + VAR_5 + 2, 1);
   switch (VAR_4)
     {
     case 0xdb:
     case 0xc9:
     case 0xd2:
     case 0xc0:
       VAR_5 += 2;
       break;
     default:
       return VAR_1 + 1;
     }

   VAR_4 = FUNC_1 (VAR_1 + VAR_5 + 1, 1);
 }


      switch (VAR_4)
 {
 case 0x8b:
   if (FUNC_1 (VAR_1 + VAR_5 + 2, 1) != 0xec)
     return VAR_1 + 1;
   break;
 case 0x89:
   if (FUNC_1 (VAR_1 + VAR_5 + 2, 1) != 0xe5)
     return VAR_1 + 1;
   break;
 default:
   return VAR_1 + 1;
 }





      VAR_3->locals = 0;
      VAR_1 += VAR_5;


      if (VAR_2 <= VAR_1 + 3)
 return VAR_2;







      VAR_4 = FUNC_1 (VAR_1 + 3, 1);
      if (VAR_4 == 0x83)
 {

   if (FUNC_1 (VAR_1 + 4, 1) != 0xec)

     return VAR_1 + 3;



   VAR_3->locals = FUNC_0 (VAR_1 + 5, 1);
   return VAR_1 + 6;
 }
      else if (VAR_4 == 0x81)
 {

   if (FUNC_1 (VAR_1 + 4, 1) != 0xec)

     return VAR_1 + 3;


   VAR_3->locals = FUNC_0 (VAR_1 + 5, 4);
   return VAR_1 + 9;
 }
      else
 {

   return VAR_1 + 3;
 }
    }
  else if (VAR_4 == 0xc8)
    {
      VAR_3->locals = FUNC_1 (VAR_1 + 1, 2);
      return VAR_1 + 4;
    }

  return VAR_1;
}
