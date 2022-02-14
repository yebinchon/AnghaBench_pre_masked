
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_4__ {int * dn_dirty_link; } ;
typedef TYPE_1__ dnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(objset_t *VAR_2, uint64_t VAR_3)
{
 dnode_t *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_0, &VAR_4);
 if (VAR_5) {
  return (VAR_5);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_3(&VAR_4->dn_dirty_link[VAR_6])) {
   break;
  }
 }
 FUNC_2(VAR_4, VAR_0);
 if (VAR_6 != VAR_1) {
  FUNC_4(FUNC_0(VAR_2), 0);
 }

 return (0);
}
