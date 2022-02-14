
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int available; int name; } ;
struct TYPE_5__ {int available; int name; } ;
struct TYPE_4__ {int available; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 int VAR_4, VAR_5;

 FUNC_0(FUNC_7());

 for (VAR_4 = 0; VAR_4 < FUNC_1(); VAR_4++) {
  VAR_5 = FUNC_5(VAR_1[VAR_4].name, 0,
      VAR_0);
  if (VAR_1[VAR_4].available != VAR_5)
   VAR_1[VAR_4].available = VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_6(); VAR_4++) {
  VAR_5 = FUNC_3(VAR_3[VAR_4].name, 0, 0);
  if (VAR_3[VAR_4].available != VAR_5)
   VAR_3[VAR_4].available = VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_2(); VAR_4++) {
  VAR_5 = FUNC_4(VAR_2[VAR_4].name, 0,
      VAR_0);
  if (VAR_2[VAR_4].available != VAR_5)
   VAR_2[VAR_4].available = VAR_5;
 }
}
