
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lio {int ifstate; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void
FUNC_2(struct lio *VAR_0, int VAR_1)
{

 FUNC_1(&VAR_0->ifstate,
        (FUNC_0(&VAR_0->ifstate) | VAR_1));
}
