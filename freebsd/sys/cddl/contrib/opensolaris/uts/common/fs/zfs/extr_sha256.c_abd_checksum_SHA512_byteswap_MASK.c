
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** zc_word; } ;
typedef TYPE_1__ zio_cksum_t ;
typedef int uint64_t ;
typedef int abd_t ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,int ,void const*,TYPE_1__*) ;

void
FUNC_2(abd_t *VAR_0, uint64_t VAR_1,
    const void *VAR_2, zio_cksum_t *VAR_3)
{
 zio_cksum_t VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
 VAR_3->zc_word[0] = FUNC_0(VAR_4.zc_word[0]);
 VAR_3->zc_word[1] = FUNC_0(VAR_4.zc_word[1]);
 VAR_3->zc_word[2] = FUNC_0(VAR_4.zc_word[2]);
 VAR_3->zc_word[3] = FUNC_0(VAR_4.zc_word[3]);
}
