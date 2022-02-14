
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
 char* FUNC_0 (char const*,int*) ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 char** VAR_8 ;
 char* FUNC_2 (int,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char*,char*,char const*,char const*) ;
 int FUNC_7 (char const*) ;

int
FUNC_8(const char *VAR_10, const char *VAR_11)
{
 char *VAR_12, *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (!VAR_6 && VAR_9 > 0)
  return (FUNC_5(VAR_10, VAR_11));

 VAR_0;

 VAR_15 = FUNC_7(VAR_10) + 1;
 if (VAR_15 > VAR_1 + 1)
  return (-1);
 VAR_16 = FUNC_7(VAR_11) + 1;
 if (VAR_16 > VAR_2 + 1)
  return (-1);
 VAR_12 = FUNC_2(VAR_15 + VAR_16, VAR_4, VAR_5);
 FUNC_6(VAR_12, "%s=%s", VAR_10, VAR_11);

 FUNC_3(&VAR_7);
 VAR_13 = FUNC_0(VAR_10, &VAR_17);
 if (VAR_13 != ((void*)0)) {
  VAR_14 = VAR_8[VAR_17];
  VAR_8[VAR_17] = VAR_12;
  FUNC_4(&VAR_7);
  FUNC_1(VAR_14, VAR_4);
 } else {

  for (VAR_17 = 0; (VAR_13 = VAR_8[VAR_17]) != ((void*)0); VAR_17++)
   ;


  if (VAR_17 < 0 || VAR_17 >= VAR_3) {
   FUNC_1(VAR_12, VAR_4);
   FUNC_4(&VAR_7);
   return (-1);
  }

  VAR_8[VAR_17] = VAR_12;
  VAR_8[VAR_17 + 1] = ((void*)0);
  FUNC_4(&VAR_7);
 }
 return (0);
}
