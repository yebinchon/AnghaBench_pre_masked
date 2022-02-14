
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef enum dmu_tx_hold_type { ____Placeholder_dmu_tx_hold_type } dmu_tx_hold_type ;
typedef int dnode_t ;
struct TYPE_4__ {int tx_err; } ;
typedef TYPE_1__ dmu_tx_t ;
typedef int dmu_tx_hold_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,int *,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int ,int **) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static dmu_tx_hold_t *
FUNC_3(dmu_tx_t *VAR_2, objset_t *VAR_3, uint64_t VAR_4,
    enum dmu_tx_hold_type VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 dnode_t *VAR_8 = ((void*)0);
 dmu_tx_hold_t *VAR_9;
 int VAR_10;

 if (VAR_4 != VAR_0) {
  VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_8);
  if (VAR_10 != 0) {
   VAR_2->tx_err = VAR_10;
   return (((void*)0));
  }
 }
 VAR_9 = FUNC_0(VAR_2, VAR_8, VAR_5, VAR_6, VAR_7);
 if (VAR_8 != ((void*)0))
  FUNC_2(VAR_8, VAR_1);
 return (VAR_9);
}
