
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** zc_word; } ;
typedef TYPE_1__ zio_cksum_t ;
typedef int uint64_t ;
typedef int abd_t ;
typedef int SHA256_CTX ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int VAR_0 ;

void
FUNC_4(abd_t *VAR_1, uint64_t VAR_2,
    const void *VAR_3, zio_cksum_t *VAR_4)
{
 SHA256_CTX VAR_5;
 zio_cksum_t VAR_6;

 FUNC_2(&VAR_5);
 (void) FUNC_3(VAR_1, 0, VAR_2, VAR_0, &VAR_5);
 FUNC_1((unsigned char *)&VAR_6, &VAR_5);
 VAR_4->zc_word[0] = FUNC_0(VAR_6.zc_word[0]);
 VAR_4->zc_word[1] = FUNC_0(VAR_6.zc_word[1]);
 VAR_4->zc_word[2] = FUNC_0(VAR_6.zc_word[2]);
 VAR_4->zc_word[3] = FUNC_0(VAR_6.zc_word[3]);
}
