
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 double VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;

__attribute__((used)) static void
FUNC_1(void)
{

 if (VAR_3) {
  VAR_3 = 0;
  (void)FUNC_0(VAR_4, "\r%f/%d packets received (%.1f%%)",
      VAR_0, VAR_2,
      VAR_2 ? VAR_0 * 100.0 / VAR_2 : 0.0);
  if (VAR_0 && VAR_5)
   (void)FUNC_0(VAR_4, " %.3f min / %.3f avg / %.3f max",
       VAR_7, VAR_8 / (VAR_0 + VAR_1), VAR_6);
  (void)FUNC_0(VAR_4, "\n");
 }
}
