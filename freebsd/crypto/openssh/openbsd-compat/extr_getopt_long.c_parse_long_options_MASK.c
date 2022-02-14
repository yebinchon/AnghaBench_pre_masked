
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; scalar_t__ has_arg; int* flag; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 char* FUNC_0 (char*,char) ;
 size_t FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int ,...) ;

__attribute__((used)) static int
FUNC_4(char * const *VAR_14, const char *VAR_15,
 const struct option *VAR_16, int *VAR_17, int VAR_18)
{
 char *VAR_19, *VAR_20;
 size_t VAR_21;
 int VAR_22, VAR_23;

 VAR_19 = VAR_11;
 VAR_23 = -1;

 VAR_8++;

 if ((VAR_20 = FUNC_0(VAR_19, '=')) != ((void*)0)) {

  VAR_21 = VAR_20 - VAR_19;
  VAR_20++;
 } else
  VAR_21 = FUNC_1(VAR_19);

 for (VAR_22 = 0; VAR_16[VAR_22].name; VAR_22++) {

  if (FUNC_2(VAR_19, VAR_16[VAR_22].name,
      VAR_21))
   continue;

  if (FUNC_1(VAR_16[VAR_22].name) == VAR_21) {

   VAR_23 = VAR_22;
   break;
  }




  if (VAR_18 && VAR_21 == 1)
   continue;

  if (VAR_23 == -1)
   VAR_23 = VAR_22;
  else {

   if (VAR_2)
    FUNC_3(VAR_3, (int)VAR_21,
         VAR_19);
   VAR_10 = 0;
   return (VAR_1);
  }
 }
 if (VAR_23 != -1) {
  if (VAR_16[VAR_23].has_arg == VAR_5
      && VAR_20) {
   if (VAR_2)
    FUNC_3(VAR_6, (int)VAR_21,
         VAR_19);



   if (VAR_16[VAR_23].flag == ((void*)0))
    VAR_10 = VAR_16[VAR_23].val;
   else
    VAR_10 = 0;
   return (VAR_0);
  }
  if (VAR_16[VAR_23].has_arg == VAR_13 ||
      VAR_16[VAR_23].has_arg == VAR_9) {
   if (VAR_20)
    VAR_7 = VAR_20;
   else if (VAR_16[VAR_23].has_arg ==
       VAR_13) {



    VAR_7 = VAR_14[VAR_8++];
   }
  }
  if ((VAR_16[VAR_23].has_arg == VAR_13)
      && (VAR_7 == ((void*)0))) {




   if (VAR_2)
    FUNC_3(VAR_12,
        VAR_19);



   if (VAR_16[VAR_23].flag == ((void*)0))
    VAR_10 = VAR_16[VAR_23].val;
   else
    VAR_10 = 0;
   --VAR_8;
   return (VAR_0);
  }
 } else {
  if (VAR_18) {
   --VAR_8;
   return (-1);
  }
  if (VAR_2)
   FUNC_3(VAR_4, VAR_19);
  VAR_10 = 0;
  return (VAR_1);
 }
 if (VAR_17)
  *VAR_17 = VAR_23;
 if (VAR_16[VAR_23].flag) {
  *VAR_16[VAR_23].flag = VAR_16[VAR_23].val;
  return (0);
 } else
  return (VAR_16[VAR_23].val);
}
