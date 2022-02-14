
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double time_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 double VAR_3 ;
 double VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 char* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (0.5 == (time_t) 0.5) {



  if (sizeof (time_t) == sizeof (float)) {
   VAR_4 = (time_t) -VAR_2;
   VAR_3 = (time_t) VAR_2;
  } else if (sizeof (time_t) == sizeof (double)) {
   VAR_4 = (time_t) -VAR_0;
   VAR_3 = (time_t) VAR_0;
  } else {
   (void) FUNC_2(VAR_6,
FUNC_0("%s: use of -v on system with floating time_t other than float or double\n"),
    VAR_5);
   FUNC_1(VAR_1);
  }
 } else if (0 > (time_t) -1) {



  time_t VAR_7 = 0;
  time_t VAR_8 = 1;

  while (VAR_7 < VAR_8) {
   VAR_7 = VAR_8;
   VAR_8 = 2 * VAR_8 + 1;
  }

  VAR_3 = VAR_7;
  VAR_7 = -VAR_7;
  VAR_4 = VAR_7 - 1;
  if (VAR_7 < VAR_4)
   VAR_4 = VAR_7;
 } else {



  VAR_4 = 0;
  VAR_3 = VAR_4 - 1;
 }
}
