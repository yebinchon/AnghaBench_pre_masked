
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ,char*) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1,
        size_t VAR_2,
        const char *VAR_3,
        const char *VAR_4)
{
  char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);


  VAR_7 = (char*)VAR_4;
  if ((VAR_5 = FUNC_2(VAR_4, VAR_0, "${key}")) != ((void*)0)) {
    VAR_7 = VAR_5;




    if ((VAR_6 = FUNC_1(VAR_5)) != ((void*)0)) {
      VAR_7 = VAR_6;
    }
  }




  else if (VAR_7 != ((void*)0) && (VAR_5 = FUNC_1(VAR_7)) != ((void*)0)) {
    VAR_7 = VAR_5;
  }

  if (VAR_7 != ((void*)0)) {
    FUNC_3(VAR_1, VAR_7, VAR_2);
  }
  FUNC_0(VAR_5);
  FUNC_0(VAR_6);
}
