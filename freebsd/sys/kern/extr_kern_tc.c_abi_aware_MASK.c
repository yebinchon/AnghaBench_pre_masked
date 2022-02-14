
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_state {int kcmode; int driver_abi; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct pps_state *VAR_1, int VAR_2)
{

 return ((VAR_1->kcmode & VAR_0) && VAR_1->driver_abi >= VAR_2);
}
