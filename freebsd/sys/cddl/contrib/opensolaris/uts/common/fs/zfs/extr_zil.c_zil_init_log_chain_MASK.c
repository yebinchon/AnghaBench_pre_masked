
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long long* zc_word; } ;
typedef TYPE_1__ zio_cksum_t ;
struct TYPE_7__ {int zl_os; } ;
typedef TYPE_2__ zilog_t ;
struct TYPE_8__ {TYPE_1__ blk_cksum; } ;
typedef TYPE_3__ blkptr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned long long FUNC_0 (int ) ;
 void* FUNC_1 (unsigned long long) ;

__attribute__((used)) static void
FUNC_2(zilog_t *VAR_4, blkptr_t *VAR_5)
{
 zio_cksum_t *VAR_6 = &VAR_5->blk_cksum;

 VAR_6->zc_word[VAR_0] = FUNC_1(-1ULL);
 VAR_6->zc_word[VAR_1] = FUNC_1(-1ULL);
 VAR_6->zc_word[VAR_2] = FUNC_0(VAR_4->zl_os);
 VAR_6->zc_word[VAR_3] = 1ULL;
}
