
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aaci_runtime {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct aaci_runtime *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 5000;

 do {
  VAR_4 = FUNC_0(VAR_3->base + VAR_0);
 } while (VAR_4 & (VAR_2|VAR_1) && VAR_5--);
}
