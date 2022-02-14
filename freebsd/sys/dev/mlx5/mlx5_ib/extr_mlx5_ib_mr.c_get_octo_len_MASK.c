
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u64 VAR_0, u64 VAR_1, int VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 VAR_3 = VAR_0 & (VAR_2 - 1);
 VAR_4 = FUNC_0(VAR_1 + VAR_3, VAR_2) >> FUNC_1(VAR_2);
 return (VAR_4 + 1) / 2;
}
