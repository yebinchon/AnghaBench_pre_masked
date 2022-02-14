
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wavnc_info ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(wavnc_info *VAR_2, char VAR_3, char VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_0 | 0x0800);
 VAR_6 = FUNC_0(VAR_2, VAR_0 | 0x0900);

 VAR_5 = (VAR_5 & ~0x3f) | VAR_4 << 3 | VAR_3;

 FUNC_1(VAR_2, VAR_1, VAR_5, VAR_6);
}
