
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u64 FUNC_0(u16 VAR_4)
{
 u32 VAR_5, VAR_6;


 VAR_5 = VAR_4 & VAR_3;
 VAR_6 = (VAR_4 & VAR_1) >> VAR_2;

 return VAR_5 * (1 << (VAR_6 * VAR_0));
}
