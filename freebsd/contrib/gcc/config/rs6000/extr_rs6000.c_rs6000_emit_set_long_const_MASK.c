
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static rtx
FUNC_5 (rtx VAR_3, HOST_WIDE_INT VAR_4, HOST_WIDE_INT VAR_5)
{
  if (!VAR_1)
    {
      rtx VAR_6, VAR_7;

      VAR_6 = FUNC_4 (VAR_3, VAR_2 == 0,
     VAR_0);
      VAR_7 = FUNC_4 (VAR_3, VAR_2 != 0,
     VAR_0);
      FUNC_1 (VAR_6, FUNC_0 (VAR_4));
      FUNC_1 (VAR_7, FUNC_0 (VAR_5));
    }
  else
    {
      HOST_WIDE_INT VAR_8, VAR_9, VAR_10, VAR_11;

      VAR_8 = VAR_4 & 0xffff;
      VAR_9 = (VAR_4 & 0xffff0000) >> 16;



      VAR_10 = VAR_5 & 0xffff;
      VAR_11 = (VAR_5 & 0xffff0000) >> 16;

      if ((VAR_11 == 0xffff && VAR_10 == 0xffff && VAR_9 == 0xffff && (VAR_8 & 0x8000))
   || (VAR_11 == 0 && VAR_10 == 0 && VAR_9 == 0 && ! (VAR_8 & 0x8000)))
 {
   if (VAR_8 & 0x8000)
     FUNC_1 (VAR_3, FUNC_0 (((VAR_8 ^ 0x8000) - 0x8000)));
   else
     FUNC_1 (VAR_3, FUNC_0 (VAR_8));
 }

      else if ((VAR_11 == 0xffff && VAR_10 == 0xffff && (VAR_9 & 0x8000))
        || (VAR_11 == 0 && VAR_10 == 0 && ! (VAR_9 & 0x8000)))
 {
   if (VAR_9 & 0x8000)
     FUNC_1 (VAR_3, FUNC_0 (((VAR_9 << 16) ^ 0x80000000)
        - 0x80000000));
   else
     FUNC_1 (VAR_3, FUNC_0 (VAR_9 << 16));
   if (VAR_8 != 0)
     FUNC_1 (VAR_3, FUNC_3 (VAR_0, VAR_3, FUNC_0 (VAR_8)));
 }
      else if ((VAR_11 == 0xffff && (VAR_10 & 0x8000))
        || (VAR_11 == 0 && ! (VAR_10 & 0x8000)))
 {
   if (VAR_10 & 0x8000)
     FUNC_1 (VAR_3, FUNC_0 (((VAR_10 << 16) ^ 0x80000000)
        - 0x80000000));
   else
     FUNC_1 (VAR_3, FUNC_0 (VAR_10 << 16));

   if (VAR_9 != 0)
     FUNC_1 (VAR_3, FUNC_3 (VAR_0, VAR_3, FUNC_0 (VAR_9)));
   FUNC_1 (VAR_3, FUNC_2 (VAR_0, VAR_3, FUNC_0 (16)));
   if (VAR_8 != 0)
     FUNC_1 (VAR_3, FUNC_3 (VAR_0, VAR_3, FUNC_0 (VAR_8)));
 }
      else
 {
   if (VAR_11 & 0x8000)
     FUNC_1 (VAR_3, FUNC_0 (((VAR_11 << 16) ^ 0x80000000)
        - 0x80000000));
   else
     FUNC_1 (VAR_3, FUNC_0 (VAR_11 << 16));

   if (VAR_10 != 0)
     FUNC_1 (VAR_3, FUNC_3 (VAR_0, VAR_3, FUNC_0 (VAR_10)));

   FUNC_1 (VAR_3, FUNC_2 (VAR_0, VAR_3, FUNC_0 (32)));
   if (VAR_9 != 0)
     FUNC_1 (VAR_3, FUNC_3 (VAR_0, VAR_3,
            FUNC_0 (VAR_9 << 16)));
   if (VAR_8 != 0)
     FUNC_1 (VAR_3, FUNC_3 (VAR_0, VAR_3, FUNC_0 (VAR_8)));
 }
    }
  return VAR_3;
}
