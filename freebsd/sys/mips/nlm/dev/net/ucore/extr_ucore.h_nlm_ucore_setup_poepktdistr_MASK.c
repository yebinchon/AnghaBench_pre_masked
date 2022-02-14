
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static __inline__ void
FUNC_1(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 unsigned int VAR_5 = 0;

 VAR_5 |= ((VAR_4 & 0x1) << 20);
 VAR_5 |= ((VAR_3 & 0xfff) << 8);
 VAR_5 |= ((VAR_2 & 0xf) << 4);
 VAR_5 |= ((VAR_1 & 0x1) << 3);
 VAR_5 |= (VAR_0 & 0x7);

 FUNC_0(VAR_5);
}
