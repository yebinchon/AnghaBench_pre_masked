
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char const* name; scalar_t__ has_arg; scalar_t__* flag; scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 char* FUNC_0 (char const*,char) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 int FUNC_3 (int ,char const*,...) ;

__attribute__((used)) static int
FUNC_4(char * const *VAR_16, const char *VAR_17,
 const struct option *VAR_18, int *VAR_19, int VAR_20, int VAR_21)
{
 const char *VAR_22, *VAR_23;



 size_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_22 = VAR_13;
 VAR_26 = -1;
 VAR_27 = 0;
 VAR_28 = 0;

 VAR_10++;

 if ((VAR_23 = FUNC_0(VAR_22, '=')) != ((void*)0)) {

  VAR_24 = VAR_23 - VAR_22;
  VAR_23++;
 } else
  VAR_24 = FUNC_1(VAR_22);

 for (VAR_25 = 0; VAR_18[VAR_25].name; VAR_25++) {

  if (FUNC_2(VAR_22, VAR_18[VAR_25].name,
      VAR_24))
   continue;

  if (FUNC_1(VAR_18[VAR_25].name) == VAR_24) {

   VAR_26 = VAR_25;
   VAR_27 = 1;
   break;
  }




  if (VAR_20 && VAR_24 == 1)
   continue;

  if (VAR_26 == -1)
   VAR_26 = VAR_25;
  else if ((VAR_21 & VAR_2) ||
    VAR_18[VAR_25].has_arg !=
        VAR_18[VAR_26].has_arg ||
    VAR_18[VAR_25].flag != VAR_18[VAR_26].flag ||
    VAR_18[VAR_25].val != VAR_18[VAR_26].val)
   VAR_28 = 1;
 }
 if (!VAR_27 && VAR_28) {

  if (VAR_3)
   FUNC_3(VAR_4,



        (int)VAR_24,
        VAR_22);
  VAR_12 = 0;
  return (VAR_1);
 }
 if (VAR_26 != -1) {
  if (VAR_18[VAR_26].has_arg == VAR_7
      && VAR_23) {
   if (VAR_3)
    FUNC_3(VAR_8,



         (int)VAR_24,
         VAR_22);



   if (VAR_18[VAR_26].flag == ((void*)0))
    VAR_12 = VAR_18[VAR_26].val;
   else
    VAR_12 = 0;



   return (VAR_0);

  }
  if (VAR_18[VAR_26].has_arg == VAR_15 ||
      VAR_18[VAR_26].has_arg == VAR_11) {
   if (VAR_23)
    VAR_9 = (char *)VAR_23;
   else if (VAR_18[VAR_26].has_arg ==
       VAR_15) {



    VAR_9 = VAR_16[VAR_10++];
   }
  }
  if ((VAR_18[VAR_26].has_arg == VAR_15)
      && (VAR_9 == ((void*)0))) {




   if (VAR_3)
    FUNC_3(VAR_14,



        VAR_22);



   if (VAR_18[VAR_26].flag == ((void*)0))
    VAR_12 = VAR_18[VAR_26].val;
   else
    VAR_12 = 0;
   --VAR_10;
   return (VAR_0);
  }
 } else {
  if (VAR_20) {
   --VAR_10;
   return (-1);
  }
  if (VAR_3)
   FUNC_3(VAR_6,



         VAR_22);
  VAR_12 = 0;
  return (VAR_1);
 }
 if (VAR_19)
  *VAR_19 = VAR_26;
 if (VAR_18[VAR_26].flag) {
  *VAR_18[VAR_26].flag = VAR_18[VAR_26].val;
  return (0);
 } else
  return (VAR_18[VAR_26].val);
}
