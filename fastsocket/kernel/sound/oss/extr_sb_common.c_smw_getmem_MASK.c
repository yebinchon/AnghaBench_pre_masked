
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sb_devc ;


 unsigned char FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_4(sb_devc * VAR_1, int VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 unsigned char VAR_5;

 FUNC_2(&VAR_0, VAR_4);

 FUNC_1((VAR_3 & 0xff), VAR_2 + 1);
 FUNC_1((VAR_3 >> 8), VAR_2 + 2);
 VAR_5 = FUNC_0(VAR_2);

 FUNC_3(&VAR_0, VAR_4);
 return VAR_5;
}
