
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {uintptr_t* steps; size_t nsteps; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct path *VAR_1)
{

 VAR_1->steps[VAR_1->nsteps / VAR_0] |=
     (uintptr_t)1 << (VAR_1->nsteps % VAR_0);
 ++VAR_1->nsteps;
}
