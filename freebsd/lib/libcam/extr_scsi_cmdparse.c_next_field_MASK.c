
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const,...) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;
 int VAR_0 ;
 int FUNC_4 (char const*,char**,int) ;
 char FUNC_5 (char const) ;

__attribute__((used)) static int
FUNC_6(const char **VAR_1, char *VAR_2, int *VAR_3, int *VAR_4, char *VAR_5,
    int VAR_6, int *VAR_7, int *VAR_8)
{
 const char *VAR_9 = *VAR_1;
 char *VAR_10;

 int VAR_11 = 0;

 enum {
  BETWEEN_FIELDS,
  START_FIELD,
  GET_FIELD,
  DONE,
 } VAR_12;

 int VAR_13 = 0;
 int VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;

 VAR_14 = 8;
 *VAR_2 = 'i';
 VAR_15 = 1;
 if (VAR_5 != ((void*)0))
  *VAR_5 = '\0';

 VAR_12 = BETWEEN_FIELDS;

 while (VAR_12 != DONE) {
  switch(VAR_12) {
  case BETWEEN_FIELDS:
   if (*VAR_9 == '\0')
    VAR_12 = DONE;
   else if (FUNC_2(*VAR_9))
    VAR_9++;
   else if (*VAR_9 == '#') {
    while (*VAR_9 && *VAR_9 != '\n')
     VAR_9++;
    if (*VAR_9 != '\0')
     VAR_9++;
   } else if (*VAR_9 == '{') {
    int VAR_18 = 0;

    VAR_9++;

    while (*VAR_9 && *VAR_9 != '}') {
     if(VAR_5 && VAR_18 < VAR_6) {
      VAR_5[VAR_18] = *VAR_9;
      VAR_18++;
     }
     VAR_9++;
    }

    if(VAR_5 && VAR_18 < VAR_6)
     VAR_5[VAR_18] = '\0';

    if (*VAR_9 == '}')
     VAR_9++;
   } else if (*VAR_9 == '*') {
    VAR_9++;
    VAR_17 = 1;
   } else if (FUNC_3(*VAR_9)) {
    VAR_11 = 1;
    VAR_13 = FUNC_4(VAR_9, &VAR_10, 16);
    VAR_9 = VAR_10;
    VAR_12 = START_FIELD;
   } else if (FUNC_5(*VAR_9) == 'v') {
    VAR_9++;
    VAR_11 = 2;
    VAR_13 = *VAR_4;
    VAR_12 = START_FIELD;
   } else if (FUNC_5(*VAR_9) == 'i') {



    VAR_11 = 2;
    VAR_13 = *VAR_4;
    VAR_9++;

    *VAR_2 = 'i';
    VAR_14 = 8;
    VAR_15 = FUNC_4(VAR_9, &VAR_10, 10);
    VAR_9 = VAR_10;
    VAR_12 = DONE;

   } else if (FUNC_5(*VAR_9) == 't') {





    VAR_11 = 2;
    VAR_13 = *VAR_4;
    VAR_9++;

    *VAR_2 = 'b';
    VAR_14 = 1;
    VAR_15 = FUNC_4(VAR_9, &VAR_10, 10);
    VAR_9 = VAR_10;
    VAR_12 = DONE;
   } else if (FUNC_5(*VAR_9) == 's') {

    *VAR_2 = 's';
    VAR_9++;
    if (FUNC_5(*VAR_9) == 'v') {
     VAR_9++;
     VAR_11 = 2;
     VAR_13 = *VAR_4;
    } else {
     VAR_11 = 1;
     VAR_13 = FUNC_4(VAR_9, &VAR_10, 0);
     VAR_9 = VAR_10;
    }
    VAR_12 = DONE;
   } else {
    FUNC_0(VAR_0, "Invalid starting "
     "character: %c\n", *VAR_9);
    VAR_16 = 1;
    VAR_12 = DONE;
   }
   break;

  case START_FIELD:
   if (*VAR_9 == ':') {
    VAR_9++;
    VAR_14 = 1;

    VAR_12 = GET_FIELD;
   } else
    VAR_12 = DONE;
   break;

  case GET_FIELD:
   if (FUNC_1(*VAR_9)) {
    *VAR_2 = 'b';
    VAR_14 = 1;
    VAR_15 = FUNC_4(VAR_9, &VAR_10, 10);
    VAR_9 = VAR_10;
    VAR_12 = DONE;
   } else if (*VAR_9 == 'i') {


    VAR_9++;

    *VAR_2 = 'i';
    VAR_14 = 8;
    VAR_15 = FUNC_4(VAR_9, &VAR_10, 10);
    VAR_9 = VAR_10;
    VAR_12 = DONE;
   } else if (*VAR_9 == 'b') {


    VAR_9++;

    *VAR_2 = 'b';
    VAR_14 = 1;
    VAR_15 = FUNC_4(VAR_9, &VAR_10, 10);
    VAR_9 = VAR_10;
    VAR_12 = DONE;
   } else {
    FUNC_0(VAR_0, "Invalid startfield %c "
     "(%02x)\n", *VAR_9, *VAR_9);
    VAR_16 = 1;
    VAR_12 = DONE;
   }
   break;

  case DONE:
   break;
  }
 }

 if (VAR_16) {
  *VAR_7 = 1;
  return (0);
 }

 *VAR_7 = 0;
 *VAR_1 = VAR_9;
 *VAR_3 = VAR_15 * VAR_14;
 *VAR_4 = VAR_13;
 *VAR_8 = VAR_17;

 return (VAR_11);
}
