
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t; } ;
typedef TYPE_1__ undo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 long VAR_3 ;
 int FUNC_3 (long) ;
 int FUNC_4 () ;
 char* VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (int ,long,long) ;
 char* FUNC_6 (char const*) ;
 int VAR_8 ;

int
FUNC_7(long VAR_9)
{
 int VAR_10;
 const char *VAR_11 = VAR_4;
 const char *VAR_12;
 undo_t *VAR_13 = ((void*)0);

 for (VAR_3 = VAR_9;;) {
  if (!VAR_6) {
   if ((VAR_10 = FUNC_4()) < 0)
    return VAR_1;
   else if (VAR_10 == 0 || VAR_4[VAR_10 - 1] != '\n') {
    FUNC_2(VAR_8);
    return VAR_10 ? VAR_0 : 0;
   }
   VAR_11 = VAR_4;
  } else if (*(VAR_11 = VAR_5) == '\0')
   return 0;
  else {
   while (*VAR_5++ != '\n')
    ;
   VAR_10 = VAR_5 - VAR_11;
  }
  if (VAR_10 == 2 && VAR_11[0] == '.' && VAR_11[1] == '\n') {
   return 0;
  }
  VAR_12 = VAR_11 + VAR_10;
  FUNC_1();
  do {
   if ((VAR_11 = FUNC_6(VAR_11)) == ((void*)0)) {
    FUNC_0();
    return VAR_1;
   } else if (VAR_13)
    VAR_13->t = FUNC_3(VAR_3);
   else if ((VAR_13 = FUNC_5(VAR_2, VAR_3,
       VAR_3)) == ((void*)0)) {
    FUNC_0();
    return VAR_1;
   }
  } while (VAR_11 != VAR_12);
  VAR_7 = 1;
  FUNC_0();
 }

}
