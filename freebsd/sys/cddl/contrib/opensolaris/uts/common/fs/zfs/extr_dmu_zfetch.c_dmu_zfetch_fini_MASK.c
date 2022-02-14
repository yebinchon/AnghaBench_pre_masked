
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zstream_t ;
struct TYPE_4__ {int * zf_dnode; int zf_rwlock; int zf_stream; } ;
typedef TYPE_1__ zfetch_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

void
FUNC_8(zfetch_t *VAR_1)
{
 zstream_t *VAR_2;

 FUNC_0(!FUNC_1(&VAR_1->zf_rwlock));

 FUNC_6(&VAR_1->zf_rwlock, VAR_0);
 while ((VAR_2 = FUNC_4(&VAR_1->zf_stream)) != ((void*)0))
  FUNC_2(VAR_1, VAR_2);
 FUNC_7(&VAR_1->zf_rwlock);
 FUNC_3(&VAR_1->zf_stream);
 FUNC_5(&VAR_1->zf_rwlock);

 VAR_1->zf_dnode = ((void*)0);
}
