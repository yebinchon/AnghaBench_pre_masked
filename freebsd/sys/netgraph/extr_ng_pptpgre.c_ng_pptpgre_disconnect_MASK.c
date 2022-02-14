
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef TYPE_3__* hpriv_p ;
typedef int * hook_p ;
struct TYPE_11__ {int mtx; } ;
struct TYPE_9__ {int * hook; } ;
struct TYPE_10__ {int * lower; TYPE_1__ uppersess; int * upper; } ;


 int FUNC_0 (TYPE_3__* const,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 TYPE_2__* FUNC_5 (int const) ;
 int FUNC_6 (TYPE_3__* const,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__* const) ;
 int FUNC_9 (int const) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10(hook_p VAR_2)
{
 const node_p VAR_3 = FUNC_1(VAR_2);
 const priv_p VAR_4 = FUNC_5(VAR_3);
 const hpriv_p VAR_5 = FUNC_2(VAR_2);


 if (VAR_2 == VAR_4->upper) {
  VAR_4->upper = ((void*)0);
  VAR_4->uppersess.hook = ((void*)0);
 } else if (VAR_2 == VAR_4->lower) {
  VAR_4->lower = ((void*)0);
 } else {

  FUNC_8(VAR_5);

  FUNC_0(VAR_5, VAR_1);
  FUNC_7(&VAR_5->mtx);
  FUNC_6(VAR_5, VAR_0);
 }


 if ((FUNC_4(VAR_3) == 0)
 && (FUNC_3(VAR_3)))
  FUNC_9(VAR_3);
 return (0);
}
