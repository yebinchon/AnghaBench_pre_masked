
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(int VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 FUNC_2(&VAR_3, VAR_6);
 VAR_5 &= VAR_2;

 if (VAR_5 & VAR_1)
  FUNC_1(FUNC_0(0xF8A) | 0x40 | 0x10, 0xF8A);
 else if (VAR_5 & VAR_0)
  FUNC_1((FUNC_0(0xF8A) | 0x40) & ~0x10, 0xF8A);
 else
  FUNC_1(FUNC_0(0xF8A) & ~0x40, 0xF8A);

 FUNC_3(&VAR_3, VAR_6);
}
