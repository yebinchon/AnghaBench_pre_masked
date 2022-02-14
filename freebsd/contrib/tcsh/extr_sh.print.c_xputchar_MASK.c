
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_14 ;

void
FUNC_9(int VAR_15)
{
    int VAR_16;

    VAR_16 = VAR_15 & VAR_0 & VAR_5;
    VAR_15 &= VAR_1 | VAR_3;
    if (!VAR_13 && (VAR_15 & VAR_3) == 0) {
 if (FUNC_5(VAR_15) && (FUNC_0(VAR_15) < 0x80 || VAR_2 == 1)) {
     if (VAR_15 != '\t' && VAR_15 != '\n'



  && (VAR_14 || VAR_15 != '\r'))
     {
  FUNC_9('^' | VAR_16);
  if (VAR_15 == FUNC_1('\177'))
      VAR_15 = '?';
  else

      VAR_15 = FUNC_1(FUNC_0(VAR_15)|0100);
     }
 }
 else if (!FUNC_6(VAR_15) && (FUNC_0(VAR_15) < 0x80 || VAR_2 == 1)) {
     FUNC_9('\\' | VAR_16);
     FUNC_9((((VAR_15 >> 6) & 7) + '0') | VAR_16);
     FUNC_9((((VAR_15 >> 3) & 7) + '0') | VAR_16);
     VAR_15 = (VAR_15 & 7) + '0';
 }
 (void) FUNC_8(VAR_15 | VAR_16);
    }
    else {
 VAR_15 &= VAR_5;
 if (VAR_7 ? (VAR_6 ? VAR_9 : VAR_10) :
     (VAR_6 ? VAR_8 : VAR_11))
     FUNC_2(VAR_15 | VAR_16);
 (void) FUNC_7(VAR_15);
    }
    if (VAR_12 && (VAR_15 & VAR_1) == '\n')
 FUNC_4();
}
