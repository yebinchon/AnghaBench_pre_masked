
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char,unsigned char) ;
 unsigned char VAR_0 ;
 unsigned char** VAR_1 ;

__attribute__((used)) static inline int FUNC_1(unsigned char *VAR_2, const unsigned char VAR_3,
         const unsigned char VAR_4)
{
 int VAR_5;

 VAR_5 = ((VAR_3 - 0xFA) * (0xFD - 0x40)) + (VAR_4 - 0x40);
 if (FUNC_0(VAR_1[VAR_5][0],
    VAR_1[VAR_5][1])) {
  VAR_2[0] = VAR_1[VAR_5][0];
  VAR_2[1] = VAR_1[VAR_5][1];
  return 2;
 } else {
  VAR_2[0] = VAR_0;
  VAR_2[1] = VAR_1[VAR_5][0];
  VAR_2[2] = VAR_1[VAR_5][1];
  return 3;
 }
}
