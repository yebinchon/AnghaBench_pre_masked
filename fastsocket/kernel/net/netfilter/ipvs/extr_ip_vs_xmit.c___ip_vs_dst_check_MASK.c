
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ip_vs_dest {scalar_t__ dst_rtos; struct dst_entry* dst_cache; int dst_cookie; } ;
struct dst_entry {TYPE_1__* ops; scalar_t__ obsolete; } ;
struct TYPE_2__ {int * (* check ) (struct dst_entry*,int ) ;} ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 int * FUNC_2 (struct dst_entry*,int ) ;

__attribute__((used)) static inline struct dst_entry *
FUNC_3(struct ip_vs_dest *VAR_0, u32 VAR_1)
{
 struct dst_entry *VAR_2 = VAR_0->dst_cache;

 if (!VAR_2)
  return ((void*)0);
 if ((VAR_2->obsolete || VAR_1 != VAR_0->dst_rtos) &&
     VAR_2->ops->check(VAR_2, VAR_0->dst_cookie) == ((void*)0)) {
  VAR_0->dst_cache = ((void*)0);
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 FUNC_0(VAR_2);
 return VAR_2;
}
