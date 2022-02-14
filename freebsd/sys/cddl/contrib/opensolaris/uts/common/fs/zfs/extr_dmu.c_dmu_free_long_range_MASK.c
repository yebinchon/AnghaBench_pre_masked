
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {scalar_t__ dn_maxblkid; } ;
typedef TYPE_1__ dnode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int
FUNC_3(objset_t *VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, uint64_t VAR_5)
{
 dnode_t *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_1, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_4, VAR_5);







 if (VAR_7 == 0 && VAR_4 == 0 && VAR_5 == VAR_0)
  VAR_6->dn_maxblkid = 0;

 FUNC_2(VAR_6, VAR_1);
 return (VAR_7);
}
