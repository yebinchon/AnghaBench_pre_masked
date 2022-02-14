
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union overhead {union overhead* ov_next; } ;
typedef scalar_t__ caddr_t ;
typedef int U_long ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 union overhead** VAR_3 ;
 char* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(int VAR_4)
{
    union overhead *VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;

    if (VAR_3[VAR_4])
 return;




    VAR_5 = (union overhead *) FUNC_0(0);
    VAR_2 = (char *) VAR_5;
    if (VAR_1 == ((void*)0))
 VAR_1 = VAR_2;
    if ((long) VAR_5 & 0x3ff) {
 VAR_2 = FUNC_0((int) (1024 - ((long) VAR_5 & 0x3ff)));
 VAR_2 += (long) (1024 - ((long) VAR_5 & 0x3ff));
    }


    VAR_6 = (VAR_4 <= 8) ? 11 : VAR_4 + 3;
    VAR_7 = 1 << (VAR_6 - (VAR_4 + 3));
    VAR_2 = FUNC_0(1 << VAR_6);
    VAR_5 = (union overhead *) VAR_2;

    if ((long) VAR_5 == -1)
 return;
    VAR_2 += (long) (1 << VAR_6);




    if (((U_long) VAR_5) & VAR_0) {
 VAR_5 = (union overhead *) (((U_long) VAR_5 + (VAR_0 + 1)) & ~VAR_0);
 VAR_7--;
    }



    VAR_3[VAR_4] = VAR_5;
    VAR_8 = 1 << (VAR_4 + 3);
    while (--VAR_7 > 0) {
 VAR_5->ov_next = (union overhead *) (((caddr_t) VAR_5) + VAR_8);
 VAR_5 = (union overhead *) (((caddr_t) VAR_5) + VAR_8);
    }
    VAR_5->ov_next = ((void*)0);
}
