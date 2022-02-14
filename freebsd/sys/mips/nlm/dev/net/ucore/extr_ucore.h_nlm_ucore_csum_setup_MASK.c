
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static __inline__ void
FUNC_1(int VAR_0, int VAR_1)
{
 unsigned int VAR_2 = 0;

 VAR_2 |= ((VAR_1 & 0xff) << 8);
 VAR_2 |= (VAR_1 & 0xff);
 FUNC_0(VAR_2);
}
