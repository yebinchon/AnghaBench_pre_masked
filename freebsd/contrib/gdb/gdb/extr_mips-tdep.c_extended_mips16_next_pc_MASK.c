
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upk_mips16 {int offset; int regx; unsigned int regy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int,unsigned int,unsigned int,int ,struct upk_mips16*) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (CORE_ADDR VAR_4,
    unsigned int VAR_5, unsigned int VAR_6)
{
  int VAR_7 = (VAR_6 >> 11);
  switch (VAR_7)
    {
    case 2:
      {
 CORE_ADDR VAR_8;
 struct upk_mips16 VAR_9;
 FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_1, &VAR_9);
 VAR_8 = VAR_9.offset;
 if (VAR_8 & 0x800)
   {
     VAR_8 &= 0xeff;
     VAR_8 = -VAR_8;
   }
 VAR_4 += (VAR_8 << 1) + 2;
 break;
      }
    case 3:
      {
 struct upk_mips16 VAR_10;
 FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_2, &VAR_10);
 VAR_4 = FUNC_0 (VAR_4, VAR_10.offset);
 if ((VAR_6 >> 10) & 0x01)
   VAR_4 = VAR_4 & ~0x01;
 else
   VAR_4 |= 0x01;
 break;
      }
    case 4:
      {
 struct upk_mips16 VAR_11;
 int VAR_12;
 FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_3, &VAR_11);
 VAR_12 = FUNC_2 (VAR_11.regx);
 if (VAR_12 == 0)
   VAR_4 += (VAR_11.offset << 1) + 2;
 else
   VAR_4 += 2;
 break;
      }
    case 5:
      {
 struct upk_mips16 VAR_13;
 int VAR_14;
 FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_3, &VAR_13);
 VAR_14 = FUNC_2 (VAR_13.regx);
 if (VAR_14 != 0)
   VAR_4 += (VAR_13.offset << 1) + 2;
 else
   VAR_4 += 2;
 break;
      }
    case 12:
      {
 struct upk_mips16 VAR_15;
 int VAR_16;
 FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_0, &VAR_15);

 VAR_16 = FUNC_2 (24);
 if (((VAR_15.regx == 0) && (VAR_16 == 0))
     || ((VAR_15.regx == 1) && (VAR_16 != 0)))

   VAR_4 += (VAR_15.offset << 1) + 2;
 else
   VAR_4 += 2;
 break;
      }
    case 29:
      {
 struct upk_mips16 VAR_17;

 VAR_7 = VAR_6 & 0x1f;
 if (VAR_7 == 0)
   {
     int VAR_18;
     VAR_17.regx = (VAR_6 >> 8) & 0x07;
     VAR_17.regy = (VAR_6 >> 5) & 0x07;
     switch (VAR_17.regy)
       {
       case 0:
  VAR_18 = VAR_17.regx;
  break;
       case 1:
  VAR_18 = 31;
  break;
       case 2:
  VAR_18 = VAR_17.regx;
  break;
       default:
  VAR_18 = 31;
  break;
       }
     VAR_4 = FUNC_2 (VAR_18);
   }
 else
   VAR_4 += 2;
 break;
      }
    case 30:



      {
 VAR_4 += 2;
 VAR_4 = FUNC_4 (VAR_4, VAR_6, FUNC_1 (VAR_4));
 break;
      }
    default:
      {
 VAR_4 += 2;
 break;
      }
    }
  return VAR_4;
}
