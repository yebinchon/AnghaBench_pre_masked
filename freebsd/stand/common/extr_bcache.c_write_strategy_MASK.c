
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcache_devdata {int (* dv_strategy ) (int ,int,size_t,size_t,char*,size_t*) ;int dv_devdata; struct bcache* dv_cache; } ;
struct bcache {int dummy; } ;
typedef size_t daddr_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct bcache*,size_t) ;
 int FUNC_1 (int ,int,size_t,size_t,char*,size_t*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, int VAR_2, daddr_t VAR_3, size_t VAR_4,
    char *VAR_5, size_t *VAR_6)
{
    struct bcache_devdata *VAR_7 = (struct bcache_devdata *)VAR_1;
    struct bcache *VAR_8 = VAR_7->dv_cache;
    daddr_t VAR_9, VAR_10;

    VAR_10 = VAR_4 / VAR_0;


    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
 FUNC_0(VAR_8, VAR_3 + VAR_9);
    }


    return (VAR_7->dv_strategy(VAR_7->dv_devdata, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
}
