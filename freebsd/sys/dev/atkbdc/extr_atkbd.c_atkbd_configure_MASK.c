
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kb_flags; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__**,int*,int) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (char*,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_8(int VAR_3)
{
 keyboard_t *VAR_4;
 int VAR_5[2];
 int VAR_6;





 if (FUNC_2() != 0 ||
     FUNC_6("atkbd", VAR_0)) {
  VAR_6 = FUNC_3(VAR_1, VAR_0);
  if (VAR_6 >= 0) {
   VAR_4 = FUNC_4(VAR_6);
   FUNC_5(VAR_4);
   VAR_4->kb_flags &= ~VAR_2;
  }
  return 0;
 }


 if (FUNC_7("atkbd", VAR_0, "flags", &VAR_6) == 0)
  VAR_3 |= VAR_6;


 VAR_5[0] = -1;
 VAR_5[1] = -1;
 VAR_4 = ((void*)0);
 if (FUNC_1(VAR_0, VAR_5, VAR_3))
  return 0;
 if (FUNC_0(VAR_0, &VAR_4, VAR_5, VAR_3))
  return 0;


 return 1;
}
