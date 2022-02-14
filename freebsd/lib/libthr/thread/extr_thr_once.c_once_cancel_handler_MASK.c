
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
typedef TYPE_1__ pthread_once_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 pthread_once_t *VAR_4;

 VAR_4 = VAR_3;
 if (FUNC_1(&VAR_4->state, VAR_1,
     VAR_2))
  return;
 FUNC_2(&VAR_4->state, VAR_2);
 FUNC_0(&VAR_4->state, VAR_0, 0);
}
