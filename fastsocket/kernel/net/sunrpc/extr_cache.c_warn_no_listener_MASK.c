
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_detail {scalar_t__ last_warn; scalar_t__ last_close; int (* warn_no_listener ) (struct cache_detail*,int) ;} ;


 int FUNC_0 (struct cache_detail*,int) ;

__attribute__((used)) static void FUNC_1(struct cache_detail *VAR_0)
{
 if (VAR_0->last_warn != VAR_0->last_close) {
  VAR_0->last_warn = VAR_0->last_close;
  if (VAR_0->warn_no_listener)
   VAR_0->warn_no_listener(VAR_0, VAR_0->last_close != 0);
 }
}
