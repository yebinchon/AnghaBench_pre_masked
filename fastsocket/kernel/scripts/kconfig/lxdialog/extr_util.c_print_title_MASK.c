
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int atr; } ;
struct TYPE_4__ {TYPE_1__ title; } ;


 int FUNC_0 (int,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *,int ,int,char) ;
 int FUNC_2 (int *,int ,int,char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(WINDOW *VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_2) {
  int VAR_4 = FUNC_0(VAR_3 - 2, FUNC_3(VAR_2));
  FUNC_5(VAR_1, VAR_0.title.atr);
  FUNC_1(VAR_1, 0, (VAR_3 - VAR_4) / 2 - 1, ' ');
  FUNC_2(VAR_1, 0, (VAR_3 - VAR_4)/2, VAR_2, VAR_4);
  FUNC_4(VAR_1, ' ');
 }
}
