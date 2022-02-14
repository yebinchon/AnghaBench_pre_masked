
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* t; } ;
typedef TYPE_1__ undo_t ;
typedef int pattern_t ;
typedef int line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 long VAR_6 ;
 scalar_t__ FUNC_2 (long,long) ;
 scalar_t__ FUNC_3 (long,long,int) ;
 char* VAR_7 ;
 int VAR_8 ;
 void* FUNC_4 (long) ;
 TYPE_1__* FUNC_5 (int ,long,long) ;
 char* FUNC_6 (char const*) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *,int *,int,int) ;

int
FUNC_8(pattern_t *VAR_11, int VAR_12, int VAR_13)
{
 undo_t *VAR_14;
 const char *VAR_15;
 const char *VAR_16;
 long VAR_17;
 long VAR_18 = VAR_6;
 int VAR_19 = 0;
 line_t *VAR_20;
 int VAR_21;

 VAR_6 = VAR_8 - 1;
 for (VAR_17 = 0; VAR_17 <= VAR_10 - VAR_8; VAR_17++) {
  VAR_20 = FUNC_4(++VAR_6);
  if ((VAR_21 = FUNC_7(VAR_11, VAR_20, VAR_12, VAR_13)) < 0)
   return VAR_0;
  else if (VAR_21) {
   VAR_14 = ((void*)0);
   if (FUNC_2(VAR_6, VAR_6) < 0)
    return VAR_0;
   VAR_15 = VAR_9;
   VAR_16 = VAR_9 + VAR_21;
   FUNC_1();
   do {
    if ((VAR_15 = FUNC_6(VAR_15)) == ((void*)0)) {
     FUNC_0();
     return VAR_0;
    } else if (VAR_14)
     VAR_14->t = FUNC_4(VAR_6);
    else if ((VAR_14 = FUNC_5(VAR_5,
        VAR_6, VAR_6)) == ((void*)0)) {
     FUNC_0();
     return VAR_0;
    }
   } while (VAR_15 != VAR_16);
   FUNC_0();
   VAR_19++;
   VAR_18 = VAR_6;
  }
 }
 VAR_6 = VAR_18;
 if (VAR_19 == 0 && !(VAR_12 & VAR_1)) {
  VAR_7 = "no match";
  return VAR_0;
 } else if ((VAR_12 & (VAR_4 | VAR_2 | VAR_3)) &&
     FUNC_3(VAR_6, VAR_6, VAR_12) < 0)
  return VAR_0;
 return 0;
}
