
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct com_s {int etc; int intr_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct com_s*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct com_s *VAR_12, int VAR_13)
{
 FUNC_3();
 FUNC_0();
 if (VAR_12->etc == VAR_13)
  goto wait;
 if ((VAR_13 == VAR_0
     && (VAR_12->etc == VAR_8
  || VAR_12->etc == VAR_7))
     || (VAR_13 == VAR_1
        && (VAR_12->etc == VAR_6 || VAR_12->etc == VAR_5
     || VAR_12->etc == VAR_9))) {
  FUNC_1();
  FUNC_4();
  return;
 }
 VAR_12->etc = VAR_13;
 FUNC_2(VAR_12, VAR_2,
    VAR_12->intr_enable
    = (VAR_12->intr_enable & ~VAR_4) | VAR_3);
wait:
 FUNC_1();
 FUNC_4();
 while (VAR_12->etc == VAR_13
        && FUNC_5(&VAR_12->etc, VAR_11 | VAR_10, "cyetc", 0) == 0)
  continue;
}
