
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_7 (CORE_ADDR VAR_7)
{
  CORE_ADDR VAR_8;
  CORE_ADDR VAR_9;
  int VAR_10;
  int VAR_11 = 0;

  VAR_7 = FUNC_0 (VAR_7);
  VAR_8 = VAR_7;
  VAR_9 = VAR_8 - VAR_5;
  if (VAR_8 == 0)
    return 0;

  if (VAR_5 == VAR_3 || VAR_9 < VAR_4)
    VAR_9 = VAR_4;

  VAR_10 = FUNC_4 (VAR_7) ? VAR_0 : VAR_1;


  for (VAR_8 -= VAR_10;; VAR_8 -= VAR_10)
    if (VAR_8 < VAR_9)
      {




 if (VAR_6 == VAR_2)
   {
     static int VAR_12 = 0;

     FUNC_6
       ("Warning: GDB can't find the start of the function at 0x%s.",
        FUNC_3 (VAR_7));

     if (!VAR_12)
       {






  FUNC_5 ("\n    GDB is unable to find the start of the function at 0x%s\nand thus can't determine the size of that function's stack frame.\nThis means that GDB may be unable to access that stack frame, or\nthe frames below it.\n    This problem is most likely caused by an invalid program counter or\nstack pointer.\n    However, if you think GDB should simply search farther back\nfrom 0x%s for code which looks like the beginning of a\nfunction, you can increase the range of the search using the `set\nheuristic-fence-post' command.\n", FUNC_3 (VAR_7), FUNC_3 (VAR_7));
  VAR_12 = 1;
       }
   }

 return 0;
      }
    else if (FUNC_4 (VAR_8))
      {
 unsigned short VAR_13;







 VAR_13 = FUNC_2 (VAR_8);
 if (((VAR_13 & 0xf81f) == 0xe809 && (VAR_13 & 0x700) != 0x700)
     || (VAR_13 & 0xff80) == 0x6380
     || (VAR_13 & 0xff80) == 0xfb80
     || ((VAR_13 & 0xf810) == 0xf010 && VAR_11))
   break;
 else if ((VAR_13 & 0xff00) == 0x6300
   || (VAR_13 & 0xff00) == 0xfb00)
   VAR_11 = 1;
 else
   VAR_11 = 0;
      }
    else if (FUNC_1 (VAR_8))
      {
 VAR_8 += 2 * VAR_1;
 break;
      }

  return VAR_8;
}
