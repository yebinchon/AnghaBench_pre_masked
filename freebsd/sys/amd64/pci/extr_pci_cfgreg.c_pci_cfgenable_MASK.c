
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int
FUNC_1(unsigned VAR_6, unsigned VAR_7, unsigned VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11 = 0;

 if (VAR_6 <= VAR_2 && VAR_7 <= VAR_5 && VAR_8 <= VAR_3 &&
     (unsigned)VAR_9 <= VAR_4 && VAR_10 != 3 &&
     (unsigned)VAR_10 <= 4 && (VAR_9 & (VAR_10 - 1)) == 0) {
  FUNC_0(VAR_0, (1U << 31) | (VAR_6 << 16) | (VAR_7 << 11)
      | (VAR_8 << 8) | (VAR_9 & ~0x03));
  VAR_11 = VAR_1 + (VAR_9 & 0x03);
 }
 return (VAR_11);
}
