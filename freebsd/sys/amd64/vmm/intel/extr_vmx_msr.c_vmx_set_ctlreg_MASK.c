
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int,int) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (unsigned long,int) ;
 int FUNC_4 (unsigned long,int) ;

int
FUNC_5(int VAR_2, int VAR_3, uint32_t VAR_4,
        uint32_t VAR_5, uint32_t *VAR_6)
{
 int VAR_7;
 uint64_t VAR_8, VAR_9;
 bool VAR_10, VAR_11, VAR_12;


 if ((VAR_4 ^ VAR_5) != (VAR_4 | VAR_5))
  return (VAR_0);

 VAR_10 = (FUNC_2(VAR_1) & (1UL << 55)) != 0;

 VAR_8 = FUNC_2(VAR_2);
 if (VAR_10)
  VAR_9 = FUNC_2(VAR_3);
 else
  VAR_9 = VAR_8;

 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  VAR_11 = FUNC_3(VAR_9, VAR_7);
  VAR_12 = FUNC_4(VAR_9, VAR_7);

  FUNC_0(VAR_11 || VAR_12,
   ("invalid zero/one setting for bit %d of ctl 0x%0x, "
    "truectl 0x%0x\n", VAR_7, VAR_2, VAR_3));

  if (VAR_12 && !VAR_11) {
   if (VAR_4 & (1 << VAR_7))
    return (VAR_0);
   *VAR_6 &= ~(1 << VAR_7);
  } else if (VAR_11 && !VAR_12) {
   if (VAR_5 & (1 << VAR_7))
    return (VAR_0);
   *VAR_6 |= 1 << VAR_7;
  } else {
   if (VAR_5 & (1 << VAR_7))
    *VAR_6 &= ~(1 << VAR_7);
   else if (VAR_4 & (1 << VAR_7))
    *VAR_6 |= 1 << VAR_7;
   else if (!VAR_10)
    *VAR_6 &= ~(1 << VAR_7);
   else if (FUNC_4(VAR_8, VAR_7))
    *VAR_6 &= ~(1 << VAR_7);
   else if (FUNC_3(VAR_8, VAR_7))
    *VAR_6 |= 1 << VAR_7;
   else {
    FUNC_1("vmx_set_ctlreg: unable to determine "
          "correct value of ctl bit %d for msr "
          "0x%0x and true msr 0x%0x", VAR_7, VAR_2,
          VAR_3);
   }
  }
 }

 return (0);
}
