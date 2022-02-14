
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ,int ) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_11)
{

  char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
  const char *VAR_15;
  VAR_13 = FUNC_2(VAR_11);
  for (VAR_15 = VAR_11; *VAR_15 != '\0'; VAR_15++) {
    if (*VAR_15 != '$') {
      continue;
    }
    if (VAR_14 != ((void*)0)) {
      FUNC_0(VAR_13);
      VAR_13 = VAR_14;
    }







    if ((VAR_14 = FUNC_1(VAR_13, VAR_4, VAR_0)) != ((void*)0)) {
      continue;
    }

    if ((VAR_14 = FUNC_1(VAR_13, VAR_5, VAR_0)) != ((void*)0)) {
      continue;
    }

    if ((VAR_14 = FUNC_1(VAR_13, VAR_6, VAR_1)) != ((void*)0)) {
      continue;
    }

    if ((VAR_14 = FUNC_1(VAR_13, VAR_8, VAR_2)) != ((void*)0)) {
      continue;
    }




    if ((VAR_14 = FUNC_1(VAR_13, VAR_9, VAR_3)) != ((void*)0)) {
      continue;
    }

    if ((VAR_14 = FUNC_1(VAR_13, VAR_10, VAR_3)) != ((void*)0)) {
      continue;
    }

    if ((VAR_14 = FUNC_1(VAR_13, VAR_7, VAR_0)) != ((void*)0)) {
      continue;
    }
  }
  if (VAR_14 == ((void*)0)) {
    VAR_12 = VAR_13;
  }
  else {
    VAR_12 = VAR_14;
    FUNC_0(VAR_13);
  }

  return VAR_12;
}
