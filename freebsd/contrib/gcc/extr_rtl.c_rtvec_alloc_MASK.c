
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtx ;
typedef TYPE_1__* rtvec ;
struct TYPE_5__ {int * elem; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

rtvec
FUNC_3 (int VAR_2)
{
  rtvec VAR_3;

  VAR_3 = FUNC_1 (VAR_2);

  FUNC_2 (&VAR_3->elem[0], 0, VAR_2 * sizeof (rtx));

  FUNC_0 (VAR_3, VAR_2);






  return VAR_3;
}
