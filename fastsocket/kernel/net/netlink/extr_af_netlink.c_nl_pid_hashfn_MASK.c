
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nl_pid_hash {size_t mask; int rnd; struct hlist_head* table; } ;
struct hlist_head {int dummy; } ;


 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_1(struct nl_pid_hash *VAR_0, u32 VAR_1)
{
 return &VAR_0->table[FUNC_0(VAR_1, VAR_0->rnd) & VAR_0->mask];
}
