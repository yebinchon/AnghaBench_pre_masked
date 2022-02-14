
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* buf; } ;
typedef TYPE_1__ CStr ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(int VAR_5)
{
    CStr *VAR_6;
    int VAR_7, VAR_8, VAR_9;

    if (VAR_5 < 1)
 VAR_5 = 1;
    if (VAR_5 == VAR_3)
 return;
    VAR_6 = FUNC_0(VAR_5, sizeof(CStr));
    if (VAR_1 != ((void*)0)) {
 if (VAR_2 != 0) {
     if (VAR_5 >= VAR_2) {
  VAR_7 = VAR_2;
  VAR_9 = VAR_0;
     } else {
  VAR_7 = VAR_5;
  VAR_9 = (VAR_0 - VAR_7 + VAR_2) % VAR_2;
     }
     for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_8 < VAR_7)
      VAR_6[VAR_8] = VAR_1[VAR_9];
  else
      FUNC_1(VAR_1[VAR_9].buf);
  VAR_9 = (VAR_9 + 1) % VAR_2;
     }
     VAR_2 = VAR_7;
     VAR_0 = VAR_7 % VAR_5;
     VAR_4 = VAR_7 - 1;
 }
 FUNC_1(VAR_1);
    }
    VAR_1 = VAR_6;
    VAR_3 = VAR_5;
}
