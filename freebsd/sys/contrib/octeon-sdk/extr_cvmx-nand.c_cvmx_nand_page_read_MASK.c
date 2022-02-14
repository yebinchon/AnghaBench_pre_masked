
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ULL ;
struct TYPE_2__ {int page_size; int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ,int,int ,int,int) ;
 TYPE_1__* VAR_4 ;

int FUNC_5(int VAR_5, uint64_t VAR_6, uint64_t VAR_7, int VAR_8)
{
    int VAR_9;

    FUNC_0();
    FUNC_1("%d", VAR_5);
    FUNC_1("0x%llx", (ULL)VAR_6);
    FUNC_1("0x%llx", (ULL)VAR_7);
    FUNC_1("%d", VAR_8);

    if ((VAR_5 < 0) || (VAR_5 > 7))
        FUNC_2(VAR_0);
    if (!VAR_4[VAR_5].page_size)
        FUNC_2(VAR_0);
    if (!VAR_7)
        FUNC_2(VAR_0);
    if (VAR_7 & 7)
        FUNC_2(VAR_0);
    if (VAR_8 & 7)
        FUNC_2(VAR_0);
    if (!VAR_8)
        FUNC_2(VAR_0);


    if (VAR_4[VAR_5].flags & VAR_1)
            VAR_6 = (VAR_6 & ~(VAR_4[VAR_5].page_size - 1)) | ((VAR_6 & (VAR_4[VAR_5].page_size - 1)) >> 1);

    VAR_9 = FUNC_4(VAR_5, VAR_2, FUNC_3(VAR_5), VAR_6, VAR_3, VAR_7, VAR_8);
    FUNC_2(VAR_9);
}
