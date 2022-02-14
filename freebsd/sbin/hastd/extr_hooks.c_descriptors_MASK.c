
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_8;




 if (FUNC_6() == VAR_3) {
  FUNC_2(FUNC_0(FUNC_0(VAR_5, VAR_6),
      VAR_4) + 1);
  return;
 }

 FUNC_2(0);




 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (VAR_8 == -1) {
  FUNC_5(VAR_0, "Unable to open %s for reading",
      VAR_7);
 } else if (VAR_8 != VAR_5) {
  if (FUNC_3(VAR_8, VAR_5) == -1) {
   FUNC_5(VAR_0,
       "Unable to duplicate descriptor for stdin");
  }
  FUNC_1(VAR_8);
 }
 VAR_8 = FUNC_4(VAR_7, VAR_2);
 if (VAR_8 == -1) {
  FUNC_5(VAR_0, "Unable to open %s for writing",
      VAR_7);
 } else {
  if (VAR_8 != VAR_6 && FUNC_3(VAR_8, VAR_6) == -1) {
   FUNC_5(VAR_0,
       "Unable to duplicate descriptor for stdout");
  }
  if (VAR_8 != VAR_4 && FUNC_3(VAR_8, VAR_4) == -1) {
   FUNC_5(VAR_0,
       "Unable to duplicate descriptor for stderr");
  }
  if (VAR_8 != VAR_6 && VAR_8 != VAR_4)
   FUNC_1(VAR_8);
 }
}
