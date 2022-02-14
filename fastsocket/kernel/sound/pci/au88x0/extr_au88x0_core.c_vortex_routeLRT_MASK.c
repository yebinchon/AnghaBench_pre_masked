
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vortex_t ;
typedef unsigned char ADBRamLink ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int *,unsigned char,unsigned char*,int) ;
 int FUNC_1 (int *,unsigned char,unsigned char,unsigned char) ;
 int FUNC_2 (int *,unsigned char,unsigned char) ;
 int FUNC_3 (int *,unsigned char,unsigned char) ;
 int FUNC_4 (int *,unsigned char,unsigned char) ;
 int FUNC_5 (int *,unsigned char,unsigned char) ;

__attribute__((used)) static void
FUNC_6(vortex_t * VAR_6, int VAR_7, unsigned char VAR_8,
  unsigned char VAR_9, unsigned char VAR_10,
  unsigned char VAR_11)
{
 ADBRamLink VAR_12[2];

 VAR_12[0] = ((VAR_9 & VAR_0) << VAR_1) | (VAR_11 & VAR_0);
 VAR_12[1] = ((VAR_10 & VAR_0) << VAR_1) | (VAR_11 & VAR_0);

 if (VAR_11 < 0x10)
  VAR_12[1] = (VAR_12[1] & ~VAR_0) | (VAR_11 + 0x20);

 if (VAR_7) {
  FUNC_0(VAR_6, VAR_8, VAR_12, 2);
  if ((VAR_9 < (VAR_5 + VAR_3))
      && (VAR_9 >= VAR_5)) {
   FUNC_4(VAR_6,
       (VAR_9 - VAR_5), VAR_8);
   FUNC_4(VAR_6,
       (VAR_10 - VAR_5), VAR_8);
  } else if ((VAR_9 < (VAR_4 + VAR_2))
      && (VAR_9 >= VAR_4)) {
   FUNC_2(VAR_6,
         (VAR_9 - VAR_4), VAR_8);
   FUNC_2(VAR_6,
         (VAR_10 - VAR_4), VAR_8);
  }
 } else {
  FUNC_1(VAR_6, VAR_8, VAR_12[0], VAR_12[1]);
  if ((VAR_9 < (VAR_5 + VAR_3))
      && (VAR_9 >= VAR_5)) {
   FUNC_5(VAR_6,
       (VAR_9 - VAR_5), VAR_8);
   FUNC_5(VAR_6,
       (VAR_10 - VAR_5), VAR_8);
  } else if ((VAR_9 < (VAR_4 + VAR_2))
      && (VAR_9 >= VAR_4)) {
   FUNC_3(VAR_6,
         (VAR_9 - VAR_4), VAR_8);
   FUNC_3(VAR_6,
         (VAR_10 - VAR_4), VAR_8);
  }
 }
}
