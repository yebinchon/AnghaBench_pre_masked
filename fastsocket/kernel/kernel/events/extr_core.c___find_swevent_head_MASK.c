
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef int u32 ;
struct swevent_hlist {struct hlist_head* heads; } ;
struct hlist_head {int dummy; } ;


 size_t FUNC_0 (size_t,int ) ;

__attribute__((used)) static inline struct hlist_head *
FUNC_1(struct swevent_hlist *VAR_0, u64 VAR_1, u32 VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_1, VAR_2);

 return &VAR_0->heads[VAR_3];
}
