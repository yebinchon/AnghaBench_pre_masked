
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, int VAR_2)
{
    unsigned char VAR_3;
    extern int VAR_4;

    if (FUNC_1(VAR_0)) {
 FUNC_2("?Need to have LINEMODE option enabled first.\n");
 FUNC_2("'mode ?' for help.\n");
 return 0;
    }

    if (VAR_2)
 VAR_3 = (VAR_4 | VAR_1);
    else
 VAR_3 = (VAR_4 & ~VAR_1);
    FUNC_0(&VAR_3, 1, 1);
    return 1;
}
