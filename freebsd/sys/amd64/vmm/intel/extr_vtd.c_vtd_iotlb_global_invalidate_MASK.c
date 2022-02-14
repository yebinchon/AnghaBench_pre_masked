
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtdmap {int ext_cap; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ) ;
 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int volatile VAR_3 ;
 int FUNC_1 (struct vtdmap*) ;

__attribute__((used)) static void
FUNC_2(struct vtdmap *VAR_4)
{
 int VAR_5;
 volatile uint64_t *VAR_6, VAR_7;

 FUNC_1(VAR_4);

 VAR_5 = FUNC_0(VAR_4->ext_cap) * 16;
 VAR_6 = (volatile uint64_t *)((caddr_t)VAR_4 + VAR_5 + 8);

 *VAR_6 = VAR_3 | VAR_2 |
        VAR_0 | VAR_1;

 while (1) {
  VAR_7 = *VAR_6;
  if ((VAR_7 & VAR_3) == 0)
   break;
 }
}
