
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Linetype ;
typedef int Comment_state ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 () ;
 int * VAR_17 ;
 int FUNC_2 (char*,int ,int ) ;
 int * FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const**) ;
 scalar_t__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char const* VAR_21 ;
 size_t VAR_22 ;
 int * VAR_23 ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char const*,int) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;
 char const* VAR_24 ;
 int ** VAR_25 ;

__attribute__((used)) static Linetype
FUNC_10(void)
{
 const char *VAR_26;
 int VAR_27;
 int VAR_28;
 Linetype VAR_29;
 Comment_state VAR_30;

 if (FUNC_3(VAR_24, VAR_16, VAR_20) == ((void*)0))
  return (VAR_9);
 VAR_29 = VAR_13;
 VAR_30 = VAR_19;
 VAR_26 = FUNC_6(VAR_24);
 if (VAR_22 == VAR_2) {
  if (*VAR_26 == '#') {
   VAR_22 = VAR_1;
   VAR_26 = FUNC_6(VAR_26 + 1);
  } else if (*VAR_26 != '\0')
   VAR_22 = VAR_0;
 }
 if (!VAR_19 && VAR_22 == VAR_1) {
  VAR_21 = VAR_24 + (VAR_26 - VAR_24);
  VAR_26 = FUNC_7(VAR_26);
  VAR_28 = VAR_26 - VAR_21;

  if (FUNC_9(VAR_26, "\\\n", 2) == 0)
   FUNC_0();
  if (FUNC_8("ifdef", VAR_21, VAR_28) == 0 ||
      FUNC_8("ifndef", VAR_21, VAR_28) == 0) {
   VAR_26 = FUNC_6(VAR_26);
   if ((VAR_27 = FUNC_4(VAR_26)) < 0)
    VAR_29 = VAR_12;
   else {
    VAR_29 = (VAR_21[2] == 'n')
        ? VAR_10 : VAR_14;
    if (VAR_25[VAR_27] == ((void*)0))
     VAR_29 = (VAR_29 == VAR_14)
         ? VAR_10 : VAR_14;
    if (VAR_18[VAR_27])
     VAR_29 = (VAR_29 == VAR_14)
         ? VAR_15 : VAR_11;
   }
   VAR_26 = FUNC_7(VAR_26);
  } else if (FUNC_8("if", VAR_21, VAR_28) == 0)
   VAR_29 = FUNC_5(&VAR_26);
  else if (FUNC_8("elif", VAR_21, VAR_28) == 0)
   VAR_29 = FUNC_5(&VAR_26) - VAR_12 + VAR_5;
  else if (FUNC_8("else", VAR_21, VAR_28) == 0)
   VAR_29 = VAR_6;
  else if (FUNC_8("endif", VAR_21, VAR_28) == 0)
   VAR_29 = VAR_8;
  else {
   VAR_22 = VAR_0;
   VAR_29 = VAR_13;
  }
  VAR_26 = FUNC_6(VAR_26);
  if (*VAR_26 != '\0') {
   VAR_22 = VAR_0;
   if (VAR_29 == VAR_14 || VAR_29 == VAR_10 ||
       VAR_29 == VAR_15 || VAR_29 == VAR_11)
    VAR_29 = VAR_12;
   if (VAR_29 == VAR_7 || VAR_29 == VAR_4)
    VAR_29 = VAR_5;
  }
  if (VAR_29 != VAR_13 && (VAR_30 || VAR_19)) {
   VAR_29 += VAR_3;
   if (VAR_19)
    VAR_22 = VAR_0;
  }

  if (VAR_22 == VAR_1)
   FUNC_1();
 }
 if (VAR_22 == VAR_0) {
  while (*VAR_26 != '\0')
   VAR_26 = FUNC_6(VAR_26 + 1);
 }
 FUNC_2("parser %s comment %s line",
     VAR_17[VAR_19], VAR_23[VAR_22]);
 return (VAR_29);
}
