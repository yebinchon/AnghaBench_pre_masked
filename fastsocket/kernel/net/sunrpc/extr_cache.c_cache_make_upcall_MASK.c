
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int dummy; } ;
struct cache_detail {int (* cache_upcall ) (struct cache_detail*,struct cache_head*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cache_detail*,struct cache_head*) ;

__attribute__((used)) static int FUNC_1(struct cache_detail *VAR_1, struct cache_head *VAR_2)
{
 if (!VAR_1->cache_upcall)
  return -VAR_0;
 return VAR_1->cache_upcall(VAR_1, VAR_2);
}
