
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct route4_head {int fastmap; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline
void FUNC_4(struct Qdisc *VAR_0, struct route4_head *VAR_1, u32 VAR_2)
{
 spinlock_t *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3);
 FUNC_0(VAR_1->fastmap, 0, sizeof(VAR_1->fastmap));
 FUNC_3(VAR_3);
}
