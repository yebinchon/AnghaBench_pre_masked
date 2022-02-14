
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ULL ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ,int,int,int ,int,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int) ;

int FUNC_6(int VAR_4, uint64_t VAR_5, int VAR_6)
{
    int VAR_7;

    FUNC_0();
    FUNC_1("%d", VAR_4);
    FUNC_1("0x%llx", (ULL)VAR_5);
    FUNC_1("%d", VAR_6);

    if ((VAR_4 < 0) || (VAR_4 > 7))
        FUNC_2(VAR_0);
    if (!VAR_5)
        FUNC_2(VAR_0);
    if (VAR_5 & 7)
        FUNC_2(VAR_0);
    if (VAR_6 & 7)
        FUNC_2(VAR_0);
    if (!VAR_6)
        FUNC_2(VAR_0);

    VAR_7 = FUNC_4(VAR_4, VAR_2, 1, 0x0, 0, VAR_5, VAR_6);
    if (VAR_3[VAR_4].flags & VAR_1)
        FUNC_3(FUNC_5(VAR_5), VAR_6);
    FUNC_2(VAR_7);
}
