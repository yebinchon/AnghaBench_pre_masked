
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(unsigned VAR_9, unsigned VAR_10, unsigned VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14 = 0;

 if (VAR_9 <= VAR_4
     && VAR_10 < VAR_8
     && VAR_11 <= VAR_5
     && (unsigned)VAR_12 <= VAR_6
     && VAR_13 != 3
     && (unsigned)VAR_13 <= 4
     && (VAR_12 & (VAR_13 - 1)) == 0) {
  switch (VAR_7) {
  case 128:
  case 130:
   FUNC_1(VAR_0, (1U << 31)
       | (VAR_9 << 16) | (VAR_10 << 11)
       | (VAR_11 << 8) | (VAR_12 & ~0x03));
   VAR_14 = VAR_1 + (VAR_12 & 0x03);
   break;
  case 129:
   FUNC_0(VAR_2, 0xf0 | (VAR_11 << 1));
   FUNC_0(VAR_3, VAR_9);
   VAR_14 = 0xc000 | (VAR_10 << 8) | VAR_12;
   break;
  }
 }
 return (VAR_14);
}
