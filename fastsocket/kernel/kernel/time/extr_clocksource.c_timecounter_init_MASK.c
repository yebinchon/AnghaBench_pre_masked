
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timecounter {int nsec; int cycle_last; struct cyclecounter const* cc; } ;
struct cyclecounter {int (* read ) (struct cyclecounter const*) ;} ;


 int FUNC_0 (struct cyclecounter const*) ;

void FUNC_1(struct timecounter *VAR_0,
        const struct cyclecounter *VAR_1,
        u64 VAR_2)
{
 VAR_0->cc = VAR_1;
 VAR_0->cycle_last = VAR_1->read(VAR_1);
 VAR_0->nsec = VAR_2;
}
