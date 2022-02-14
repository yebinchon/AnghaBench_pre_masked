
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int ub_txg; unsigned int ub_timestamp; } ;
typedef TYPE_1__ uberblock_t ;


 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_4(const uberblock_t *VAR_0, const uberblock_t *VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = 0;
 int VAR_4 = FUNC_0(VAR_0->ub_txg, VAR_1->ub_txg);

 if (VAR_4 != 0)
  return (VAR_4);

 VAR_4 = FUNC_0(VAR_0->ub_timestamp, VAR_1->ub_timestamp);
 if (VAR_4 != 0)
  return (VAR_4);

 if (FUNC_3(VAR_0) && FUNC_2(VAR_0))
  VAR_2 = FUNC_1(VAR_0);

 if (FUNC_3(VAR_1) && FUNC_2(VAR_1))
  VAR_3 = FUNC_1(VAR_1);

 return (FUNC_0(VAR_2, VAR_3));
}
