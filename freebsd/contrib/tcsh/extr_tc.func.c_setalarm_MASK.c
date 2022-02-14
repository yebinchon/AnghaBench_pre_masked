
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct varent {int ** vec; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 struct varent* FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*) ;

void
FUNC_6(int VAR_7)
{
    struct varent *VAR_8;
    Char *VAR_9;
    unsigned VAR_10 = 0, VAR_11, VAR_12;
    time_t VAR_13, VAR_14, VAR_15;

    if ((VAR_8 = FUNC_0(VAR_1)) != ((void*)0) && VAR_8->vec != ((void*)0)) {
 if ((VAR_9 = VAR_8->vec[0]) != 0) {
     if ((VAR_11 = (unsigned) FUNC_2(FUNC_4(VAR_9)) * 60) > 0) {
  VAR_10 = VAR_11;
  VAR_2 = VAR_5;
     }
 }
 if ((VAR_9 = VAR_8->vec[1]) != 0) {
     if ((VAR_12 = (unsigned) FUNC_2(FUNC_4(VAR_9)) * 60) > 0) {
  if (VAR_7) {
      if (VAR_10 == 0 || VAR_12 < VAR_10) {
   VAR_10 = VAR_12;
   VAR_2 = VAR_4;
      }
  }
  else
      if (VAR_10)
   VAR_10 -= VAR_12;
     }
 }
    }
    if ((VAR_14 = FUNC_3()) != -1) {
 (void) FUNC_5(&VAR_13);
 VAR_15 = VAR_14 > VAR_13 ? VAR_14 - VAR_13 : 0;
 if ((VAR_10 == 0) || ((unsigned) VAR_15 < VAR_10)) {
     VAR_10 = ((unsigned) VAR_15) + 1;
     VAR_2 = VAR_6;
 }
    }
    VAR_3 = 0;
    (void) FUNC_1(VAR_10);
}
