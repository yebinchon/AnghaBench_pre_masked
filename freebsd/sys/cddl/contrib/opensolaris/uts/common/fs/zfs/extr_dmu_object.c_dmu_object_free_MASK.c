
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_6__ {scalar_t__ dn_type; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_4 (int *,scalar_t__,int ,int ,int ,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int
FUNC_6(objset_t *VAR_5, uint64_t VAR_6, dmu_tx_t *VAR_7)
{
 dnode_t *VAR_8;
 int VAR_9;

 FUNC_0(VAR_6 != VAR_0 || FUNC_1(VAR_7));

 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_3, 0,
     VAR_4, &VAR_8);
 if (VAR_9)
  return (VAR_9);

 FUNC_0(VAR_8->dn_type != VAR_2);




 FUNC_3(VAR_8, 0, VAR_1, VAR_7);
 FUNC_2(VAR_8, VAR_7);
 FUNC_5(VAR_8, VAR_4);

 return (0);
}
