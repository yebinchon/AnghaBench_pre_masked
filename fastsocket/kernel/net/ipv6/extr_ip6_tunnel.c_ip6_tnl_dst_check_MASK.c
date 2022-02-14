
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip6_tnl {struct dst_entry* dst_cache; int dst_cookie; } ;
struct dst_entry {TYPE_1__* ops; scalar_t__ obsolete; } ;
struct TYPE_2__ {int * (* check ) (struct dst_entry*,int ) ;} ;


 int FUNC_0 (struct dst_entry*) ;
 int * FUNC_1 (struct dst_entry*,int ) ;

__attribute__((used)) static inline struct dst_entry *FUNC_2(struct ip6_tnl *VAR_0)
{
 struct dst_entry *VAR_1 = VAR_0->dst_cache;

 if (VAR_1 && VAR_1->obsolete &&
     VAR_1->ops->check(VAR_1, VAR_0->dst_cookie) == ((void*)0)) {
  VAR_0->dst_cache = ((void*)0);
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
