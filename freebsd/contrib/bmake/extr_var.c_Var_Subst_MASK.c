
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GNode ;
typedef int Buffer ;
typedef int Boolean ;


 char const VAR_0 ;
 char const VAR_1 ;
 int FUNC_0 (int *,char const) ;
 int FUNC_1 (int *,int,char const*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 char const VAR_4 ;
 char const VAR_5 ;
 int FUNC_4 (int ,char*,int,char const*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_5 (char const*,int *,int,int*,void**) ;
 int FUNC_6 (void*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*,int) ;
 char* VAR_11 ;
 char* VAR_12 ;

char *
FUNC_9(const char *VAR_13, const char *VAR_14, GNode *VAR_15, int VAR_16)
{
    Buffer VAR_17;
    char *VAR_18;
    int VAR_19;
    Boolean VAR_20;
    void *VAR_21 = ((void*)0);
    static Boolean VAR_22;



    FUNC_3(&VAR_17, 0);
    VAR_22 = VAR_2;
    VAR_20 = VAR_2;

    while (*VAR_14) {
 if (*VAR_14 == '\n' && VAR_20)
     FUNC_0(&VAR_17, ' ');
 if (VAR_13 == ((void*)0) && (*VAR_14 == '$') && (VAR_14[1] == '$')) {





     if (VAR_10 && (VAR_16 & VAR_7))
  FUNC_0(&VAR_17, *VAR_14);
     VAR_14++;
     FUNC_0(&VAR_17, *VAR_14);
     VAR_14++;
 } else if (*VAR_14 != '$') {




     const char *VAR_23;

     for (VAR_23 = VAR_14++; *VAR_14 != '$' && *VAR_14 != '\0'; VAR_14++)
  continue;
     FUNC_1(&VAR_17, VAR_14 - VAR_23, VAR_23);
 } else {
     if (VAR_13 != ((void*)0)) {
  int VAR_24;
  for (;;) {
      if (VAR_14[1] == '\0') {

   FUNC_0(&VAR_17, VAR_14[0]);
   VAR_14++;
   VAR_24 = VAR_2;
      } else if (VAR_14[1] != VAR_5 && VAR_14[1] != VAR_1) {
   if (VAR_14[1] != *VAR_13 || FUNC_7(VAR_13) > 1) {
       FUNC_1(&VAR_17, 2, VAR_14);
       VAR_14 += 2;
       VAR_24 = VAR_2;
   }
   else
       VAR_24 = VAR_6;
   break;
      }
      else {
   const char *VAR_25;




   for (VAR_25 = &VAR_14[2]; *VAR_25 &&
        *VAR_25 != ':' && *VAR_25 != VAR_4 && *VAR_25 != VAR_0; VAR_25++)
       if (*VAR_25 == '$')
    break;





   if (*VAR_25 == '$') {
       FUNC_1(&VAR_17, VAR_25 - VAR_14, VAR_14);
       VAR_14 = VAR_25;
       continue;
   }

   if (FUNC_8(VAR_13, VAR_14 + 2, VAR_25 - VAR_14 - 2) != 0 ||
       VAR_13[VAR_25 - VAR_14 - 2] != '\0') {




       for (;*VAR_25 != '$' && *VAR_25 != '\0'; VAR_25++)
    continue;
       FUNC_1(&VAR_17, VAR_25 - VAR_14, VAR_14);
       VAR_14 = VAR_25;
       VAR_24 = VAR_2;
   }
   else
       VAR_24 = VAR_6;
   break;
      }
  }
  if (!VAR_24)
      continue;
     }

     VAR_18 = FUNC_5(VAR_14, VAR_15, VAR_16, &VAR_19, &VAR_21);







     if (VAR_18 == VAR_12 || VAR_18 == VAR_11) {






  if (VAR_9) {
      VAR_14 += VAR_19;
  } else if ((VAR_16 & VAR_8) || VAR_18 == VAR_12) {





      if (!VAR_22) {
   FUNC_4(VAR_3,
         "Undefined variable \"%.*s\"",VAR_19,VAR_14);
      }
      VAR_14 += VAR_19;
      VAR_22 = VAR_6;
  } else {
      FUNC_0(&VAR_17, *VAR_14);
      VAR_14 += 1;
  }
     } else {




  VAR_14 += VAR_19;





  VAR_19 = FUNC_7(VAR_18);
  FUNC_1(&VAR_17, VAR_19, VAR_18);
  VAR_20 = VAR_19 > 0 && VAR_18[VAR_19 - 1] == '\\';
     }
     FUNC_6(VAR_21);
     VAR_21 = ((void*)0);
 }
    }

    return FUNC_2(&VAR_17);
}
