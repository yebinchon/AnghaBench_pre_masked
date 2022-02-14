
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int keylist ;
typedef int WORD ;
struct TYPE_2__ {int map; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef int LONG ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int ,size_t,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(TERMINAL_CONTROL_BLOCK * VAR_3, WORD VAR_4)
{
    WORD VAR_5 = 0;
    void *VAR_6;
    LONG VAR_7 = FUNC_1(VAR_4, 0);
    int VAR_8 = -1;

    FUNC_0();

    VAR_6 = FUNC_4(&VAR_7,
    FUNC_3(VAR_3)->map,
    (size_t) (VAR_1 + VAR_0),
    sizeof(keylist[0]),
    VAR_2);
    if (VAR_6) {
 VAR_7 = *((LONG *) VAR_6);
 VAR_5 = FUNC_2(VAR_7);
 VAR_8 = (int) (VAR_5 & 0x7fff);
 if (VAR_5 & 0x8000)
     VAR_8 = -VAR_8;
    }
    return VAR_8;
}
