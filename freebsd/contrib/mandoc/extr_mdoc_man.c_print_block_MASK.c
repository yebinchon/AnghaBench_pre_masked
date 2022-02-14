
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_7, int VAR_8)
{

 VAR_6 &= ~VAR_2;
 if (VAR_5 & VAR_6) {
  VAR_6 &= ~(VAR_5 | VAR_3);
  if (VAR_1 & VAR_6) {
   FUNC_0(".PD", 0);
   VAR_6 &= ~VAR_1;
  }
 } else if (! (VAR_1 & VAR_6))
  FUNC_0(".PD 0", VAR_1);
 VAR_6 |= VAR_4;
 FUNC_1(VAR_7);
 VAR_6 |= VAR_0 | VAR_8;
}
