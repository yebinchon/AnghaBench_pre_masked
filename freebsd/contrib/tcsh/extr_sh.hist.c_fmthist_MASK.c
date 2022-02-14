
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Hist {int Hlex; int histline; int Hnum; } ;
typedef struct Hist* ptr_t ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

char *
FUNC_6(int VAR_2, ptr_t VAR_3)
{
    struct Hist *VAR_4 = VAR_3;
    char *VAR_5;

    switch (VAR_2) {
    case 'h':
 return FUNC_3("%6d", VAR_4->Hnum);
    case 'R':
 if (VAR_0 && VAR_4->histline)
     return FUNC_3("%S", VAR_4->histline);
 else {
     Char *VAR_6, *VAR_7;
     char *VAR_8;

     VAR_6 = FUNC_2(&VAR_4->Hlex);
     VAR_5 = FUNC_5(FUNC_0(VAR_6) * VAR_1 + 1);

     for (VAR_8 = VAR_5, VAR_7 = VAR_6; *VAR_7 != '\0'; VAR_7++)
  VAR_8 += FUNC_1(VAR_8, *VAR_7);

     *VAR_8 = '\0';
     FUNC_4(VAR_6);
     return VAR_5;
 }
    default:
 VAR_5 = FUNC_5(1);
 VAR_5[0] = '\0';
 return VAR_5;
    }
}
