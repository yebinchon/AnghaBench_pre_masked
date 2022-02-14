
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
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(char *VAR_6, char *VAR_7)
{
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;

 VAR_10 = (char *)FUNC_1(VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 for (VAR_8 = VAR_6, VAR_9 = VAR_6; VAR_9 != ((void*)0); VAR_8 = VAR_9 + 1) {
  if (FUNC_5(VAR_8, VAR_2) == VAR_8)
   VAR_11 = VAR_7;
  else if (FUNC_5(VAR_8, VAR_3) == VAR_8)
   VAR_11 = VAR_7;
  else if (FUNC_5(VAR_8, VAR_4) == VAR_8)
   VAR_11 = VAR_7;
  else if (FUNC_5(VAR_8, VAR_5) == VAR_8)
   VAR_11 = VAR_7;
  else
   VAR_11 = VAR_10;

  VAR_9 = FUNC_3(VAR_8, ',');
  if (VAR_9 != ((void*)0))
   *VAR_9 = '\0';

  if (*VAR_11 != '\0')
   FUNC_2(VAR_11, ",");
  FUNC_2(VAR_11, VAR_8);
 }

 FUNC_4(VAR_6, VAR_10);
 FUNC_0((unsigned long)VAR_10);

 return 0;
}
