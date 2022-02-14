
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct unix_domain {int addr_changes; } ;
struct TYPE_3__ {scalar_t__ expiry_time; scalar_t__ flags; } ;
struct ip_map {int m_addr; int m_class; TYPE_1__ h; int m_add_change; struct unix_domain* m_client; } ;
struct cache_head {int dummy; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cache_head*,struct cache_detail*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 struct cache_head* FUNC_4 (struct cache_detail*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(struct cache_detail *VAR_4, struct ip_map *VAR_5,
  struct unix_domain *VAR_6, time_t VAR_7)
{
 struct ip_map VAR_8;
 struct cache_head *VAR_9;

 VAR_8.m_client = VAR_6;
 VAR_8.h.flags = 0;
 if (!VAR_6)
  FUNC_3(VAR_0, &VAR_8.h.flags);
 else {
  VAR_8.m_add_change = VAR_6->addr_changes;



  if (VAR_7 == VAR_3)
   VAR_8.m_add_change++;
 }
 VAR_8.h.expiry_time = VAR_7;
 VAR_9 = FUNC_4(VAR_4, &VAR_8.h, &VAR_5->h,
     FUNC_2(VAR_5->m_class, VAR_2) ^
     FUNC_1(VAR_5->m_addr));
 if (!VAR_9)
  return -VAR_1;
 FUNC_0(VAR_9, VAR_4);
 return 0;
}
