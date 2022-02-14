
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct promotenode {TYPE_1__* ds; } ;
typedef int list_t ;
struct TYPE_2__ {int ds_deadlist; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 struct promotenode* FUNC_1 (int *) ;
 struct promotenode* FUNC_2 (int *,struct promotenode*) ;

__attribute__((used)) static int
FUNC_3(list_t *VAR_1, uint64_t VAR_2, uint64_t *VAR_3)
{
 struct promotenode *VAR_4;

 *VAR_3 = 0;
 for (VAR_4 = FUNC_1(VAR_1); VAR_4; VAR_4 = FUNC_2(VAR_1, VAR_4)) {
  uint64_t VAR_5, VAR_6, VAR_7;
  FUNC_0(&VAR_4->ds->ds_deadlist,
      VAR_2, VAR_0, &VAR_5, &VAR_6, &VAR_7);
  *VAR_3 += VAR_5;
 }
 return (0);
}
