
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_6(int VAR_1)
{
 static char *VAR_2 = ((void*)0);
 const char *VAR_3, *VAR_4;
 size_t VAR_5;


 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }




 if ((VAR_3 = FUNC_1("bootfile")) == ((void*)0))
  VAR_3 = VAR_0;

 while ((VAR_1 > 0) && (VAR_3 != ((void*)0))) {
  VAR_3 = FUNC_3(VAR_3, ';');
  if (VAR_3)
   VAR_3++;
  VAR_1--;
 }
 if (VAR_3 != ((void*)0)) {
  if ((VAR_4 = FUNC_3(VAR_3, ';')) != ((void*)0)) {
   VAR_5 = VAR_4 - VAR_3;
  } else {
   VAR_5 = FUNC_4(VAR_3);
  }
  VAR_2 = FUNC_2(VAR_5 + 1);
  FUNC_5(VAR_2, VAR_3, VAR_5);
  VAR_2[VAR_5] = 0;
 }
 if (VAR_2 && VAR_2[0] == 0) {
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }
 return(VAR_2);
}
