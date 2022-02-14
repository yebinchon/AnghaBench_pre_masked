
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int VYsize; int VXsize; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ,int ) ;

int
FUNC_3(int VAR_8)
{
  int VAR_9;

  FUNC_0();
  VAR_9 = VAR_2;
  if (VAR_8 == VAR_7) {
    if (VAR_2 == VAR_6) {
      VAR_2 = VAR_7;
      FUNC_2(&VAR_5, VAR_3, VAR_4,
                      VAR_0, VAR_3, VAR_4,
                      VAR_1->VXsize, -VAR_1->VYsize);
    }
  }
  else {
    if (VAR_2 == VAR_7) {
      VAR_2 = VAR_6;
      FUNC_2(&VAR_5, VAR_3, VAR_4,
                      VAR_0, VAR_3, VAR_4,
                      VAR_1->VXsize, VAR_1->VYsize);
    }
  }
  FUNC_1();
  return VAR_9;
}
