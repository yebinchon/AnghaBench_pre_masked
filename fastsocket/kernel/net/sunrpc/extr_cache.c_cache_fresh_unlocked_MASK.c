
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int flags; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_detail*,struct cache_head*) ;
 int FUNC_1 (struct cache_head*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct cache_head *VAR_1,
     struct cache_detail *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_1->flags)) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_2, VAR_1);
 }
}
