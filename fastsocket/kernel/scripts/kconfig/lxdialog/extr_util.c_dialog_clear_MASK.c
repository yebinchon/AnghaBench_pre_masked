
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int atr; } ;
struct TYPE_4__ {int * backtitle; TYPE_1__ screen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,int ,int,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
 FUNC_0(VAR_4, VAR_2, VAR_1, VAR_3.screen.atr);

 if (VAR_3.backtitle != ((void*)0)) {
  int VAR_5;

  FUNC_3(VAR_4, VAR_3.screen.atr);
  FUNC_1(VAR_4, 0, 1, (char *)VAR_3.backtitle);
  FUNC_4(VAR_4, 1, 1);
  for (VAR_5 = 1; VAR_5 < VAR_1 - 1; VAR_5++)
   FUNC_2(VAR_4, VAR_0);
 }
 FUNC_5(VAR_4);
}
