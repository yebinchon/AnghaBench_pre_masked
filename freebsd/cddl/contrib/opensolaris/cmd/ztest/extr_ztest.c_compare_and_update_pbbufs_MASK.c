
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int bw_txg; scalar_t__ bw_data; int bw_index; } ;
typedef TYPE_1__ bufwad_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (unsigned long long) ;

void
FUNC_4(uint64_t VAR_0, bufwad_t *VAR_1, bufwad_t *VAR_2,
    uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 uint64_t VAR_7;
 bufwad_t *VAR_8;
 bufwad_t *VAR_9;
 bufwad_t *VAR_10;







 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {

  VAR_8 = (bufwad_t *)((char *)VAR_1 + VAR_7 * sizeof (bufwad_t));

  VAR_9 = (bufwad_t *)((char *)VAR_2 + VAR_7 * VAR_5);

  VAR_10 = (bufwad_t *)((char *)VAR_9 + VAR_5) - 1;

  FUNC_0((uintptr_t)VAR_9 - (uintptr_t)VAR_2 < VAR_3);
  FUNC_0((uintptr_t)VAR_10 - (uintptr_t)VAR_2 < VAR_3);

  if (VAR_8->bw_txg > VAR_6)
   FUNC_2(0, "future leak: got %llx, open txg is %llx",
       VAR_8->bw_txg, VAR_6);

  if (VAR_8->bw_data != 0 && VAR_8->bw_index != VAR_4 + VAR_7)
   FUNC_2(0, "wrong index: got %llx, wanted %llx+%llx",
       VAR_8->bw_index, VAR_4, VAR_7);

  if (FUNC_1(VAR_8, VAR_9, sizeof (bufwad_t)) != 0)
   FUNC_2(0, "pack/bigH mismatch in %p/%p", VAR_8, VAR_9);

  if (FUNC_1(VAR_8, VAR_10, sizeof (bufwad_t)) != 0)
   FUNC_2(0, "pack/bigT mismatch in %p/%p", VAR_8, VAR_10);

  VAR_8->bw_index = VAR_4 + VAR_7;
  VAR_8->bw_txg = VAR_6;
  VAR_8->bw_data = 1 + FUNC_3(-2ULL);

  *VAR_9 = *VAR_8;
  *VAR_10 = *VAR_8;
 }
}
