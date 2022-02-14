
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, int VAR_1, int VAR_2, int VAR_3,
      int VAR_4)
{
 int VAR_5 = VAR_1 * VAR_2 / 100;
 int VAR_6 = VAR_0 * VAR_2 / 100;


 if (VAR_3 & 0x10)
   {
    VAR_5 |= VAR_4;
    VAR_6 |= VAR_4;
   }
 if (VAR_3 == 0x03 || VAR_3 == 0x04)
   {
    FUNC_0(0x80 | VAR_3, 0x078B);
    FUNC_0(VAR_5, 0x078B);
    VAR_0 = VAR_1;
 } else
   {
    FUNC_0(0x80 | 0x20 | VAR_3, 0x078B);
    FUNC_0(VAR_5, 0x078B);
    FUNC_0(0x80 | 0x40 | VAR_3, 0x078B);
    FUNC_0(VAR_6, 0x078B);
   }

 return (VAR_1 | (VAR_0 << 8));
}
