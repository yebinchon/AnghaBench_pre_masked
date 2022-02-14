
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;



 size_t FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;

__attribute__((used)) static Char *
FUNC_8(Char *VAR_3, Char **VAR_4, int VAR_5)
{
    size_t VAR_6;
    Char **VAR_7, *VAR_8, *VAR_9;

    switch (VAR_5) {
    case 129:
 FUNC_3(FUNC_4(VAR_3));
 FUNC_2(VAR_4);
 FUNC_5(VAR_1 | VAR_0);
 break;
    case 130:
 VAR_6 = 0;
 for (VAR_7 = VAR_4; (VAR_8 = *VAR_7++) != ((void*)0); VAR_6++)
     VAR_6 += FUNC_0(VAR_8);
 VAR_3 = FUNC_7(VAR_6 * sizeof(Char));
 for (VAR_7 = VAR_4, VAR_9 = VAR_3; (VAR_8 = *VAR_7++) != ((void*)0); VAR_6++) {
     while (*VAR_8)
   *VAR_9++ = *VAR_8++ & VAR_2;
     *VAR_9++ = ' ';
 }
 *--VAR_9 = '\0';
 FUNC_2(VAR_4);
 break;
    case 128:
 VAR_3 = FUNC_1(FUNC_6(*VAR_4));
 FUNC_2(VAR_4);
 break;
    default:
 break;
    }
    return (VAR_3);
}
