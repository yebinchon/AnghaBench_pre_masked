
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_4__ {scalar_t__ dn_type; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ dmu_object_type_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,int ,int *) ;

void
FUNC_8(objset_t *VAR_3, uint64_t VAR_4, dmu_tx_t *VAR_5)
{
 dnode_t *VAR_6;
 dmu_object_type_t VAR_7;

 FUNC_0(FUNC_4(VAR_5));

 FUNC_1(FUNC_5(VAR_3, VAR_4, VAR_1, &VAR_6));
 VAR_7 = VAR_6->dn_type;
 FUNC_6(VAR_6, VAR_1);

 if (VAR_7 == VAR_0) {
  FUNC_7(FUNC_3(VAR_3),
      VAR_2, VAR_5);
 }
 FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_5));
}
