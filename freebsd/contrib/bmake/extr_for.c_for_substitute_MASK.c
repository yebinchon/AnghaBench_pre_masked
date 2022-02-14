
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strlist_t ;
typedef int Buffer ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,unsigned int) ;
 char* FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_6(Buffer *VAR_2, strlist_t *VAR_3, unsigned int VAR_4, char VAR_5)
{
    const char *VAR_6 = FUNC_5(VAR_3, VAR_4);
    int VAR_7;
    char VAR_8;



    if (!(FUNC_4(VAR_3, VAR_4) &
     (VAR_5 == ')' ? ~VAR_0 : ~VAR_1))) {
 FUNC_1(VAR_2, FUNC_3(VAR_6), VAR_6);
 return;
    }


    while ((VAR_8 = *VAR_6++) != 0) {
 if (VAR_8 == '$') {
     VAR_7 = FUNC_2(VAR_6);
     if (VAR_7 != 0) {
  FUNC_1(VAR_2, VAR_7 + 1, VAR_6 - 1);
  VAR_6 += VAR_7;
  continue;
     }
     FUNC_0(VAR_2, '\\');
 } else if (VAR_8 == ':' || VAR_8 == '\\' || VAR_8 == VAR_5)
     FUNC_0(VAR_2, '\\');
 FUNC_0(VAR_2, VAR_8);
    }
}
