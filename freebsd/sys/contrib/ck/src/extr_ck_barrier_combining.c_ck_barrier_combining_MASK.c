
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_combining_state {int sense; } ;
struct ck_barrier_combining_group {int dummy; } ;
struct ck_barrier_combining {int dummy; } ;


 int FUNC_0 (struct ck_barrier_combining*,struct ck_barrier_combining_group*,int ) ;

void
FUNC_1(struct ck_barrier_combining *VAR_0,
    struct ck_barrier_combining_group *VAR_1,
    struct ck_barrier_combining_state *VAR_2)
{

 FUNC_0(VAR_0, VAR_1, VAR_2->sense);


 VAR_2->sense = ~VAR_2->sense;
 return;
}
