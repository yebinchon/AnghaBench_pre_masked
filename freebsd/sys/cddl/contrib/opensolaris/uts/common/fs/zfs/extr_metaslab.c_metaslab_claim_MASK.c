
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int dva_t ;
struct TYPE_5__ {int * blk_dva; } ;
typedef TYPE_1__ blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int const*,scalar_t__) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;

int
FUNC_6(spa_t *VAR_3, const blkptr_t *VAR_4, uint64_t VAR_5)
{
 const dva_t *VAR_6 = VAR_4->blk_dva;
 int VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = 0;

 FUNC_0(!FUNC_2(VAR_4));

 if (VAR_5 != 0) {




  if ((VAR_8 = FUNC_6(VAR_3, VAR_4, 0)) != 0)
   return (VAR_8);
 }

 FUNC_4(VAR_3, VAR_2, VAR_0, VAR_1);

 for (int VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  if ((VAR_8 = FUNC_3(VAR_3, &VAR_6[VAR_9], VAR_5)) != 0)
   break;

 FUNC_5(VAR_3, VAR_2, VAR_0);

 FUNC_0(VAR_8 == 0 || VAR_5 == 0);

 return (VAR_8);
}
