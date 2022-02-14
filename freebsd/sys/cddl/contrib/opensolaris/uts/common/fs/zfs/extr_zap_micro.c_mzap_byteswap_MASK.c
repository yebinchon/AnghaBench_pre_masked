
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mz_chunk; void* mz_normflags; void* mz_salt; void* mz_block_type; } ;
typedef TYPE_2__ mzap_phys_t ;
struct TYPE_4__ {int mze_cd; void* mze_value; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_2(mzap_phys_t *VAR_1, size_t VAR_2)
{
 VAR_1->mz_block_type = FUNC_1(VAR_1->mz_block_type);
 VAR_1->mz_salt = FUNC_1(VAR_1->mz_salt);
 VAR_1->mz_normflags = FUNC_1(VAR_1->mz_normflags);
 int VAR_3 = (VAR_2 / VAR_0) - 1;
 for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_1->mz_chunk[VAR_4].mze_value =
      FUNC_1(VAR_1->mz_chunk[VAR_4].mze_value);
  VAR_1->mz_chunk[VAR_4].mze_cd =
      FUNC_0(VAR_1->mz_chunk[VAR_4].mze_cd);
 }
}
