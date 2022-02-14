
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (char**,size_t*,size_t*,int) ;
 int FUNC_7 (int,int *) ;

char *
FUNC_8(FILE *VAR_5, int *VAR_6, size_t *VAR_7)
{
 char *VAR_8;
 size_t VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_4 = 0;


 VAR_12 = VAR_13 = 0;
 while ((VAR_11 = FUNC_3(VAR_5)) != VAR_2) {
  if (VAR_11 == '\n') {

   if (!VAR_12)
    break;
   if (VAR_6 != ((void*)0))
    ++*VAR_6;
   VAR_12 = 0;
  } else if (VAR_12) {

   break;
  } else if (VAR_11 == '#') {

   while ((VAR_11 = FUNC_3(VAR_5)) != VAR_2)
    if (VAR_11 == '\n')
     break;
   break;
  } else if (VAR_11 == '\\') {
   VAR_12 = 1;
  } else if (!FUNC_4(VAR_11)) {
   break;
  }
 }
 if (VAR_11 == VAR_2)
  return (((void*)0));
 FUNC_7(VAR_11, VAR_5);
 if (VAR_11 == '\n')
  return (((void*)0));

 VAR_8 = ((void*)0);
 VAR_9 = VAR_10 = 0;
 while ((VAR_11 = FUNC_1(VAR_5)) != VAR_2 && (!FUNC_4(VAR_11) || VAR_13 || VAR_12)) {
  if (VAR_11 == '\\' && !VAR_12 && VAR_13 != '\'') {

   VAR_12 = VAR_11;
  } else if ((VAR_11 == '\'' || VAR_11 == '"') && !VAR_13 && !VAR_12) {

   VAR_13 = VAR_11;

   if (FUNC_6(&VAR_8, &VAR_9, &VAR_10, 0) != 0)
    return (((void*)0));
  } else if (VAR_11 == VAR_13 && !VAR_12) {

   VAR_13 = 0;
  } else if (VAR_11 == '\n' && VAR_12) {

   VAR_12 = 0;
  } else {
   if (VAR_12 && VAR_13 && VAR_11 != '\\' && VAR_11 != VAR_13 &&
       FUNC_6(&VAR_8, &VAR_9, &VAR_10, '\\') != 0) {
    FUNC_2(VAR_8);
    VAR_4 = VAR_1;
    return (((void*)0));
   }
   if (FUNC_6(&VAR_8, &VAR_9, &VAR_10, VAR_11) != 0) {
    FUNC_2(VAR_8);
    VAR_4 = VAR_1;
    return (((void*)0));
   }
   VAR_12 = 0;
  }
  if (VAR_6 != ((void*)0) && VAR_11 == '\n')
   ++*VAR_6;
 }
 if (VAR_11 == VAR_2 && FUNC_0(VAR_5)) {
  VAR_14 = VAR_4;
  FUNC_2(VAR_8);
  VAR_4 = VAR_14;
  return (((void*)0));
 }
 if (VAR_11 == VAR_2 && (VAR_12 || VAR_13)) {

  FUNC_5(VAR_3, "unexpected end of file");
  FUNC_2(VAR_8);
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 FUNC_7(VAR_11, VAR_5);
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_10;
 return (VAR_8);
}
