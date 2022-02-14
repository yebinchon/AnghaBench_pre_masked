
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;
 char* FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (size_t) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{

  char *VAR_3 = ((void*)0), *VAR_4, *VAR_5, *VAR_6;
  size_t VAR_7, VAR_8, VAR_9, VAR_10;


  if ((VAR_4 = FUNC_5(VAR_0, VAR_1)) == ((void*)0)) {
    return VAR_3;
  }
  VAR_5 = (FUNC_2(VAR_1) - 1) + VAR_4;


  VAR_6 = (FUNC_2(VAR_0) - 1) + (char*)VAR_0;


  VAR_8 = (size_t)(VAR_4 - VAR_0);


  VAR_9 = (size_t)(VAR_6 - VAR_5);

  VAR_10 = FUNC_2(VAR_2);

  VAR_7 = (VAR_8 + VAR_10 + VAR_9 + 1);

  VAR_3 = (char*)FUNC_6(VAR_7);
  FUNC_1(VAR_3, 0, VAR_7);
  (void)FUNC_4(VAR_3, VAR_0, VAR_8);
  (void)FUNC_3(VAR_3, VAR_2, VAR_10);
  (void)FUNC_3(VAR_3, VAR_5 + 1, VAR_9);

  if (FUNC_5(VAR_3, VAR_1) != ((void*)0)) {




    char* VAR_11;
    if ((VAR_11 = FUNC_7(VAR_3, VAR_1, VAR_2)) != ((void*)0)) {
      FUNC_0(VAR_3);
      VAR_3 = VAR_11;
    }
  }
  return VAR_3;
}
