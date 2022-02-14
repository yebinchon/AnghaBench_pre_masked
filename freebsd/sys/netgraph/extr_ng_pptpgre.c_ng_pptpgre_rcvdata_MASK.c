
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int item_p ;
typedef TYPE_2__* hpriv_p ;
typedef int hook_p ;
struct TYPE_5__ {int enabled; } ;
struct TYPE_6__ {int mtx; TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__* const,int ) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_2, item_p VAR_3)
{
 const hpriv_p VAR_4 = FUNC_1(VAR_2);
 int VAR_5;


 if (!VAR_4->conf.enabled) {
  FUNC_0(VAR_3);
  return (VAR_0);
 }

 FUNC_3(&VAR_4->mtx);

 VAR_5 = FUNC_4(VAR_4, VAR_3);

 FUNC_2(&VAR_4->mtx, VAR_1);

 return (VAR_5);
}
