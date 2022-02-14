
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void
FUNC_4(void)
{
 if (FUNC_0(VAR_7)) {
  if (FUNC_2() != VAR_8) {
   VAR_8 = FUNC_2();
   FUNC_1("%c%c%c%c%c%c",
     VAR_0, VAR_5, VAR_7,
     VAR_8 ? VAR_2 : VAR_1,
     VAR_0, VAR_6);
  }
  if (FUNC_3() != VAR_9) {
   VAR_9 = FUNC_3();
   FUNC_1("%c%c%c%c%c%c",
     VAR_0, VAR_5, VAR_7,
     VAR_9 ? VAR_3
         : VAR_4,
     VAR_0, VAR_6);
  }
 }
}
