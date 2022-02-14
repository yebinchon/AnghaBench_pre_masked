
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int spa_guid; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int ,void*,TYPE_1__**) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1, uint64_t *VAR_2)
{
 spa_t *VAR_3;
 int VAR_4;

 VAR_3 = ((void*)0);
 VAR_4 = FUNC_0(VAR_0, (void *)(uintptr_t)VAR_1, &VAR_3);
 if (VAR_4 == 0 && VAR_2 != ((void*)0))
  *VAR_2 = VAR_3->spa_guid;
 return (VAR_4);
}
