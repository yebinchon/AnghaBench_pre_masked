
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int FUNC_0 (int,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,...) ;

void
FUNC_8(Char *VAR_8, int VAR_9)
{
    if (VAR_9 <= 0)
 return;
    if (!VAR_1) {



 FUNC_3();
 return;
    }

    if (VAR_9 > VAR_7) {




 return;
    }

    if (FUNC_1(VAR_2))
 if ((VAR_9 > 1) || !FUNC_1(VAR_4)) {
     (void) FUNC_6(FUNC_5(FUNC_2(VAR_2), VAR_9, VAR_9), VAR_9, VAR_0);
     FUNC_4(VAR_8, VAR_9);
     return;
 }

    if (FUNC_1(VAR_5) && FUNC_1(VAR_3)) {
 (void) FUNC_6(FUNC_2(VAR_5), 1, VAR_0);

 FUNC_4(VAR_8, VAR_9);

 if (FUNC_1(VAR_6))
     (void) FUNC_6(FUNC_2(VAR_6), 1, VAR_0);

 (void) FUNC_6(FUNC_2(VAR_3), 1, VAR_0);
 return;
    }

    do {
 if (FUNC_1(VAR_4))
     (void) FUNC_6(FUNC_2(VAR_4), 1, VAR_0);

 FUNC_4(VAR_8++, 1);

 if (FUNC_1(VAR_6))
     (void) FUNC_6(FUNC_2(VAR_6), 1, VAR_0);

    } while (--VAR_9);

}
