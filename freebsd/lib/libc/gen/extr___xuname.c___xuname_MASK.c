
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int*,int,char*,size_t*,int *,int ) ;

int
FUNC_3(int VAR_9, void *VAR_10)
{
 int VAR_11[2], VAR_12;
 size_t VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16;

 VAR_12 = 0;
 VAR_15 = (char *)VAR_10;

 VAR_11[0] = VAR_1;

 if ((VAR_14 = FUNC_0("UNAME_s")))
  FUNC_1(VAR_15, VAR_14, VAR_9);
 else {
  VAR_11[1] = VAR_6;
  VAR_13 = VAR_9;
  VAR_16 = VAR_8;
  if (FUNC_2(VAR_11, 2, VAR_15, &VAR_13, ((void*)0), 0) == -1) {
   if (VAR_8 == VAR_2)
    VAR_8 = VAR_16;
   else
    VAR_12 = -1;
  }
  VAR_15[VAR_9 - 1] = '\0';
 }
 VAR_15 += VAR_9;

 VAR_11[1] = VAR_4;
 VAR_13 = VAR_9;
 VAR_16 = VAR_8;
 if (FUNC_2(VAR_11, 2, VAR_15, &VAR_13, ((void*)0), 0) == -1) {
  if (VAR_8 == VAR_2)
   VAR_8 = VAR_16;
  else
   VAR_12 = -1;
 }
 VAR_15[VAR_9 - 1] = '\0';
 VAR_15 += VAR_9;

 if ((VAR_14 = FUNC_0("UNAME_r")))
  FUNC_1(VAR_15, VAR_14, VAR_9);
 else {
  VAR_11[1] = VAR_5;
  VAR_13 = VAR_9;
  VAR_16 = VAR_8;
  if (FUNC_2(VAR_11, 2, VAR_15, &VAR_13, ((void*)0), 0) == -1) {
   if (VAR_8 == VAR_2)
    VAR_8 = VAR_16;
   else
    VAR_12 = -1;
  }
  VAR_15[VAR_9 - 1] = '\0';
 }
 VAR_15 += VAR_9;

 if ((VAR_14 = FUNC_0("UNAME_v")))
  FUNC_1(VAR_15, VAR_14, VAR_9);
 else {





  VAR_11[1] = VAR_7;
  VAR_13 = VAR_9;
  VAR_16 = VAR_8;
  if (FUNC_2(VAR_11, 2, VAR_15, &VAR_13, ((void*)0), 0) == -1) {
   if (VAR_8 == VAR_2)
    VAR_8 = VAR_16;
   else
    VAR_12 = -1;
  }
  VAR_15[VAR_9 - 1] = '\0';
  for (VAR_14 = VAR_15; VAR_13--; ++VAR_14) {
   if (*VAR_14 == '\n' || *VAR_14 == '\t') {
    if (VAR_13 > 1)
     *VAR_14 = ' ';
    else
     *VAR_14 = '\0';
   }
  }
 }
 VAR_15 += VAR_9;

 if ((VAR_14 = FUNC_0("UNAME_m")))
  FUNC_1(VAR_15, VAR_14, VAR_9);
 else {
  VAR_11[0] = VAR_0;
  VAR_11[1] = VAR_3;
  VAR_13 = VAR_9;
  VAR_16 = VAR_8;
  if (FUNC_2(VAR_11, 2, VAR_15, &VAR_13, ((void*)0), 0) == -1) {
   if (VAR_8 == VAR_2)
    VAR_8 = VAR_16;
   else
    VAR_12 = -1;
  }
  VAR_15[VAR_9 - 1] = '\0';
 }

 return (VAR_12);
}
