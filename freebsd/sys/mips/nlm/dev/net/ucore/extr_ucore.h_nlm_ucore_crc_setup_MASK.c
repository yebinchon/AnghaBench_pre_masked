
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static __inline__ void
FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 unsigned int VAR_9 = 0;

 VAR_9 |= ((VAR_2 & 0x1) << 20);
 VAR_9 |= ((VAR_3 & 0x1) << 19);
 VAR_9 |= ((VAR_4 & 0x1) << 18);
 VAR_9 |= ((VAR_1 & 0x1) << 16);
 VAR_9 |= (VAR_0 & 0xffff);

 FUNC_1(VAR_9);

 VAR_9 = 0;
 VAR_9 |= ((VAR_5 & 0x3f) << 25);
 VAR_9 |= ((VAR_6 & 0x1) << 24);
 VAR_9 |= ((VAR_8 & 0xffff) << 8);
 VAR_9 |= (VAR_7 & 0xff);

 FUNC_0(VAR_9);
}
