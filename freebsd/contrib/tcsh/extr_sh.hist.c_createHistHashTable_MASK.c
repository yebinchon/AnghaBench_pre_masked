
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Hist {unsigned int Hhash; int Hlex; struct Hist* Hnext; } ;


 struct Hist VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct Hist*,unsigned int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(int VAR_6)
{
    if (VAR_6 == 0) {
 FUNC_1();
        return;
    }
    if (VAR_6 < 0) {
 if (VAR_5 <= 0)
     return;
 VAR_6 = VAR_5;
    }
    if (VAR_3 != ((void*)0)) {
 if (VAR_2 < VAR_4 * 3 / 4)
     return;
 FUNC_1();
    }
    VAR_4 = FUNC_2(
 VAR_6 > (int)VAR_2 ? VAR_6 : (int)VAR_2);
    VAR_3 = FUNC_6(VAR_4 * sizeof(struct Hist *));
    FUNC_5(VAR_3, 0, VAR_4 * sizeof(struct Hist *));
    FUNC_0(VAR_3[0] == VAR_1);


    {
        struct Hist *VAR_7;
        for (VAR_7 = &VAR_0; (VAR_7 = VAR_7->Hnext) != ((void*)0);) {
            unsigned VAR_8 = FUNC_3(&VAR_7->Hlex);
            FUNC_0(!VAR_7->Hhash || VAR_7->Hhash == VAR_8);
            VAR_7->Hhash = 0;
            FUNC_4(VAR_7, VAR_8);
        }
    }
}
