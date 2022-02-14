
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int log ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (char const*,char const*,int,int,int,int,char const*) ;
 char* FUNC_2 (char**,char*) ;
 int FUNC_3 (char*,int,char const*,int ) ;

void
FUNC_4(const char *VAR_18, const char *VAR_19, int VAR_20, int VAR_21,
    int VAR_22, int VAR_23, const char *VAR_24, va_list VAR_25)
{
 char VAR_26[VAR_9];
 char *VAR_27, *VAR_28;
 const char *VAR_29;
 int VAR_30;

 FUNC_0(VAR_15 == VAR_8);
 FUNC_0(VAR_16 == VAR_11 ||
     VAR_16 == VAR_12 ||
     VAR_16 == VAR_10);
 FUNC_0(VAR_16 != VAR_10 || VAR_17 >= 0);
 FUNC_0(VAR_21 == VAR_3 || VAR_21 == VAR_0 ||
     VAR_21 == VAR_1 || VAR_21 == VAR_4 ||
     VAR_21 == VAR_7 || VAR_21 == VAR_6 ||
     VAR_21 == VAR_5 || VAR_21 == VAR_2);
 FUNC_0(VAR_21 != VAR_2 || VAR_22 > 0);
 FUNC_0(VAR_22 <= 127);
 FUNC_0(VAR_23 >= -1);


 if (VAR_21 == VAR_2 && VAR_22 > VAR_14)
  return;

 VAR_30 = VAR_13;

 FUNC_3(VAR_26, sizeof(VAR_26), VAR_24, VAR_25);
 VAR_27 = VAR_26;
 VAR_29 = ((void*)0);

 while ((VAR_28 = FUNC_2(&VAR_27, "\n")) != ((void*)0)) {
  if (*VAR_28 == '\0')
   continue;
  if (VAR_29 != ((void*)0)) {
   FUNC_1(VAR_18, VAR_19, VAR_20, VAR_21,
       VAR_22, -1, VAR_29);
  }
  VAR_29 = VAR_28;
 }
 if (VAR_29 == ((void*)0))
  VAR_29 = "";
 FUNC_1(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22,
     VAR_23, VAR_29);

 VAR_13 = VAR_30;
}
