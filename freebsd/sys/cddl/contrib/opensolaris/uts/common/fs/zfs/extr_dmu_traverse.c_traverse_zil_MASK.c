
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_8__ {scalar_t__ zh_claim_txg; } ;
typedef TYPE_1__ zil_header_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int td_spa; } ;
typedef TYPE_2__ traverse_data_t ;
struct TYPE_10__ {int dp_meta_objset; } ;


 TYPE_7__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(traverse_data_t *VAR_2, zil_header_t *VAR_3)
{
 uint64_t VAR_4 = VAR_3->zh_claim_txg;





 if (VAR_4 == 0 && FUNC_1(VAR_2->td_spa))
  return;

 zilog_t *VAR_5 = FUNC_2(FUNC_0(VAR_2->td_spa)->dp_meta_objset, VAR_3);
 (void) FUNC_4(VAR_5, VAR_0, VAR_1, VAR_2,
     VAR_4);
 FUNC_3(VAR_5);
}
