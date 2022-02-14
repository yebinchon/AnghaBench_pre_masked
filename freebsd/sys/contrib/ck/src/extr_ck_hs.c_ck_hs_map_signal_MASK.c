
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {scalar_t__* generation; } ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct ck_hs_map *VAR_1, unsigned long VAR_2)
{

 VAR_2 &= VAR_0;
 FUNC_1(&VAR_1->generation[VAR_2],
     VAR_1->generation[VAR_2] + 1);
 FUNC_0();
 return;
}
