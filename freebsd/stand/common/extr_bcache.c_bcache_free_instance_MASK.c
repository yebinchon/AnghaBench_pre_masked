
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcache {struct bcache* bcache_data; struct bcache* bcache_ctl; } ;


 int FUNC_0 (struct bcache*) ;

__attribute__((used)) static void
FUNC_1(struct bcache *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
 FUNC_0(VAR_0->bcache_ctl);
 FUNC_0(VAR_0->bcache_data);
 FUNC_0(VAR_0);
    }
}
