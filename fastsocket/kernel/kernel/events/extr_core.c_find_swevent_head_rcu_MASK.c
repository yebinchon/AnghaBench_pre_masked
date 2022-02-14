
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct swevent_htable {int swevent_hlist; } ;
struct swevent_hlist {int dummy; } ;
struct hlist_head {int dummy; } ;


 struct hlist_head* FUNC_0 (struct swevent_hlist*,int ,int ) ;
 struct swevent_hlist* FUNC_1 (int ) ;

__attribute__((used)) static inline struct hlist_head *
FUNC_2(struct swevent_htable *VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct swevent_hlist *VAR_3;

 VAR_3 = FUNC_1(VAR_0->swevent_hlist);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
