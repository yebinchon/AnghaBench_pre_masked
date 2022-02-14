
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char chtype ;
typedef int WINDOW ;
struct TYPE_2__ {scalar_t__ insecure; } ;


 int FUNC_0 (int,int ) ;
 char VAR_0 ;
 char FUNC_1 (char const) ;
 int FUNC_2 (char const*,int,int,int*,int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (char const*) ;
 int* FUNC_5 (char const*) ;
 int* FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *) ;

void
FUNC_11(WINDOW *VAR_2,
  const char *VAR_3,
  int VAR_4,
  chtype VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8,
  bool VAR_9,
  bool VAR_10)
{
    VAR_8 = FUNC_0(VAR_8 + VAR_7, FUNC_7(VAR_2)) - VAR_7;

    if (VAR_9 && !VAR_1.insecure) {
 if (VAR_10) {
     (void) FUNC_9(VAR_2, VAR_6, VAR_7);
     FUNC_10(VAR_2);
 }
    } else {
 const int *VAR_11 = FUNC_5(VAR_3);
 const int *VAR_12 = FUNC_6(VAR_3);
 int VAR_13 = FUNC_4(VAR_3);

 int VAR_14, VAR_15, VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_2(VAR_3, VAR_4, VAR_8, &VAR_17, &VAR_18);

 FUNC_3(VAR_2, VAR_5);
 (void) FUNC_9(VAR_2, VAR_6, VAR_7);
 for (VAR_14 = VAR_18, VAR_16 = 0; VAR_14 < VAR_13 && VAR_16 < VAR_8; ++VAR_14) {
     int VAR_19 = VAR_11[VAR_14 + 1] - VAR_11[VAR_18];
     if (VAR_19 <= VAR_8) {
  for (VAR_15 = VAR_12[VAR_14]; VAR_15 < VAR_12[VAR_14 + 1]; ++VAR_15) {
      chtype VAR_20 = FUNC_1(VAR_3[VAR_15]);
      if (VAR_9 && VAR_1.insecure) {
   FUNC_8(VAR_2, '*');
      } else if (VAR_20 == VAR_0) {
   int VAR_21 = VAR_11[VAR_14 + 1] - VAR_11[VAR_14];
   while (--VAR_21 >= 0)
       FUNC_8(VAR_2, ' ');
      } else {
   FUNC_8(VAR_2, VAR_20);
      }
  }
  VAR_16 = VAR_19;
     } else {
  break;
     }
 }
 while (VAR_16++ < VAR_8)
     FUNC_8(VAR_2, ' ');
 (void) FUNC_9(VAR_2, VAR_6, VAR_7 + VAR_17);
 FUNC_10(VAR_2);
    }
}
