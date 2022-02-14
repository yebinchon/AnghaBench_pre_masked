
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(Char *VAR_2)
{
    Char *VAR_3;
    int VAR_4;

    if (VAR_2 == ((void*)0))
 return;
    for (VAR_3 = VAR_2; *VAR_3; ) {
 if (*VAR_3 & VAR_1) {
     Char *VAR_5 = VAR_3;
     while (*VAR_3 & VAR_1)
  VAR_3++;
     if (*VAR_3) {
  VAR_4 = FUNC_2(*VAR_3 & VAR_0);
  FUNC_3(FUNC_1(VAR_5, VAR_3 + 1 - VAR_5, 0), VAR_4);
  VAR_3++;
     }
     else {




  break;
     }
 }
 else
     VAR_3 += FUNC_0(VAR_3, VAR_3 == VAR_2, 1);
    }
}
