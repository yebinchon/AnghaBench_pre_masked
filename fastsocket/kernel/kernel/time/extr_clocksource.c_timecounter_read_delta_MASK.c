
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct timecounter {int cycle_last; TYPE_1__* cc; } ;
typedef int cycle_t ;
struct TYPE_3__ {int (* read ) (TYPE_1__*) ;int mask; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static u64 FUNC_2(struct timecounter *VAR_0)
{
 cycle_t VAR_1, VAR_2;
 u64 VAR_3;


 VAR_1 = VAR_0->cc->read(VAR_0->cc);


 VAR_2 = (VAR_1 - VAR_0->cycle_last) & VAR_0->cc->mask;


 VAR_3 = FUNC_0(VAR_0->cc, VAR_2);


 VAR_0->cycle_last = VAR_1;

 return VAR_3;
}
