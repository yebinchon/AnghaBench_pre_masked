
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, int VAR_3)
{
    unsigned char VAR_4;

    if (FUNC_1(VAR_0)) {
 FUNC_2("?Need to have LINEMODE option enabled first.\r\n");
 FUNC_2("'mode ?' for help.\r\n");
  return 0;
    }

    if (VAR_3)
 VAR_4 = (VAR_1 | VAR_2);
    else
 VAR_4 = (VAR_1 & ~VAR_2);
    FUNC_0(&VAR_4, 1, 1);
    return 1;
}
