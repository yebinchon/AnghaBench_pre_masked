
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ocs_sport_t ;
struct TYPE_8__ {TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_node_t ;
typedef int int32_t ;
struct TYPE_7__ {int nodedb_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int *,int ,int ,int ) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int32_t
FUNC_4(ocs_sport_t *VAR_4)
{
 ocs_node_t *VAR_5;


 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_0, VAR_0);
  if (VAR_5 == ((void*)0)) {
   return -1;
  }
 }




 if (VAR_5->ocs->nodedb_mask & VAR_2) {
  FUNC_2(VAR_5, VAR_3);
 } else {
  FUNC_3(VAR_5, VAR_3, ((void*)0));
 }
 return 0;
}
