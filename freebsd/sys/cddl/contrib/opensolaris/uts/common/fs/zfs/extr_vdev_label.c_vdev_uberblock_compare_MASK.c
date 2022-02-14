
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ub_timestamp; int ub_txg; } ;
typedef TYPE_1__ uberblock_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(const uberblock_t *VAR_0, const uberblock_t *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->ub_txg, VAR_1->ub_txg);
 if (FUNC_1(VAR_2))
  return (VAR_2);

 return (FUNC_0(VAR_0->ub_timestamp, VAR_1->ub_timestamp));
}
