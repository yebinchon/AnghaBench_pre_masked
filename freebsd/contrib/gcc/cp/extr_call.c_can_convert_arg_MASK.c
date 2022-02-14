
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int bad_p; } ;
typedef TYPE_1__ conversion ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int *,void*) ;

bool
FUNC_3 (tree VAR_1, tree VAR_2, tree VAR_3, int VAR_4)
{
  conversion *VAR_5;
  void *VAR_6;
  bool VAR_7;


  VAR_6 = FUNC_0 (0);

  VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3, 0,
       VAR_4);
  VAR_7 = (VAR_5 && !VAR_5->bad_p);


  FUNC_2 (&VAR_0, VAR_6);

  return VAR_7;
}
