
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char* const*,char const*,struct option const*,int*,int) ;
 int FUNC_2 (int,int,int,char* const*) ;
 char* VAR_15 ;
 int VAR_16 ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(int VAR_17, char * const *VAR_18, const char *VAR_19,
 const struct option *VAR_20, int *VAR_21, int VAR_22)
{
 char *VAR_23;
 int VAR_24, VAR_25;
 static int VAR_26 = -1;

 if (VAR_19 == ((void*)0))
  return (-1);





 if (VAR_12 == 0)
  VAR_12 = VAR_14 = 1;





 if (VAR_26 == -1 || VAR_14)
  VAR_26 = (FUNC_0("POSIXLY_CORRECT") != ((void*)0));
 if (*VAR_19 == '-')
  VAR_22 |= VAR_3;
 else if (VAR_26 || *VAR_19 == '+')
  VAR_22 &= ~VAR_5;
 if (*VAR_19 == '+' || *VAR_19 == '-')
  VAR_19++;

 VAR_11 = ((void*)0);
 if (VAR_14)
  VAR_10 = VAR_9 = -1;
start:
 if (VAR_14 || !*VAR_15) {
  VAR_14 = 0;
  if (VAR_12 >= VAR_17) {
   VAR_15 = VAR_2;
   if (VAR_9 != -1) {

    FUNC_2(VAR_10, VAR_9,
        VAR_12, VAR_18);
    VAR_12 -= VAR_9 - VAR_10;
   }
   else if (VAR_10 != -1) {




    VAR_12 = VAR_10;
   }
   VAR_10 = VAR_9 = -1;
   return (-1);
  }
  if (*(VAR_15 = VAR_18[VAR_12]) != '-' ||
      (VAR_15[1] == '\0' && FUNC_3(VAR_19, '-') == ((void*)0))) {
   VAR_15 = VAR_2;
   if (VAR_22 & VAR_3) {




    VAR_11 = VAR_18[VAR_12++];
    return (VAR_6);
   }
   if (!(VAR_22 & VAR_5)) {




    return (-1);
   }

   if (VAR_10 == -1)
    VAR_10 = VAR_12;
   else if (VAR_9 != -1) {
    FUNC_2(VAR_10, VAR_9,
        VAR_12, VAR_18);
    VAR_10 = VAR_12 -
        (VAR_9 - VAR_10);
    VAR_9 = -1;
   }
   VAR_12++;

   goto start;
  }
  if (VAR_10 != -1 && VAR_9 == -1)
   VAR_9 = VAR_12;




  if (VAR_15[1] != '\0' && *++VAR_15 == '-' && VAR_15[1] == '\0') {
   VAR_12++;
   VAR_15 = VAR_2;




   if (VAR_9 != -1) {
    FUNC_2(VAR_10, VAR_9,
        VAR_12, VAR_18);
    VAR_12 -= VAR_9 - VAR_10;
   }
   VAR_10 = VAR_9 = -1;
   return (-1);
  }
 }







 if (VAR_20 != ((void*)0) && VAR_15 != VAR_18[VAR_12] &&
     (*VAR_15 == '-' || (VAR_22 & VAR_4))) {
  VAR_25 = 0;
  if (*VAR_15 == '-')
   VAR_15++;
  else if (*VAR_15 != ':' && FUNC_3(VAR_19, *VAR_15) != ((void*)0))
   VAR_25 = 1;

  VAR_24 = FUNC_1(VAR_18, VAR_19, VAR_20,
      VAR_21, VAR_25);
  if (VAR_24 != -1) {
   VAR_15 = VAR_2;
   return (VAR_24);
  }
 }

 if ((VAR_24 = (int)*VAR_15++) == (int)':' ||
     (VAR_24 == (int)'-' && *VAR_15 != '\0') ||
     (VAR_23 = FUNC_3(VAR_19, VAR_24)) == ((void*)0)) {





  if (VAR_24 == (int)'-' && *VAR_15 == '\0')
   return (-1);
  if (!*VAR_15)
   ++VAR_12;
  if (VAR_7)
   FUNC_4(VAR_8, VAR_24);
  VAR_13 = VAR_24;
  return (VAR_1);
 }
 if (VAR_20 != ((void*)0) && VAR_24 == 'W' && VAR_23[1] == ';') {

  if (*VAR_15)
                ;
  else if (++VAR_12 >= VAR_17) {
   VAR_15 = VAR_2;
   if (VAR_7)
    FUNC_4(VAR_16, VAR_24);
   VAR_13 = VAR_24;
   return (VAR_0);
  } else
   VAR_15 = VAR_18[VAR_12];
  VAR_24 = FUNC_1(VAR_18, VAR_19, VAR_20,
      VAR_21, 0);
  VAR_15 = VAR_2;
  return (VAR_24);
 }
 if (*++VAR_23 != ':') {
  if (!*VAR_15)
   ++VAR_12;
 } else {
  VAR_11 = ((void*)0);
  if (*VAR_15)
   VAR_11 = VAR_15;
  else if (VAR_23[1] != ':') {
   if (++VAR_12 >= VAR_17) {
    VAR_15 = VAR_2;
    if (VAR_7)
     FUNC_4(VAR_16, VAR_24);
    VAR_13 = VAR_24;
    return (VAR_0);
   } else
    VAR_11 = VAR_18[VAR_12];
  }
  VAR_15 = VAR_2;
  ++VAR_12;
 }

 return (VAR_24);
}
