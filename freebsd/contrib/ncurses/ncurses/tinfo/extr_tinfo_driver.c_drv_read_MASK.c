
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ read_thread; } ;
struct TYPE_3__ {int _ifd; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef TYPE_1__ SCREEN ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_5(TERMINAL_CONTROL_BLOCK * VAR_3, int *VAR_4)
{
    SCREEN *VAR_5;
    unsigned char VAR_6 = 0;
    int VAR_7;

    FUNC_0();
    FUNC_2(VAR_4);
    FUNC_1();





    VAR_7 = FUNC_4(VAR_5->_ifd, &VAR_6, (size_t) 1);



    *VAR_4 = (int) VAR_6;
    return VAR_7;
}
