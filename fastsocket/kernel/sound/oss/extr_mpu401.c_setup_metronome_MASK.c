
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;

 VAR_2 = ((unsigned) VAR_0 >> 24) & 0xff;
 VAR_3 = ((unsigned) VAR_0 >> 16) & 0xff;
 VAR_4 = ((unsigned) VAR_0 >> 8) & 0xff;
 VAR_5 = (unsigned) VAR_0 & 0xff;
 VAR_6 = (VAR_2 * 4) >> VAR_3;

 if (!VAR_0)
  FUNC_0(VAR_1, 0x84, 0);
 else
 {
  FUNC_0(VAR_1, 0xE4, VAR_4);
  FUNC_0(VAR_1, 0xE6, VAR_6);
  FUNC_0(VAR_1, 0x83, 0);
 }
}
