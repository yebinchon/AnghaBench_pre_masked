
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int * sk_dst_cache; } ;
struct rt6_info {scalar_t__ rt6i_flow_cache_genid; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct sock*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct dst_entry*) ;
 int VAR_0 ;

__attribute__((used)) static inline
struct dst_entry *FUNC_3(struct sock *VAR_1, u32 VAR_2)
{
 struct dst_entry *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 return VAR_3;
}
