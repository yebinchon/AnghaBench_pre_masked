
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (char const) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_4(void)
{
 const char *VAR_16;
 if (VAR_12 && VAR_14 & VAR_8) {
  VAR_14 &= ~VAR_8;
  VAR_14 |= VAR_5;
 }







 if (VAR_14 & VAR_8)
  FUNC_3('\n');
 else if (VAR_14 & VAR_5) {
  FUNC_3(' ');
  FUNC_3(' ');
 } else if (VAR_14 & VAR_6 && VAR_11 & VAR_1)
  FUNC_1("zwnj");



 if (VAR_14 & (VAR_6 | VAR_5 | VAR_8)) {
  FUNC_3('\n');
  for (VAR_16 = FUNC_2('\0'); *VAR_16 != '\0'; VAR_16++) {
   FUNC_3(*VAR_16);
   if (*VAR_16 == '>')
    FUNC_3(' ');
  }
  VAR_14 &= ~(VAR_6 | VAR_5 | VAR_8);
  VAR_11 = VAR_0;
  VAR_13 = 0;



 } else if (VAR_14 & VAR_9) {
  if (VAR_14 & VAR_3)
   FUNC_0("&nbsp;", VAR_15);
  else
   FUNC_3(' ');
  VAR_11 &= ~VAR_2;
  VAR_13++;
 }

 VAR_14 &= ~(VAR_10 | VAR_7);
 if (VAR_14 & VAR_4)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;
}
