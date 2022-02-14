
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ spa_freeze_txg; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,scalar_t__) ;

void
FUNC_5(spa_t *VAR_5)
{
 uint64_t VAR_6 = 0;

 FUNC_0(VAR_5, VAR_2, VAR_0, VAR_1);
 if (VAR_5->spa_freeze_txg == VAR_4) {
  VAR_6 = FUNC_3(VAR_5) + VAR_3;
  VAR_5->spa_freeze_txg = VAR_6;
 }
 FUNC_1(VAR_5, VAR_2, VAR_0);
 if (VAR_6 != 0)
  FUNC_4(FUNC_2(VAR_5), VAR_6);
}
