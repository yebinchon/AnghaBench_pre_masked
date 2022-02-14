
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {scalar_t__ expiry_time; scalar_t__ last_refresh; } ;
struct cache_detail {scalar_t__ flush_time; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct cache_detail *VAR_0, struct cache_head *VAR_1)
{
 return (VAR_1->expiry_time < FUNC_0()) ||
  (VAR_0->flush_time > VAR_1->last_refresh);
}
