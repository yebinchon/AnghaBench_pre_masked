
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static __inline__ void
FUNC_1(int VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, int VAR_6, int VAR_7,
    int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 unsigned int VAR_12 = 0;

 VAR_12 |= ((VAR_0 & 0xfff) << 20);
 VAR_12 |= ((VAR_1 & 0x1) << 19);
 VAR_12 |= ((VAR_2 & 0x1f) << 14);
 VAR_12 |= ((VAR_3 & 0x1) << 3);
 VAR_12 |= ((VAR_4 & 0x1) << 2);
 VAR_12 |= ((VAR_5 & 0x3) << 12);
 VAR_12 |= ((VAR_6 & 0x3) << 4);
 VAR_12 |= ((VAR_7 & 0x3) << 6);
 VAR_12 |= ((VAR_8 & 0x3) << 8);
 VAR_12 |= ((VAR_9 & 0x3) << 10);
 VAR_12 |= ((VAR_10 & 0x1) << 1);
 VAR_12 |= ((VAR_11 & 0x1) << 0);

 FUNC_0(VAR_12);
}
