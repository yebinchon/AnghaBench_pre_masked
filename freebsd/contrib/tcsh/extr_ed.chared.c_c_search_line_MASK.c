
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;
typedef int CCRETVAL ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 size_t FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static CCRETVAL
FUNC_3(Char *VAR_6, int VAR_7)
{
    Char *VAR_8;
    size_t VAR_9;

    VAR_9 = FUNC_1(VAR_6);

    if (VAR_7 == VAR_3) {
 for (VAR_8 = VAR_2; VAR_8 >= VAR_4; VAR_8--)
     if (FUNC_2(VAR_8, VAR_6, VAR_9) == 0 ||
  FUNC_0(VAR_8, VAR_6)) {
  VAR_2 = VAR_8;
  return(VAR_1);
     }
 return(VAR_0);
    } else {
 for (VAR_8 = VAR_2; *VAR_8 != '\0' && VAR_8 < VAR_5; VAR_8++)
     if (FUNC_2(VAR_8, VAR_6, VAR_9) == 0 ||
  FUNC_0(VAR_8, VAR_6)) {
  VAR_2 = VAR_8;
  return(VAR_1);
     }
 return(VAR_0);
    }
}
