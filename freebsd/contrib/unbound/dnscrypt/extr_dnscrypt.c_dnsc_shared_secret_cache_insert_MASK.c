
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct shared_secret_cache_key* data; struct shared_secret_cache_key* key; int hash; int lock; } ;
struct shared_secret_cache_key {TYPE_1__ entry; struct shared_secret_cache_key* key; } ;
typedef struct shared_secret_cache_key uint8_t ;
typedef int uint32_t ;
struct slabhash {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct shared_secret_cache_key*) ;
 int FUNC_2 (int *) ;
 struct shared_secret_cache_key* FUNC_3 (int ) ;
 int FUNC_4 (struct shared_secret_cache_key*,struct shared_secret_cache_key*,int ) ;
 int FUNC_5 (struct slabhash*,int ,TYPE_1__*,struct shared_secret_cache_key*,int *) ;

__attribute__((used)) static void
FUNC_6(struct slabhash *VAR_2,
                                uint8_t VAR_3[VAR_0],
                                uint32_t VAR_4,
                                uint8_t VAR_5[VAR_1])
{
    struct shared_secret_cache_key* VAR_6 =
        (struct shared_secret_cache_key*)FUNC_0(1, sizeof(*VAR_6));
    uint8_t* VAR_7 = FUNC_3(VAR_1);
    if(!VAR_6 || !VAR_7) {
        FUNC_1(VAR_6);
        FUNC_1(VAR_7);
        return;
    }
    FUNC_4(VAR_7, VAR_5, VAR_1);
    FUNC_2(&VAR_6->entry.lock);
    FUNC_4(VAR_6->key, VAR_3, VAR_0);
    VAR_6->entry.hash = VAR_4;
    VAR_6->entry.key = VAR_6;
    VAR_6->entry.data = VAR_7;
    FUNC_5(VAR_2,
                    VAR_4, &VAR_6->entry,
                    VAR_7,
                    ((void*)0));
}
