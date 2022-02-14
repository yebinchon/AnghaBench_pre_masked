
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {unsigned long step; unsigned long mask; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline unsigned long
FUNC_0(struct ck_hs_map *VAR_3,
    unsigned long VAR_4,
    unsigned long VAR_5,
    unsigned long VAR_6,
    unsigned long VAR_7)
{
 unsigned long VAR_8, VAR_9;

 VAR_8 = (VAR_5 >> VAR_3->step) >> VAR_6;
 VAR_9 = (VAR_8 & ~VAR_1) << 1 | (VAR_8 & VAR_1);

 return (VAR_4 + (VAR_7 >> VAR_2) +
     (VAR_9 | VAR_0)) & VAR_3->mask;
}
