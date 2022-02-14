
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ip_vs_dest {void* dst_cookie; void* dst_rtos; struct dst_entry* dst_cache; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;

__attribute__((used)) static inline void
FUNC_1(struct ip_vs_dest *VAR_0, u32 VAR_1, struct dst_entry *VAR_2,
  u32 VAR_3)
{
 struct dst_entry *VAR_4;

 VAR_4 = VAR_0->dst_cache;
 VAR_0->dst_cache = VAR_2;
 VAR_0->dst_rtos = VAR_1;
 VAR_0->dst_cookie = VAR_3;
 FUNC_0(VAR_4);
}
