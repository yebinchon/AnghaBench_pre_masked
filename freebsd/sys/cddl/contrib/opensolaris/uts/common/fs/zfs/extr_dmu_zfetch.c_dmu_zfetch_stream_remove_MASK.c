
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zs_lock; } ;
typedef TYPE_1__ zstream_t ;
struct TYPE_8__ {int zf_stream; int zf_rwlock; } ;
typedef TYPE_2__ zfetch_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(zfetch_t *VAR_0, zstream_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->zf_rwlock));
 FUNC_3(&VAR_0->zf_stream, VAR_1);
 FUNC_4(&VAR_1->zs_lock);
 FUNC_2(VAR_1, sizeof (*VAR_1));
}
