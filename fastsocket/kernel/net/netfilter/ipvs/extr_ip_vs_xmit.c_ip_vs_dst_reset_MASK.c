
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest {struct dst_entry* dst_cache; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;

void
FUNC_1(struct ip_vs_dest *VAR_0)
{
 struct dst_entry *VAR_1;

 VAR_1 = VAR_0->dst_cache;
 VAR_0->dst_cache = ((void*)0);
 FUNC_0(VAR_1);
}
