
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_9__ {int * devdata; } ;
typedef TYPE_1__ dev_info_t ;
typedef int EFI_STATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,int **) ;
 int VAR_4 ;

__attribute__((used)) static EFI_STATUS
FUNC_6(dev_info_t *VAR_5)
{
 spa_t *VAR_6;
 dev_info_t *VAR_7;


 VAR_7 = FUNC_3(sizeof(*VAR_5));
 if (VAR_7 == ((void*)0)) {
  FUNC_0("Failed to allocate tdev\n");
  return (VAR_0);
 }
 FUNC_4(VAR_7, VAR_5, sizeof(*VAR_5));

 if (FUNC_5(VAR_4, VAR_7, &VAR_6) != 0) {
  FUNC_2(VAR_7);
  return (VAR_2);
 }

 VAR_5->devdata = VAR_6;
 FUNC_1(&VAR_3, VAR_5);

 return (VAR_1);
}
