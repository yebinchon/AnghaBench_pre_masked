
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_7;

 if (FUNC_0(&VAR_7) < 0) {
  if (VAR_6 != VAR_4) {
   FUNC_1("Audit status check failed (%s)",
       FUNC_2(VAR_6));
  }
  VAR_5 = VAR_2;
 } else
  if (VAR_7 == VAR_1 || VAR_7 == VAR_0)
   VAR_5 = VAR_2;
  else
   VAR_5 = VAR_3;
}
