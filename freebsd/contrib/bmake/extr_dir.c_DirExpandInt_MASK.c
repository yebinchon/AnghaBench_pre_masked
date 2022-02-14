
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Path ;
typedef int * LstNode ;
typedef int Lst ;


 int FUNC_0 (char const*,int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1, Lst VAR_2, Lst VAR_3)
{
    LstNode VAR_4;
    Path *VAR_5;

    if (FUNC_4(VAR_2) == VAR_0) {
 while ((VAR_4 = FUNC_3(VAR_2)) != ((void*)0)) {
     VAR_5 = (Path *)FUNC_2(VAR_4);
     FUNC_0(VAR_1, VAR_5, VAR_3);
 }
 FUNC_1(VAR_2);
    }
}
