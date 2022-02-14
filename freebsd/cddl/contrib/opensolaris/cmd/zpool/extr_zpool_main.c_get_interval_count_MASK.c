
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_1 ;
 unsigned long FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(int *VAR_2, char **VAR_3, unsigned long *VAR_4,
    unsigned long *VAR_5)
{
 unsigned long VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = *VAR_2, VAR_9;




 if (VAR_8 > 0 && FUNC_2(VAR_3[VAR_8 - 1][0])) {
  char *VAR_10;

  VAR_9 = 0;
  VAR_6 = FUNC_3(VAR_3[VAR_8 - 1], &VAR_10, 10);

  if (*VAR_10 == '\0' && VAR_9 == 0) {
   if (VAR_6 == 0) {
    (void) FUNC_0(VAR_1, "%s", FUNC_1("interval "
        "cannot be zero\n"));
    FUNC_4(VAR_0);
   }



   VAR_8--;
  } else {





   VAR_6 = 0;
  }
 }





 if (VAR_8 > 0 && FUNC_2(VAR_3[VAR_8 - 1][0])) {
  char *VAR_11;

  VAR_9 = 0;
  VAR_7 = VAR_6;
  VAR_6 = FUNC_3(VAR_3[VAR_8 - 1], &VAR_11, 10);

  if (*VAR_11 == '\0' && VAR_9 == 0) {
   if (VAR_6 == 0) {
    (void) FUNC_0(VAR_1, "%s", FUNC_1("interval "
        "cannot be zero\n"));
    FUNC_4(VAR_0);
   }




   VAR_8--;
  } else {
   VAR_6 = 0;
  }
 }

 *VAR_4 = VAR_6;
 *VAR_5 = VAR_7;
 *VAR_2 = VAR_8;
}
